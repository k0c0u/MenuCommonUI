// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/DataObjects/ValueListDataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValueListDataObject() {}

// Begin Cross Module References
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UValueListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UValueListDataObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UValueListDataObject
void UValueListDataObject::StaticRegisterNativesUValueListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UValueListDataObject);
UClass* Z_Construct_UClass_UValueListDataObject_NoRegister()
{
	return UValueListDataObject::StaticClass();
}
struct Z_Construct_UClass_UValueListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ValueListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ValueListDataObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UValueListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UValueListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UValueListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UValueListDataObject_Statics::ClassParams = {
	&UValueListDataObject::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UValueListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UValueListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UValueListDataObject()
{
	if (!Z_Registration_Info_UClass_UValueListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UValueListDataObject.OuterSingleton, Z_Construct_UClass_UValueListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UValueListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UValueListDataObject>()
{
	return UValueListDataObject::StaticClass();
}
UValueListDataObject::UValueListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UValueListDataObject);
UValueListDataObject::~UValueListDataObject() {}
// End Class UValueListDataObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_ValueListDataObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UValueListDataObject, UValueListDataObject::StaticClass, TEXT("UValueListDataObject"), &Z_Registration_Info_UClass_UValueListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UValueListDataObject), 4203009021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_ValueListDataObject_h_4245861865(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_ValueListDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_ValueListDataObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
