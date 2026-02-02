// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/DataObjects/ScalarListDataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalarListDataObject() {}

// Begin Cross Module References
FRONTENDUI_API UClass* Z_Construct_UClass_UScalarListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UScalarListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UValueListDataObject();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UScalarListDataObject
void UScalarListDataObject::StaticRegisterNativesUScalarListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalarListDataObject);
UClass* Z_Construct_UClass_UScalarListDataObject_NoRegister()
{
	return UScalarListDataObject::StaticClass();
}
struct Z_Construct_UClass_UScalarListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ScalarListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ScalarListDataObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalarListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UScalarListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UValueListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalarListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalarListDataObject_Statics::ClassParams = {
	&UScalarListDataObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScalarListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UScalarListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScalarListDataObject()
{
	if (!Z_Registration_Info_UClass_UScalarListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalarListDataObject.OuterSingleton, Z_Construct_UClass_UScalarListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScalarListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UScalarListDataObject>()
{
	return UScalarListDataObject::StaticClass();
}
UScalarListDataObject::UScalarListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScalarListDataObject);
UScalarListDataObject::~UScalarListDataObject() {}
// End Class UScalarListDataObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_ScalarListDataObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScalarListDataObject, UScalarListDataObject::StaticClass, TEXT("UScalarListDataObject"), &Z_Registration_Info_UClass_UScalarListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalarListDataObject), 2280102527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_ScalarListDataObject_h_147858867(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_ScalarListDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_ScalarListDataObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
