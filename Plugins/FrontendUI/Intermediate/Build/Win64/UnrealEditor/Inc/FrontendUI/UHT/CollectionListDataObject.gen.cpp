// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/DataObjects/CollectionListDataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectionListDataObject() {}

// Begin Cross Module References
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UCollectionListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UCollectionListDataObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UCollectionListDataObject
void UCollectionListDataObject::StaticRegisterNativesUCollectionListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollectionListDataObject);
UClass* Z_Construct_UClass_UCollectionListDataObject_NoRegister()
{
	return UCollectionListDataObject::StaticClass();
}
struct Z_Construct_UClass_UCollectionListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/CollectionListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/CollectionListDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildListDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/CollectionListDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildListDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildListDataArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectionListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectionListDataObject_Statics::NewProp_ChildListDataArray_Inner = { "ChildListDataArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseListDataObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollectionListDataObject_Statics::NewProp_ChildListDataArray = { "ChildListDataArray", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollectionListDataObject, ChildListDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildListDataArray_MetaData), NewProp_ChildListDataArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectionListDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectionListDataObject_Statics::NewProp_ChildListDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectionListDataObject_Statics::NewProp_ChildListDataArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectionListDataObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCollectionListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectionListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollectionListDataObject_Statics::ClassParams = {
	&UCollectionListDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCollectionListDataObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCollectionListDataObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectionListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollectionListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollectionListDataObject()
{
	if (!Z_Registration_Info_UClass_UCollectionListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollectionListDataObject.OuterSingleton, Z_Construct_UClass_UCollectionListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollectionListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UCollectionListDataObject>()
{
	return UCollectionListDataObject::StaticClass();
}
UCollectionListDataObject::UCollectionListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectionListDataObject);
UCollectionListDataObject::~UCollectionListDataObject() {}
// End Class UCollectionListDataObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_CollectionListDataObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollectionListDataObject, UCollectionListDataObject::StaticClass, TEXT("UCollectionListDataObject"), &Z_Registration_Info_UClass_UCollectionListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollectionListDataObject), 340169935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_CollectionListDataObject_h_1294794959(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_CollectionListDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_CollectionListDataObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
