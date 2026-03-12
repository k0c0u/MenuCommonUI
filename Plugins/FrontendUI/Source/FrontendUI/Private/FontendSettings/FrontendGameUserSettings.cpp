// copyright iznankai


#include "FontendSettings/FrontendGameUserSettings.h"

#include "AudioDevice.h"
#include "FontendSettings/FrontendDeveloperSettings.h"
#include "Internationalization/Culture.h"
#include "Kismet/KismetInternationalizationLibrary.h"
#include "Sound/SoundMix.h"

UFrontendGameUserSettings::UFrontendGameUserSettings()
: OverallVolume(1.f), MusicVolume(1.f), SoundFXVolume(1.f), bAllowBackgroundAudio(false), bUseHDRAudioMode(false)
{
	PostLoadMapHandle = FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(
		this, &ThisClass::OnPostLoadMap);
}

UFrontendGameUserSettings* UFrontendGameUserSettings::Get()
{
	if (IsValid(GEngine))
	{
		return CastChecked<UFrontendGameUserSettings>(GEngine->GetGameUserSettings());
	}
	return nullptr;
}

const FString& UFrontendGameUserSettings::GetCurrentGameCulture() const
{
	return FInternationalization::Get().GetCurrentCulture()->GetName();
}

void UFrontendGameUserSettings::SetCurrentGameCulture(const FString& NewLanguage)
{
	UKismetInternationalizationLibrary::SetCurrentCulture(NewLanguage, true);
}

void UFrontendGameUserSettings::SetOverallVolume(float InNewVolume)
{
	UWorld* InAudioWorld = nullptr;

	const UFrontendDeveloperSettings* FrontendDeveloperSettings = UFrontendDeveloperSettings::Get();
	
	if (IsValid(GEngine))
	{
		InAudioWorld = GEngine->GetCurrentPlayWorld();
	}

	if (!IsValid(InAudioWorld) || !IsValid(FrontendDeveloperSettings))
	{
		return;
	}

	USoundClass* MasterSoundClass = nullptr;
	if (UObject* LoadedObject = FrontendDeveloperSettings->MasterSoundClass.LoadSynchronous())
	{
		MasterSoundClass = Cast<USoundClass>(LoadedObject);
	}

	USoundMix* DefaultSoundMix = nullptr;
	if (UObject* LoadedObject = FrontendDeveloperSettings->DefaultSoundMix.LoadSynchronous())
	{
		DefaultSoundMix = Cast<USoundMix>(LoadedObject);
	}

	OverallVolume = InNewVolume;
 
	if (!DefaultSoundMix || !GEngine || !GEngine->UseSound())
	{
		return;
	}
	
	if (!InAudioWorld->bAllowAudioPlayback)
	{
		return;
	}

	if (FAudioDeviceHandle AudioDevice = InAudioWorld->GetAudioDevice())
	{
		AudioDevice->SetSoundMixClassOverride(DefaultSoundMix, MasterSoundClass, OverallVolume, 1.f, 0.2f, true);
		AudioDevice->PushSoundMixModifier(DefaultSoundMix);
	}
}

void UFrontendGameUserSettings::SetMusicVolume(float InNewVolume)
{
	MusicVolume = FMath::Clamp(InNewVolume, 0.f, 1.f);
	
	UWorld* InAudioWorld = IsValid(GEngine) ? GEngine->GetCurrentPlayWorld() : nullptr;
	const UFrontendDeveloperSettings* FrontendDeveloperSettings = UFrontendDeveloperSettings::Get();
    
	if (!IsValid(InAudioWorld) || !IsValid(FrontendDeveloperSettings))
	{
		return;
	}

	USoundClass* MusicSoundClass = nullptr;
	if (UObject* LoadedObject = FrontendDeveloperSettings->MusicSoundClass.LoadSynchronous())
	{
		MusicSoundClass = Cast<USoundClass>(LoadedObject);
	}

	USoundMix* DefaultSoundMix = nullptr;
	if (UObject* LoadedObject = FrontendDeveloperSettings->DefaultSoundMix.LoadSynchronous())
	{
		DefaultSoundMix = Cast<USoundMix>(LoadedObject);
	}
 
	if (!IsValid(DefaultSoundMix) || !IsValid(MusicSoundClass) || !IsValid(GEngine) || !GEngine->UseSound())
	{
		return;
	}
	
	if (!InAudioWorld->bAllowAudioPlayback)
	{
		return;
	}

	if (FAudioDeviceHandle AudioDevice = InAudioWorld->GetAudioDevice())
	{
		AudioDevice->SetSoundMixClassOverride(DefaultSoundMix, MusicSoundClass, MusicVolume, 1.f, 0.2f, true);
		AudioDevice->PushSoundMixModifier(DefaultSoundMix);
	}
}

void UFrontendGameUserSettings::SetSoundFXVolume(float InNewVolume)
{
	SoundFXVolume = FMath::Clamp(InNewVolume, 0.f, 1.f);

	UWorld* InAudioWorld = IsValid(GEngine) ? GEngine->GetCurrentPlayWorld() : nullptr;
	const UFrontendDeveloperSettings* FrontendDeveloperSettings = UFrontendDeveloperSettings::Get();
    
	if (!IsValid(InAudioWorld) || !IsValid(FrontendDeveloperSettings))
	{
		return;
	}

	USoundClass* SoundFXSoundClass = nullptr;
	if (UObject* LoadedObject = FrontendDeveloperSettings->SoundFXSoundClass.LoadSynchronous())
	{
		SoundFXSoundClass = Cast<USoundClass>(LoadedObject);
	}

	USoundMix* DefaultSoundMix = nullptr;
	if (UObject* LoadedObject = FrontendDeveloperSettings->DefaultSoundMix.LoadSynchronous())
	{
		DefaultSoundMix = Cast<USoundMix>(LoadedObject);
	}
 
	if (!IsValid(DefaultSoundMix) || !IsValid(SoundFXSoundClass) || !IsValid(GEngine) || !GEngine->UseSound())
	{
		return;
	}
	
	if (!InAudioWorld->bAllowAudioPlayback)
	{
		return;
	}

	if (FAudioDeviceHandle AudioDevice = InAudioWorld->GetAudioDevice())
	{
		AudioDevice->SetSoundMixClassOverride(DefaultSoundMix, SoundFXSoundClass, SoundFXVolume, 1.f, 0.2f, true);
		AudioDevice->PushSoundMixModifier(DefaultSoundMix);
	}
}

void UFrontendGameUserSettings::SetAllowBackgroundAudio(bool bInNewValue)
{
	bAllowBackgroundAudio = bInNewValue;
}

void UFrontendGameUserSettings::SetUseHDRAudioMode(bool bInNewValue)
{
	bUseHDRAudioMode = bInNewValue;
}

float UFrontendGameUserSettings::GetCurrentDisplayGamma() const
{
	if (GEngine)
	{
		return GEngine->GetDisplayGamma();
	}
	return 0.f;
}

void UFrontendGameUserSettings::SetCurrentDisplayGamma(float InNewGamma)
{
	if (IsValid(GEngine))
	{
		GEngine->DisplayGamma = InNewGamma;
	}
}

void UFrontendGameUserSettings::ApplyNonResolutionSettings()
{
	Super::ApplyNonResolutionSettings();

	SetOverallVolume(OverallVolume);
	SetMusicVolume(MusicVolume);
	SetSoundFXVolume(SoundFXVolume);

	SetCurrentDisplayGamma(GetCurrentDisplayGamma());
}

void UFrontendGameUserSettings::OnPostLoadMap(UWorld* LoadedWorld)
{
	if (IsValid(LoadedWorld) && LoadedWorld->IsGameWorld())
	{
		ApplyNonResolutionSettings();
	}
}
