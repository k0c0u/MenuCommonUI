// copyright iznankai


#include "Widgets/Options/OptionsDataRegistry.h"

#include "FrontendFunctionLibrary.h"
#include "FrontendGameplayTags.h"
#include "Widgets/Options/DataObjects/CollectionListDataObject.h"
#include "Widgets/Options/DataObjects/StringListDataObject.h"
#include "Widgets/Options/OptionsDataInteractionHelper.h"
#include "FontendSettings/FrontendGameUserSettings.h"
#include "Internationalization/StringTableRegistry.h"
#include "Widgets/Options/DataObjects/ScalarListDataObject.h"
#include "Widgets/Options/DataObjects/StringResolutionListDataObject.h"
#include "EnhancedInputSubsystems.h"
#include "FontendSettings/FrontendDeveloperSettings.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "Widgets/Options/DataObjects/KeyRemapListDataObject.h"


#define MAKE_OPTIONS_DATA_CONTROL(SetterOrGetterFuncName) \
	MakeShared<FOptionsDataInteractionHelper>(GET_FUNCTION_NAME_STRING_CHECKED(UFrontendGameUserSettings, SetterOrGetterFuncName))

#define GET_DESCRIPTION(InKey) LOCTABLE("/FrontendUI/Blueprints/UI/Data/StringTable/ST_OptionsScreenDescription.ST_OptionsScreenDescription", InKey)
#define GET_DESCRIPTION_LOC(InKey) UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT(#InKey)))

void UOptionsDataRegistry::InitOptionsDataRegistry(ULocalPlayer* InOwningLocalPlayer)
{
	InitGameplayCollectionTab();
	InitAudioCollectionTab();
	InitVideoCollectionTab();
	InitControlCollectionTab(InOwningLocalPlayer);
}

TArray<TObjectPtr<UBaseListDataObject>> UOptionsDataRegistry::GetListSourceItemBySelectedTabID(
	const FName& InSelectedTabID) const
{
	const TObjectPtr<UCollectionListDataObject>* FoundTabCollectionPtr = RegisteredOptionsTabCollection.FindByPredicate(
		[InSelectedTabID](const TObjectPtr<UCollectionListDataObject>& AvailableTabCollection)-> bool
		{
			return AvailableTabCollection->GetDataID() == InSelectedTabID;
		}
	);

	if (!FoundTabCollectionPtr)
	{
		return {};
	}

	UCollectionListDataObject* TabCollection = *FoundTabCollectionPtr;

	TArray<TObjectPtr<UBaseListDataObject>> AllChildListItems;

	for (UBaseListDataObject* ChildListData : TabCollection->GetAllChildListData())
	{
		if (!IsValid(ChildListData))
		{
			continue;
		}

		AllChildListItems.Add(ChildListData);

		if (ChildListData->HasAnyChildListData())
		{
			FindChildListDataRecursively(ChildListData, AllChildListItems);
		}
	}

	return AllChildListItems;
}

void UOptionsDataRegistry::InitGameplayCollectionTab()
{
	if (UCollectionListDataObject* GameplayTabCollection = NewObject<UCollectionListDataObject>())
	{
		GameplayTabCollection->SetDataID(FName("GameplayTabCollectionKey"));
		GameplayTabCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(GameplayTabCollectionKey));

		//TSharedPtr<FOptionsDataInteractionHelper> ConstructedHelper =
		//	MakeShared<FOptionsDataInteractionHelper>(GET_FUNCTION_NAME_STRING_CHECKED(UFrontendGameUserSettings, GetCurrentGameDifficulty())>();

		if (UStringListDataObject* GameDifficult = NewObject<UStringListDataObject>())
		{
			GameDifficult->SetDataID(FName("GameDifficultKey"));
			GameDifficult->SetDataDisplayName(GET_DESCRIPTION_LOC(GameDifficultKey));

			GameDifficult->SetDescriptionText(GET_DESCRIPTION_LOC(GameDifficultDescriptionKey));

			GameDifficult->AddDynamicOption(TEXT("Easy"), GET_DESCRIPTION_LOC(EasyKey));
			GameDifficult->AddDynamicOption(TEXT("Normal"), GET_DESCRIPTION_LOC(NormalKey));
			GameDifficult->AddDynamicOption(TEXT("Hard"), GET_DESCRIPTION_LOC(HardKey));

			GameDifficult->SetDefaultValueFromString(TEXT("Normal"));

			GameDifficult->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetCurrentGameDifficulty));
			GameDifficult->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetCurrentGameDifficulty));

			GameDifficult->SetShouldApplyChangeImmediately(true);

			GameplayTabCollection->AddChildListData(GameDifficult);
		}

		//Game Language
		if (UStringListDataObject* GameLanguage = NewObject<UStringListDataObject>())
		{
			GameLanguage->SetDataID(FName("GameLanguageKey"));
			GameLanguage->SetDataDisplayName(GET_DESCRIPTION_LOC(GameLanguageKey));
			//const FString DefaultLanguage = FPlatformMisc::GetDefaultLanguage();
			GameLanguage->AddDynamicOption(TEXT("en"), GET_DESCRIPTION_LOC(EnglishKey));
			GameLanguage->AddDynamicOption(TEXT("ru"), GET_DESCRIPTION_LOC(RussianKey));
			//GameLanguage->SetDefaultValueFromString(TEXT("en"));
			GameLanguage->SetDefaultValueFromString(UFrontendDeveloperSettings::Get()->NormalizeCultureName(FName(*FPlatformMisc::GetDefaultLanguage())).ToString());
			GameLanguage->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetCurrentGameCulture));
			GameLanguage->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetCurrentGameCulture));
			GameLanguage->SetShouldApplyChangeImmediately(true);
			/*Language->SetSoftDescriptionImage(
				UFrontendFunctionLibrary::GetOptionsSoftImageByTag(FrontendGameplayTags::Frontend_Image_TestImage));*/

			GameplayTabCollection->AddChildListData(GameLanguage);
		}

		RegisteredOptionsTabCollection.Add(GameplayTabCollection);
	}
}

void UOptionsDataRegistry::InitAudioCollectionTab()
{
	if (UCollectionListDataObject* AudioTabCollection = NewObject<UCollectionListDataObject>())
	{
		AudioTabCollection->SetDataID(FName("AudioTabCollectionKey"));
		AudioTabCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(AudioTabCollectionKey));

		//Volume Category
		if (UCollectionListDataObject* VolumeCategoryCollection = NewObject<UCollectionListDataObject>())
		{
			VolumeCategoryCollection->SetDataID(FName("VolumeCategoryCollectionKey"));
			VolumeCategoryCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(VolumeCategoryCollectionKey));

			AudioTabCollection->AddChildListData(VolumeCategoryCollection);

			//OverallVolume
			if (UScalarListDataObject* OverallVolume = NewObject<UScalarListDataObject>())
			{
				OverallVolume->SetDataID(FName("OverallVolumeKey"));
				OverallVolume->SetDataDisplayName(GET_DESCRIPTION_LOC(OverallVolumeKey));
				OverallVolume->SetDescriptionText(GET_DESCRIPTION_LOC(OverallVolumeDescriptionKey)); 
				OverallVolume->SetDisplayValueRange(TRange<float>(0.f, 1.f));
				OverallVolume->SetOutputValueRange(TRange<float>(0.f, 2.f));
				OverallVolume->SetSliderStepSize(0.01f);
				OverallVolume->SetDefaultValueFromString(LexToString(1.f));
				OverallVolume->SetDisplayNumericType(ECommonNumericType::Percentage);
				OverallVolume->SetNumberFormattingOptions(UScalarListDataObject::NoDecimal());
				// No Decimal : 50% // One Decimal : 50.5%
				OverallVolume->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetOverallVolume));
				OverallVolume->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetOverallVolume));
				OverallVolume->SetShouldApplyChangeImmediately(true);

				VolumeCategoryCollection->AddChildListData(OverallVolume);
			}

			//Music Volume
			if (UScalarListDataObject* MusicVolume = NewObject<UScalarListDataObject>())
			{
				MusicVolume->SetDataID(FName("MusicVolumeKey"));
				MusicVolume->SetDataDisplayName(GET_DESCRIPTION_LOC(MusicVolumeKey));
				MusicVolume->SetDescriptionText(GET_DESCRIPTION_LOC(MusicVolumeDescriptionKey));
				MusicVolume->SetDisplayValueRange(TRange<float>(0.f, 1.f));
				MusicVolume->SetOutputValueRange(TRange<float>(0.f, 2.f));
				MusicVolume->SetSliderStepSize(0.01f);
				MusicVolume->SetDefaultValueFromString(LexToString(1.f));
				MusicVolume->SetDisplayNumericType(ECommonNumericType::Percentage);
				MusicVolume->SetNumberFormattingOptions(UScalarListDataObject::NoDecimal());
				// No Decimal : 50% // One Decimal : 50.5%
				MusicVolume->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetMusicVolume));
				MusicVolume->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetMusicVolume));
				MusicVolume->SetShouldApplyChangeImmediately(true);

				VolumeCategoryCollection->AddChildListData(MusicVolume);
			}

			//SoundFX Volume
			if (UScalarListDataObject* SoundFXVolume = NewObject<UScalarListDataObject>())
			{
				SoundFXVolume->SetDataID(FName("SoundFXVolumeKey"));
				SoundFXVolume->SetDataDisplayName(GET_DESCRIPTION_LOC(SoundFXVolumeKey));
				SoundFXVolume->SetDescriptionText(GET_DESCRIPTION_LOC(SoundFXVolumeDescriptionKey));
				SoundFXVolume->SetDisplayValueRange(TRange<float>(0.f, 1.f));
				SoundFXVolume->SetOutputValueRange(TRange<float>(0.f, 2.f));
				SoundFXVolume->SetSliderStepSize(0.01f);
				SoundFXVolume->SetDefaultValueFromString(LexToString(1.f));
				SoundFXVolume->SetDisplayNumericType(ECommonNumericType::Percentage);
				SoundFXVolume->SetNumberFormattingOptions(UScalarListDataObject::NoDecimal());
				// No Decimal : 50% // One Decimal : 50.5%
				SoundFXVolume->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetSoundFXVolume));
				SoundFXVolume->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetSoundFXVolume));
				SoundFXVolume->SetShouldApplyChangeImmediately(true);

				VolumeCategoryCollection->AddChildListData(SoundFXVolume);
			}
		}

		//Sound Category
		if (UCollectionListDataObject* SoundCategoryCollection = NewObject<UCollectionListDataObject>())
		{
			SoundCategoryCollection->SetDataID(FName("SoundCategoryCollectionKey"));
			SoundCategoryCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(SoundCategoryCollectionKey));

			AudioTabCollection->AddChildListData(SoundCategoryCollection);

			// Allow Background Audio
			if (UStringBoolListDataObject* AllowBackgroundAudio = NewObject<UStringBoolListDataObject>())
			{
				AllowBackgroundAudio->SetDataID(FName("AllowBackgroundAudio"));
				AllowBackgroundAudio->SetDataDisplayName(GET_DESCRIPTION_LOC(AllowBackgroundAudioKey));
				AllowBackgroundAudio->OverrideTrueDisplayText(GET_DESCRIPTION_LOC(EnableKey));
				AllowBackgroundAudio->OverrideFalseDisplayText(GET_DESCRIPTION_LOC(DisableKey));
				AllowBackgroundAudio->SetFalseAsDefaultValue();
				AllowBackgroundAudio->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetAllowBackgroundAudio));
				AllowBackgroundAudio->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetAllowBackgroundAudio));
				AllowBackgroundAudio->SetShouldApplyChangeImmediately(true);

				SoundCategoryCollection->AddChildListData(AllowBackgroundAudio);
			}

			// Use HDR Audio
			if (UStringBoolListDataObject* UseHDRAudioMode = NewObject<UStringBoolListDataObject>())
			{
				UseHDRAudioMode->SetDataID(FName("UseHDRAudioModeKey"));
				UseHDRAudioMode->SetDataDisplayName(GET_DESCRIPTION_LOC(UseHDRAudioModeKey));
				UseHDRAudioMode->OverrideTrueDisplayText(GET_DESCRIPTION_LOC(EnableKey));
				UseHDRAudioMode->OverrideFalseDisplayText(GET_DESCRIPTION_LOC(DisableKey));
				UseHDRAudioMode->SetFalseAsDefaultValue();
				UseHDRAudioMode->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetUseHDRAudioMode));
				UseHDRAudioMode->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetUseHDRAudioMode));
				UseHDRAudioMode->SetShouldApplyChangeImmediately(true);

				SoundCategoryCollection->AddChildListData(UseHDRAudioMode);
			}
		}

		RegisteredOptionsTabCollection.Add(AudioTabCollection);
	}
}

void UOptionsDataRegistry::InitVideoCollectionTab()
{
	if (UCollectionListDataObject* VideoTabCollection = NewObject<UCollectionListDataObject>())
	{
		VideoTabCollection->SetDataID(FName("VideoTabCollectionKey"));
		VideoTabCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(VideoTabCollectionKey));

		UStringEnumListDataObject* CreatedWindowMode = nullptr;

		// DisplayCategory
		if (UCollectionListDataObject* DisplayCategoryCollection = NewObject<UCollectionListDataObject>())
		{
			DisplayCategoryCollection->SetDataID(FName("DisplayCategoryCollectionKey"));
			DisplayCategoryCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(DisplayCategoryCollectionKey));

			VideoTabCollection->AddChildListData(DisplayCategoryCollection);

			FOptionsDataEditConditionDescription PackagedBuildOnlyCondition;
			PackagedBuildOnlyCondition.SetEditConditionFunc(
				[]()-> bool
				{
					const bool bIsEditor = GIsEditor || GIsPlayInEditorWorld;
					return !bIsEditor;
				}
			);
			PackagedBuildOnlyCondition.SetDisabledRichReason(GET_DESCRIPTION_LOC(DisplayDisabledRichReason).ToString());


			//Window Mode
			if (UStringEnumListDataObject* WindowMode = NewObject<UStringEnumListDataObject>())
			{
				WindowMode->SetDataID(FName("WindowModeKey"));
				WindowMode->SetDataDisplayName(GET_DESCRIPTION_LOC(WindowModeKey));
				WindowMode->SetDescriptionText(GET_DESCRIPTION("WindowModeDescKey"));
				WindowMode->AddEnumOption(EWindowMode::Fullscreen, GET_DESCRIPTION_LOC(FullscreenModeKey));
				WindowMode->AddEnumOption(EWindowMode::WindowedFullscreen, GET_DESCRIPTION_LOC(BorderlessWindowKey));
				WindowMode->AddEnumOption(EWindowMode::Windowed, GET_DESCRIPTION_LOC(WindowedKey));
				WindowMode->SetDefaultValueFromEnumOption(EWindowMode::WindowedFullscreen);
				WindowMode->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetFullscreenMode));
				WindowMode->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetFullscreenMode));
				WindowMode->SetShouldApplyChangeImmediately(true);

				WindowMode->AddEditCondition(PackagedBuildOnlyCondition);

				CreatedWindowMode = WindowMode;

				DisplayCategoryCollection->AddChildListData(WindowMode);
			}

			//Screen Resolution
			if (UStringResolutionListDataObject* ScreenResolution = NewObject<UStringResolutionListDataObject>())
			{
				ScreenResolution->SetDataID(FName("ScreenResolutionKey"));
				ScreenResolution->SetDataDisplayName(GET_DESCRIPTION_LOC(ScreenResolutionKey));
				ScreenResolution->SetDescriptionText(GET_DESCRIPTION("ScreenResolutionDescKey"));
				ScreenResolution->InitResolutionValues();
				ScreenResolution->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetScreenResolution));
				ScreenResolution->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetScreenResolution));
				ScreenResolution->SetShouldApplyChangeImmediately(true);

				ScreenResolution->AddEditCondition(PackagedBuildOnlyCondition);

				FOptionsDataEditConditionDescription WindowModeEditCondition;
				WindowModeEditCondition.SetEditConditionFunc(
					[CreatedWindowMode]()-> bool
					{
						const bool bIsBorderlessWindow = CreatedWindowMode->GetCurrentValueAsEnum<EWindowMode::Type>()
							==
							EWindowMode::WindowedFullscreen;

						return !bIsBorderlessWindow;
					}
				);
				
				WindowModeEditCondition.SetDisabledRichReason(GET_DESCRIPTION_LOC(ScreenResolutionisabledRichReasonKey).ToString());
				WindowModeEditCondition.SetDisabledForcedStringValue(ScreenResolution->GetMaximumAvailableResolution());
				ScreenResolution->AddEditCondition(WindowModeEditCondition);

				ScreenResolution->AddEditDependencyData(CreatedWindowMode);

				DisplayCategoryCollection->AddChildListData(ScreenResolution);
			}
		}

		// Graphics Category
		if (UCollectionListDataObject* GraphicsCategoryCollection = NewObject<UCollectionListDataObject>())
		{
			GraphicsCategoryCollection->SetDataID(FName("GraphicsCategoryCollectionKey"));
			GraphicsCategoryCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(GraphicsCategoryCollectionKey));

			VideoTabCollection->AddChildListData(GraphicsCategoryCollection);

			//Display Gamma
			if (UScalarListDataObject* DisplayGamma = NewObject<UScalarListDataObject>())
			{
				DisplayGamma->SetDataID(FName("DisplayGammaKey"));
				DisplayGamma->SetDataDisplayName(GET_DESCRIPTION_LOC(DisplayGammaKey));
				DisplayGamma->SetDescriptionText(GET_DESCRIPTION("DisplayGammaDescKey"));
				DisplayGamma->SetDisplayValueRange(TRange<float>(0.0f, 1.0f));
				DisplayGamma->SetOutputValueRange(TRange<float>(1.7f, 2.7f));
				// The default value in Unreal has is : 2.2f
				DisplayGamma->SetSliderStepSize(0.01f);
				DisplayGamma->SetDisplayNumericType(ECommonNumericType::Percentage);
				DisplayGamma->SetNumberFormattingOptions(UScalarListDataObject::NoDecimal());
				DisplayGamma->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetCurrentDisplayGamma));
				DisplayGamma->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetCurrentDisplayGamma));
				DisplayGamma->SetDefaultValueFromString(LexToString(2.2f));

				GraphicsCategoryCollection->AddChildListData(DisplayGamma);
			}

			//Overall Quality
			UStringIntegerListDataObject* CreateOverallQuality = nullptr;

			if (UStringIntegerListDataObject* OverallQuality = NewObject<UStringIntegerListDataObject>())
			{
				OverallQuality->SetDataID(FName("OverallQualityKey"));
				OverallQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(OverallQualityKey));
				OverallQuality->SetDescriptionText(GET_DESCRIPTION("OverallQualityDescKey"));
				OverallQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(LowKey));
				OverallQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				OverallQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(HighKey));
				OverallQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(EpicKey));
				OverallQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				OverallQuality->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetOverallScalabilityLevel));
				OverallQuality->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetOverallScalabilityLevel));
				OverallQuality->SetShouldApplyChangeImmediately(true);

				GraphicsCategoryCollection->AddChildListData(OverallQuality);

				CreateOverallQuality = OverallQuality;
			}

			//Resolution Scale
			if (UScalarListDataObject* ResolutionScale = NewObject<UScalarListDataObject>())
			{
				ResolutionScale->SetDataID(FName("ResolutionScaleKey"));
				ResolutionScale->SetDataDisplayName(GET_DESCRIPTION_LOC(ResolutionScaleKey));
				ResolutionScale->SetDescriptionText(GET_DESCRIPTION("ResolutionScaleDescKey"));
				ResolutionScale->SetDisplayValueRange(TRange<float>(0.0f, 1.0f));
				ResolutionScale->SetOutputValueRange(TRange<float>(0.0f, 1.0f));
				ResolutionScale->SetSliderStepSize(0.01f);
				ResolutionScale->SetDisplayNumericType(ECommonNumericType::Percentage);
				ResolutionScale->SetNumberFormattingOptions(UScalarListDataObject::NoDecimal());
				ResolutionScale->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetResolutionScaleNormalized));
				ResolutionScale->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetResolutionScaleNormalized));
				ResolutionScale->SetShouldApplyChangeImmediately(true);

				ResolutionScale->AddEditDependencyData(CreateOverallQuality);

				GraphicsCategoryCollection->AddChildListData(ResolutionScale);
			}

			//Global Illumination Quality
			if (UStringIntegerListDataObject* GlobalIlluminationQuality = NewObject<UStringIntegerListDataObject>())
			{
				GlobalIlluminationQuality->SetDataID(FName("GlobalIlluminationQualityKey"));
				GlobalIlluminationQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(GlobalIlluminationQualityKey));
				GlobalIlluminationQuality->SetDescriptionText(GET_DESCRIPTION("GlobalIlluminationQualityDescKey"));
				GlobalIlluminationQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(LowKey));
				GlobalIlluminationQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				GlobalIlluminationQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(HighKey));
				GlobalIlluminationQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(EpicKey));
				GlobalIlluminationQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				GlobalIlluminationQuality->
					SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetGlobalIlluminationQuality));
				GlobalIlluminationQuality->
					SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetGlobalIlluminationQuality));
				GlobalIlluminationQuality->SetShouldApplyChangeImmediately(true);

				GlobalIlluminationQuality->AddEditDependencyData(CreateOverallQuality);

				CreateOverallQuality->AddEditDependencyData(GlobalIlluminationQuality);

				GraphicsCategoryCollection->AddChildListData(GlobalIlluminationQuality);
			}

			//Shadow Quality
			if (UStringIntegerListDataObject* ShadowQuality = NewObject<UStringIntegerListDataObject>())
			{
				ShadowQuality->SetDataID(FName("ShadowQualityKey"));
				ShadowQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(ShadowQualityKey));
				ShadowQuality->SetDescriptionText(GET_DESCRIPTION("ShadowQualityDescKey"));
				ShadowQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(LowKey));
				ShadowQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				ShadowQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(HighKey));
				ShadowQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(EpicKey));
				ShadowQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				ShadowQuality->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetShadowQuality));
				ShadowQuality->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetShadowQuality));
				ShadowQuality->SetShouldApplyChangeImmediately(true);

				ShadowQuality->AddEditDependencyData(CreateOverallQuality);

				CreateOverallQuality->AddEditDependencyData(ShadowQuality);

				GraphicsCategoryCollection->AddChildListData(ShadowQuality);
			}

			//AntiAliasing Quality
			if (UStringIntegerListDataObject* AntiAliasingQuality = NewObject<UStringIntegerListDataObject>())
			{
				AntiAliasingQuality->SetDataID(FName("AntiAliasingQualityKey"));
				AntiAliasingQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(AntiAliasingQualityKey));
				AntiAliasingQuality->SetDescriptionText(GET_DESCRIPTION("AntiAliasingDescKey"));
				AntiAliasingQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(LowKey));
				AntiAliasingQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				AntiAliasingQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(HighKey));
				AntiAliasingQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(EpicKey));
				AntiAliasingQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				AntiAliasingQuality->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetAntiAliasingQuality));
				AntiAliasingQuality->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetAntiAliasingQuality));
				AntiAliasingQuality->SetShouldApplyChangeImmediately(true);

				AntiAliasingQuality->AddEditDependencyData(CreateOverallQuality);

				CreateOverallQuality->AddEditDependencyData(AntiAliasingQuality);

				GraphicsCategoryCollection->AddChildListData(AntiAliasingQuality);
			}

			//View Distance Quality
			if (UStringIntegerListDataObject* ViewDistanceQuality = NewObject<UStringIntegerListDataObject>())
			{
				ViewDistanceQuality->SetDataID(FName("ViewDistanceQualityKey"));
				ViewDistanceQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(ViewDistanceQualityKey));
				ViewDistanceQuality->SetDescriptionText(GET_DESCRIPTION("ViewDistanceDescKey"));
				ViewDistanceQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(NearKey));
				ViewDistanceQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				ViewDistanceQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(FarKey));
				ViewDistanceQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(VeryFarKey));
				ViewDistanceQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				ViewDistanceQuality->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetViewDistanceQuality));
				ViewDistanceQuality->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetViewDistanceQuality));
				ViewDistanceQuality->SetShouldApplyChangeImmediately(true);

				ViewDistanceQuality->AddEditDependencyData(CreateOverallQuality);

				CreateOverallQuality->AddEditDependencyData(ViewDistanceQuality);

				GraphicsCategoryCollection->AddChildListData(ViewDistanceQuality);
			}

			//Texture Quality
			if (UStringIntegerListDataObject* TextureQuality = NewObject<UStringIntegerListDataObject>())
			{
				TextureQuality->SetDataID(FName("TextureQualityKey"));
				TextureQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(TextureQualityKey));
				TextureQuality->SetDescriptionText(GET_DESCRIPTION("TextureQualityDescKey"));
				TextureQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(LowKey));
				TextureQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				TextureQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(HighKey));
				TextureQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(EpicKey));
				TextureQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				TextureQuality->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetTextureQuality));
				TextureQuality->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetTextureQuality));
				TextureQuality->SetShouldApplyChangeImmediately(true);

				TextureQuality->AddEditDependencyData(CreateOverallQuality);

				CreateOverallQuality->AddEditDependencyData(TextureQuality);

				GraphicsCategoryCollection->AddChildListData(TextureQuality);
			}

			//Visual Effects Quality
			if (UStringIntegerListDataObject* VisualEffectQuality = NewObject<UStringIntegerListDataObject>())
			{
				VisualEffectQuality->SetDataID(FName("VisualEffectQualityKey"));
				VisualEffectQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(VisualEffectQualityKey));
				VisualEffectQuality->SetDescriptionText(GET_DESCRIPTION("VisualEffectQualityDescKey"));
				VisualEffectQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(LowKey));
				VisualEffectQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				VisualEffectQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(HighKey));
				VisualEffectQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(EpicKey));
				VisualEffectQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				VisualEffectQuality->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetVisualEffectQuality));
				VisualEffectQuality->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetVisualEffectQuality));
				VisualEffectQuality->SetShouldApplyChangeImmediately(true);

				VisualEffectQuality->AddEditDependencyData(CreateOverallQuality);

				CreateOverallQuality->AddEditDependencyData(VisualEffectQuality);

				GraphicsCategoryCollection->AddChildListData(VisualEffectQuality);
			}

			//Reflection Quality
			if (UStringIntegerListDataObject* ReflectionQuality = NewObject<UStringIntegerListDataObject>())
			{
				ReflectionQuality->SetDataID(FName("ReflectionQualityKey"));
				ReflectionQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(ReflectionQualityKey));
				ReflectionQuality->SetDescriptionText(GET_DESCRIPTION("ReflectionQualityDescKey"));
				ReflectionQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(LowKey));
				ReflectionQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				ReflectionQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(HighKey));
				ReflectionQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(EpicKey));
				ReflectionQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				ReflectionQuality->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetReflectionQuality));
				ReflectionQuality->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetReflectionQuality));
				ReflectionQuality->SetShouldApplyChangeImmediately(true);

				ReflectionQuality->AddEditDependencyData(CreateOverallQuality);

				CreateOverallQuality->AddEditDependencyData(ReflectionQuality);

				GraphicsCategoryCollection->AddChildListData(ReflectionQuality);
			}

			//Post Processing Quality
			if (UStringIntegerListDataObject* PostProcessingQuality = NewObject<UStringIntegerListDataObject>())
			{
				PostProcessingQuality->SetDataID(FName("PostProcessingQualityKey"));
				PostProcessingQuality->SetDataDisplayName(GET_DESCRIPTION_LOC(PostProcessingQualityKey));
				PostProcessingQuality->SetDescriptionText(GET_DESCRIPTION("PostProcessingQualityDescKey"));
				PostProcessingQuality->AddIntegerOption(0, GET_DESCRIPTION_LOC(LowKey));
				PostProcessingQuality->AddIntegerOption(1, GET_DESCRIPTION_LOC(MediumKey));
				PostProcessingQuality->AddIntegerOption(2, GET_DESCRIPTION_LOC(HighKey));
				PostProcessingQuality->AddIntegerOption(3, GET_DESCRIPTION_LOC(EpicKey));
				PostProcessingQuality->AddIntegerOption(4, GET_DESCRIPTION_LOC(CinematicKey));
				PostProcessingQuality->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetPostProcessingQuality));
				PostProcessingQuality->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetPostProcessingQuality));
				PostProcessingQuality->SetShouldApplyChangeImmediately(true);

				PostProcessingQuality->AddEditDependencyData(CreateOverallQuality);

				CreateOverallQuality->AddEditDependencyData(PostProcessingQuality);

				GraphicsCategoryCollection->AddChildListData(PostProcessingQuality);
			}
		}

		//Advance Graphics Category
		if (UCollectionListDataObject* AdvanceGraphicsCategoryCollection = NewObject<UCollectionListDataObject>())
		{
			AdvanceGraphicsCategoryCollection->SetDataID(FName("AdvanceGraphicsCategoryCollectionKey"));
			AdvanceGraphicsCategoryCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(AdvanceGraphicsCategoryCollectionKey));

			VideoTabCollection->AddChildListData(AdvanceGraphicsCategoryCollection);

			//Vertical Sync
			if (UStringBoolListDataObject* VerticalSync = NewObject<UStringBoolListDataObject>())
			{
				VerticalSync->SetDataID(FName("VerticalSyncKey"));
				VerticalSync->SetDataDisplayName(GET_DESCRIPTION_LOC(VerticalSyncKey));
				VerticalSync->SetDescriptionText(GET_DESCRIPTION("VerticalSyncDescKey"));
				VerticalSync->OverrideTrueDisplayText(GET_DESCRIPTION_LOC(EnableKey));
				VerticalSync->OverrideFalseDisplayText(GET_DESCRIPTION_LOC(DisableKey));
				VerticalSync->SetFalseAsDefaultValue();
				VerticalSync->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(IsVSyncEnabled));
				VerticalSync->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetVSyncEnabled));
				VerticalSync->SetShouldApplyChangeImmediately(true);

				FOptionsDataEditConditionDescription FullScreenOnlyCondition;
				FullScreenOnlyCondition.SetEditConditionFunc(
					[CreatedWindowMode]()-> bool
					{
						return CreatedWindowMode->GetCurrentValueAsEnum<EWindowMode::Type>() == EWindowMode::Fullscreen;
					});
				FullScreenOnlyCondition.SetDisabledRichReason(GET_DESCRIPTION_LOC(VerticalSyncDisabledRichReasonKey).ToString());
				FullScreenOnlyCondition.SetDisabledForcedStringValue(TEXT("false"));

				VerticalSync->AddEditCondition(FullScreenOnlyCondition);

				AdvanceGraphicsCategoryCollection->AddChildListData(VerticalSync);
			}

			//Frame Rate Limit
			if (UStringListDataObject* FrameRateLimit = NewObject<UStringListDataObject>())
			{
				FrameRateLimit->SetDataID(FName("FrameRateLimitKey"));
				FrameRateLimit->SetDataDisplayName(GET_DESCRIPTION_LOC(FrameRateLimitKey));
				FrameRateLimit->SetDescriptionText(GET_DESCRIPTION("FrameRateLimitDescKey"));
				FrameRateLimit->AddDynamicOption(LexToString(30.f), FText::FromString(TEXT("30 FPS")));
				FrameRateLimit->AddDynamicOption(LexToString(60.f), FText::FromString(TEXT("60 FPS")));
				FrameRateLimit->AddDynamicOption(LexToString(90.f), FText::FromString(TEXT("90 FPS")));
				FrameRateLimit->AddDynamicOption(LexToString(120.f), FText::FromString(TEXT("120 FPS")));
				FrameRateLimit->AddDynamicOption(LexToString(0.f), GET_DESCRIPTION_LOC(NoLimitKey));
				FrameRateLimit->SetDefaultValueFromString(LexToString(0.f));
				FrameRateLimit->SetDataDynamicGetter(MAKE_OPTIONS_DATA_CONTROL(GetFrameRateLimit));
				FrameRateLimit->SetDataDynamicSetter(MAKE_OPTIONS_DATA_CONTROL(SetFrameRateLimit));
				FrameRateLimit->SetShouldApplyChangeImmediately(true);

				AdvanceGraphicsCategoryCollection->AddChildListData(FrameRateLimit);
			}
		}

		RegisteredOptionsTabCollection.Add(VideoTabCollection);
	}
}

void UOptionsDataRegistry::InitControlCollectionTab(ULocalPlayer* InOwningLocalPlayer)
{
	if (UCollectionListDataObject* ControlTabCollection = NewObject<UCollectionListDataObject>())
	{
		ControlTabCollection->SetDataID(FName("ControlTabCollectionKey"));
		ControlTabCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(ControlTabCollectionKey));

		UEnhancedInputLocalPlayerSubsystem* EISubsystem = InOwningLocalPlayer->GetSubsystem<
			UEnhancedInputLocalPlayerSubsystem>();
		if (!IsValid(EISubsystem))
		{
			return;
		}

		UEnhancedInputUserSettings* EIUserSettings = EISubsystem->GetUserSettings();
		if (!IsValid(EIUserSettings))
		{
			return;
		}

		//Keyboard Mouse Category
		if (UCollectionListDataObject* KeyboardMouseCategoryCollection = NewObject<UCollectionListDataObject>())
		{
			KeyboardMouseCategoryCollection->SetDataID(FName("KeyboardMouseCategoryCollectionKey"));
			KeyboardMouseCategoryCollection->SetDataDisplayName(GET_DESCRIPTION_LOC(KeyboardMouseCategoryCollectionKey));

			ControlTabCollection->AddChildListData(KeyboardMouseCategoryCollection);

			//Keyboard Mouse Inputs
			{
				FPlayerMappableKeyQueryOptions KeyboardMouseOnly;
				KeyboardMouseOnly.KeyToMatch = EKeys::S;
				KeyboardMouseOnly.bMatchBasicKeyTypes = true;

				/*FPlayerMappableKeyQueryOptions GamepadOnly;
				GamepadOnly.KeyToMatch = EKeys::Gamepad_FaceButton_Bottom;
				GamepadOnly.bMatchBasicKeyTypes = true;*/
				
				for (const TPair<FGameplayTag, TObjectPtr<UEnhancedPlayerMappableKeyProfile>>& ProfilePair :
				     EIUserSettings->GetAllSavedKeyProfiles())
				{
					if (UEnhancedPlayerMappableKeyProfile* MappableKeyProfile = ProfilePair.Value)
					{
						for (const TPair<FName, FKeyMappingRow>& MappingRowPair : MappableKeyProfile->GetPlayerMappingRows())
						{
							for (const FPlayerKeyMapping& KeyMapping : MappingRowPair.Value.Mappings)
							{
								if (MappableKeyProfile->DoesMappingPassQueryOptions(KeyMapping, KeyboardMouseOnly))
								{
									if (UKeyRemapListDataObject* KeyRemapDataObject = NewObject<UKeyRemapListDataObject>())
									{
										KeyRemapDataObject->SetDataID(KeyMapping.GetMappingName());
										KeyRemapDataObject->SetDataDisplayName(KeyMapping.GetDisplayName());
										KeyRemapDataObject->InitKeyRemapData(EIUserSettings, MappableKeyProfile, ECommonInputType::MouseAndKeyboard, KeyMapping);

										KeyboardMouseCategoryCollection->AddChildListData(KeyRemapDataObject);
									}
								}
							}
						}
					}
				}
			}
		}

		/*
		//Gamepad Category
		if (UCollectionListDataObject* GamepadCategoryCollection = NewObject<UCollectionListDataObject>())
		{
			GamepadCategoryCollection->SetDataID(FName("GamepadCategoryCollection"));
			GamepadCategoryCollection->SetDataDisplayName(FText::FromString(TEXT("Gamepad")));

			ControlTabCollection->AddChildListData(GamepadCategoryCollection);

			//Gamepad Inputs
			{
				FPlayerMappableKeyQueryOptions GamepadOnly;
				GamepadOnly.KeyToMatch = EKeys::Gamepad_FaceButton_Bottom;
				GamepadOnly.bMatchBasicKeyTypes = true;
				
				for (const TPair<FGameplayTag, TObjectPtr<UEnhancedPlayerMappableKeyProfile>>& ProfilePair :
					 EIUserSettings->GetAllSavedKeyProfiles())
				{
					if (UEnhancedPlayerMappableKeyProfile* MappableKeyProfile = ProfilePair.Value)
					{
						for (const TPair<FName, FKeyMappingRow>& MappingRowPair : MappableKeyProfile->GetPlayerMappingRows())
						{
							for (const FPlayerKeyMapping& KeyMapping : MappingRowPair.Value.Mappings)
							{
								if (MappableKeyProfile->DoesMappingPassQueryOptions(KeyMapping, GamepadOnly))
								{
									if (UKeyRemapListDataObject* KeyRemapDataObject = NewObject<UKeyRemapListDataObject>())
									{
										KeyRemapDataObject->SetDataID(KeyMapping.GetMappingName());
										KeyRemapDataObject->SetDataDisplayName(KeyMapping.GetDisplayName());
										KeyRemapDataObject->InitKeyRemapData(EIUserSettings, MappableKeyProfile, ECommonInputType::Gamepad, KeyMapping);

										GamepadCategoryCollection->AddChildListData(KeyRemapDataObject);
									}
								}
							}
						}
					}
				}
			}
		}
		*/

		RegisteredOptionsTabCollection.Add(ControlTabCollection);
	}
}

void UOptionsDataRegistry::FindChildListDataRecursively(UBaseListDataObject* InParentData,
                                                        TArray<TObjectPtr<UBaseListDataObject>>& OutFoundChildListData)
const
{
	if (!IsValid(InParentData) || !InParentData->HasAnyChildListData())
	{
		return;
	}

	for (UBaseListDataObject* SubChildListData : InParentData->GetAllChildListData())
	{
		if (!IsValid(SubChildListData))
		{
			continue;
		}

		OutFoundChildListData.Add(SubChildListData);

		if (SubChildListData->HasAnyChildListData())
		{
			FindChildListDataRecursively(SubChildListData, OutFoundChildListData);
		}
	}
}
