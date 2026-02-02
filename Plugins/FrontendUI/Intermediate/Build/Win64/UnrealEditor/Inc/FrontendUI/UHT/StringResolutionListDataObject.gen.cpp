// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/DataObjects/StringResolutionListDataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringResolutionListDataObject() {}

// Begin Cross Module References
FRONTENDUI_API UClass* Z_Construct_UClass_UStringListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringResolutionListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringResolutionListDataObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UStringResolutionListDataObject
void UStringResolutionListDataObject::StaticRegisterNativesUStringResolutionListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringResolutionListDataObject);
UClass* Z_Construct_UClass_UStringResolutionListDataObject_NoRegister()
{
	return UStringResolutionListDataObject::StaticClass();
}
struct Z_Construct_UClass_UStringResolutionListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/StringResolutionListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/StringResolutionListDataObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringResolutionListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringResolutionListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStringListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringResolutionListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringResolutionListDataObject_Statics::ClassParams = {
	&UStringResolutionListDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringResolutionListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringResolutionListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringResolutionListDataObject()
{
	if (!Z_Registration_Info_UClass_UStringResolutionListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringResolutionListDataObject.OuterSingleton, Z_Construct_UClass_UStringResolutionListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringResolutionListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UStringResolutionListDataObject>()
{
	return UStringResolutionListDataObject::StaticClass();
}
UStringResolutionListDataObject::UStringResolutionListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringResolutionListDataObject);
UStringResolutionListDataObject::~UStringResolutionListDataObject() {}
// End Class UStringResolutionListDataObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_StringResolutionListDataObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStringResolutionListDataObject, UStringResolutionListDataObject::StaticClass, TEXT("UStringResolutionListDataObject"), &Z_Registration_Info_UClass_UStringResolutionListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringResolutionListDataObject), 254777455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_StringResolutionListDataObject_h_1657085875(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_StringResolutionListDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_StringResolutionListDataObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
