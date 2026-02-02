// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/DataObjects/KeyRemapListDataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyRemapListDataObject() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UKeyRemapListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UKeyRemapListDataObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UKeyRemapListDataObject
void UKeyRemapListDataObject::StaticRegisterNativesUKeyRemapListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyRemapListDataObject);
UClass* Z_Construct_UClass_UKeyRemapListDataObject_NoRegister()
{
	return UKeyRemapListDataObject::StaticClass();
}
struct Z_Construct_UClass_UKeyRemapListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/KeyRemapListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/KeyRemapListDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningInputUserSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/KeyRemapListDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningPlayerMappableKeyProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/KeyRemapListDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedOwningInputUserSettings;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedOwningPlayerMappableKeyProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyRemapListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UKeyRemapListDataObject_Statics::NewProp_CachedOwningInputUserSettings = { "CachedOwningInputUserSettings", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyRemapListDataObject, CachedOwningInputUserSettings), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningInputUserSettings_MetaData), NewProp_CachedOwningInputUserSettings_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UKeyRemapListDataObject_Statics::NewProp_CachedOwningPlayerMappableKeyProfile = { "CachedOwningPlayerMappableKeyProfile", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyRemapListDataObject, CachedOwningPlayerMappableKeyProfile), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningPlayerMappableKeyProfile_MetaData), NewProp_CachedOwningPlayerMappableKeyProfile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyRemapListDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyRemapListDataObject_Statics::NewProp_CachedOwningInputUserSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyRemapListDataObject_Statics::NewProp_CachedOwningPlayerMappableKeyProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapListDataObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKeyRemapListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyRemapListDataObject_Statics::ClassParams = {
	&UKeyRemapListDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKeyRemapListDataObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapListDataObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyRemapListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyRemapListDataObject()
{
	if (!Z_Registration_Info_UClass_UKeyRemapListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyRemapListDataObject.OuterSingleton, Z_Construct_UClass_UKeyRemapListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyRemapListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UKeyRemapListDataObject>()
{
	return UKeyRemapListDataObject::StaticClass();
}
UKeyRemapListDataObject::UKeyRemapListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyRemapListDataObject);
UKeyRemapListDataObject::~UKeyRemapListDataObject() {}
// End Class UKeyRemapListDataObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_KeyRemapListDataObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyRemapListDataObject, UKeyRemapListDataObject::StaticClass, TEXT("UKeyRemapListDataObject"), &Z_Registration_Info_UClass_UKeyRemapListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyRemapListDataObject), 2109320133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_KeyRemapListDataObject_h_3524237660(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_KeyRemapListDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_KeyRemapListDataObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
