// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/FontendSettings/FrontendDeveloperSettings.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendDeveloperSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStringTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseActivatableWidget_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendDeveloperSettings();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendDeveloperSettings_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UFrontendDeveloperSettings
void UFrontendDeveloperSettings::StaticRegisterNativesUFrontendDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontendDeveloperSettings);
UClass* Z_Construct_UClass_UFrontendDeveloperSettings_NoRegister()
{
	return UFrontendDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UFrontendDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Frontend UI Settings" },
		{ "IncludePath", "FontendSettings/FrontendDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontendWidgetMap_MetaData[] = {
		{ "Categories", "Frontend.Widget" },
		{ "Category", "Widget Reference" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsScreenSoftImageMap_MetaData[] = {
		{ "Categories", "Frontend.Image" },
		{ "Category", "Options Image Reference" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuLocalizationStringTable_MetaData[] = {
		{ "Category", "Localization" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureToStringTable_MetaData[] = {
		{ "Category", "Localization" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCulture_MetaData[] = {
		{ "Category", "Localization" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterSoundClass_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//NormalizeCultureName(FName(*FPlatformMisc::GetDefaultLanguage()));\n" },
#endif
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NormalizeCultureName(FName(*FPlatformMisc::GetDefaultLanguage()));" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicSoundClass_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXSoundClass_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundMix_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_FrontendWidgetMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrontendWidgetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FrontendWidgetMap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OptionsScreenSoftImageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionsScreenSoftImageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OptionsScreenSoftImageMap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MenuLocalizationStringTable;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CultureToStringTable_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CultureToStringTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CultureToStringTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultCulture;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MasterSoundClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MusicSoundClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoundFXSoundClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSoundMix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap_ValueProp = { "FrontendWidgetMap", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBaseActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap_Key_KeyProp = { "FrontendWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap = { "FrontendWidgetMap", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, FrontendWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontendWidgetMap_MetaData), NewProp_FrontendWidgetMap_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_OptionsScreenSoftImageMap_ValueProp = { "OptionsScreenSoftImageMap", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_OptionsScreenSoftImageMap_Key_KeyProp = { "OptionsScreenSoftImageMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_OptionsScreenSoftImageMap = { "OptionsScreenSoftImageMap", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, OptionsScreenSoftImageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsScreenSoftImageMap_MetaData), NewProp_OptionsScreenSoftImageMap_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_MenuLocalizationStringTable = { "MenuLocalizationStringTable", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, MenuLocalizationStringTable), Z_Construct_UClass_UStringTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuLocalizationStringTable_MetaData), NewProp_MenuLocalizationStringTable_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_CultureToStringTable_ValueProp = { "CultureToStringTable", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStringTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_CultureToStringTable_Key_KeyProp = { "CultureToStringTable_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_CultureToStringTable = { "CultureToStringTable", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, CultureToStringTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureToStringTable_MetaData), NewProp_CultureToStringTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_DefaultCulture = { "DefaultCulture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, DefaultCulture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCulture_MetaData), NewProp_DefaultCulture_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_MasterSoundClass = { "MasterSoundClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, MasterSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterSoundClass_MetaData), NewProp_MasterSoundClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_MusicSoundClass = { "MusicSoundClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, MusicSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicSoundClass_MetaData), NewProp_MusicSoundClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_SoundFXSoundClass = { "SoundFXSoundClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, SoundFXSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXSoundClass_MetaData), NewProp_SoundFXSoundClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_DefaultSoundMix = { "DefaultSoundMix", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, DefaultSoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoundMix_MetaData), NewProp_DefaultSoundMix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_OptionsScreenSoftImageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_OptionsScreenSoftImageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_OptionsScreenSoftImageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_MenuLocalizationStringTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_CultureToStringTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_CultureToStringTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_CultureToStringTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_DefaultCulture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_MasterSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_MusicSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_SoundFXSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_DefaultSoundMix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::ClassParams = {
	&UFrontendDeveloperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFrontendDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UFrontendDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendDeveloperSettings.OuterSingleton, Z_Construct_UClass_UFrontendDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendDeveloperSettings.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UFrontendDeveloperSettings>()
{
	return UFrontendDeveloperSettings::StaticClass();
}
UFrontendDeveloperSettings::UFrontendDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendDeveloperSettings);
UFrontendDeveloperSettings::~UFrontendDeveloperSettings() {}
// End Class UFrontendDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendDeveloperSettings, UFrontendDeveloperSettings::StaticClass, TEXT("UFrontendDeveloperSettings"), &Z_Registration_Info_UClass_UFrontendDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendDeveloperSettings), 2411567557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_3758826591(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
