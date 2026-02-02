// copyright iznankai


#include "FontendSettings/FrontendGameUserSettings.h"

#include "Internationalization/Culture.h"
#include "Kismet/KismetInternationalizationLibrary.h"

UFrontendGameUserSettings::UFrontendGameUserSettings()
: OverallVolume(1.f), MusicVolume(1.f), SoundFXVolume(1.f), bAllowBackgroundAudio(false), bUseHDRAudioMode(false)
{
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
	OverallVolume = InNewVolume;

	// Logic to controlling the volume
}

void UFrontendGameUserSettings::SetMusicVolume(float InNewVolume)
{
	MusicVolume = InNewVolume;
}

void UFrontendGameUserSettings::SetSoundFXVolume(float InNewVolume)
{
	SoundFXVolume = InNewVolume;
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
