// copyright iznankai

#pragma once


#include "GameFramework/GameUserSettings.h"
#include "FrontendGameUserSettings.generated.h"



UCLASS()
class FRONTENDUI_API UFrontendGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UFrontendGameUserSettings();
	
	static UFrontendGameUserSettings* Get();

	UFUNCTION()
	const FString& GetCurrentGameDifficulty() const {return CurrentGameDifficulty;}

	UFUNCTION()
	const FString& GetCurrentGameCulture() const;

	UFUNCTION()
	void SetCurrentGameCulture(const FString& NewLanguage);

	UFUNCTION()
	void SetCurrentGameDifficulty(const FString& InNewDifficulty) {CurrentGameDifficulty = InNewDifficulty;}
	
	// ***** Audio Collection Tab ***** //
	UFUNCTION()
	float GetOverallVolume() const {return OverallVolume;}

	UFUNCTION()
	void SetOverallVolume(float InNewVolume);

	UFUNCTION()
	float GetMusicVolume() const {return MusicVolume;}

	UFUNCTION()
	void SetMusicVolume(float InNewVolume);

	UFUNCTION()
	float GetSoundFXVolume() const {return SoundFXVolume;}

	UFUNCTION()
	void SetSoundFXVolume(float InNewVolume);

	UFUNCTION()
	bool GetAllowBackgroundAudio() const {return bAllowBackgroundAudio;}

	UFUNCTION()
	void SetAllowBackgroundAudio(bool bInNewValue);

	UFUNCTION()
	bool GetUseHDRAudioMode() const {return bUseHDRAudioMode;}

	UFUNCTION()
	void SetUseHDRAudioMode(bool bInNewValue);
	// ***** Audio Collection Tab ***** //

	// ***** Video Collection Tab ***** //

	UFUNCTION()
	float GetCurrentDisplayGamma() const;

	UFUNCTION()
	void SetCurrentDisplayGamma(float InNewGamma);

	
	// ***** Video Collection Tab ***** //
	UFUNCTION()
	const FName& GetLanguage() const {return CurrentLanguage;}
	UFUNCTION()
	void SetLanguage(const FName& New) {CurrentLanguage=New;}
	
	virtual void ApplyNonResolutionSettings() override;

private:
	void OnPostLoadMap(UWorld* LoadedWorld);

private:
	UPROPERTY(Config)
	FString CurrentGameDifficulty;

	// ***** Audio Collection Tab ***** //
	UPROPERTY(Config)
	float OverallVolume;

	UPROPERTY(Config)
	float MusicVolume;

	UPROPERTY(Config)
	float SoundFXVolume;

	UPROPERTY(Config)
	bool bAllowBackgroundAudio;

	UPROPERTY(Config)
	bool bUseHDRAudioMode;

	UPROPERTY(Config)
	FName CurrentLanguage;
	// ***** Audio Collection Tab ***** //

	FDelegateHandle PostLoadMapHandle;
};
