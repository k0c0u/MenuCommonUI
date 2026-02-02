// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/FontendSettings/LoadingScreenSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
FRONTENDUI_API UClass* Z_Construct_UClass_ULoadingScreenSettings();
FRONTENDUI_API UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class ULoadingScreenSettings
void ULoadingScreenSettings::StaticRegisterNativesULoadingScreenSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadingScreenSettings);
UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister()
{
	return ULoadingScreenSettings::StaticClass();
}
struct Z_Construct_UClass_ULoadingScreenSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FontendSettings/LoadingScreenSettings.h" },
		{ "ModuleRelativePath", "Public/FontendSettings/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftLoadingScreenWidgetClass_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "ModuleRelativePath", "Public/FontendSettings/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldLoadingScreenSeconds_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "ModuleRelativePath", "Public/FontendSettings/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLoadingScreenInEditor_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "ModuleRelativePath", "Public/FontendSettings/LoadingScreenSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftLoadingScreenWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldLoadingScreenSeconds;
	static void NewProp_bShouldLoadingScreenInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoadingScreenInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_SoftLoadingScreenWidgetClass = { "SoftLoadingScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, SoftLoadingScreenWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftLoadingScreenWidgetClass_MetaData), NewProp_SoftLoadingScreenWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_HoldLoadingScreenSeconds = { "HoldLoadingScreenSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, HoldLoadingScreenSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldLoadingScreenSeconds_MetaData), NewProp_HoldLoadingScreenSeconds_MetaData) };
void Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bShouldLoadingScreenInEditor_SetBit(void* Obj)
{
	((ULoadingScreenSettings*)Obj)->bShouldLoadingScreenInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bShouldLoadingScreenInEditor = { "bShouldLoadingScreenInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULoadingScreenSettings), &Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bShouldLoadingScreenInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldLoadingScreenInEditor_MetaData), NewProp_bShouldLoadingScreenInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_SoftLoadingScreenWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_HoldLoadingScreenSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bShouldLoadingScreenInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadingScreenSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams = {
	&ULoadingScreenSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadingScreenSettings()
{
	if (!Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton, Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<ULoadingScreenSettings>()
{
	return ULoadingScreenSettings::StaticClass();
}
ULoadingScreenSettings::ULoadingScreenSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenSettings);
ULoadingScreenSettings::~ULoadingScreenSettings() {}
// End Class ULoadingScreenSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_LoadingScreenSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingScreenSettings, ULoadingScreenSettings::StaticClass, TEXT("ULoadingScreenSettings"), &Z_Registration_Info_UClass_ULoadingScreenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingScreenSettings), 3784038068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_LoadingScreenSettings_h_2628227128(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_LoadingScreenSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_LoadingScreenSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
