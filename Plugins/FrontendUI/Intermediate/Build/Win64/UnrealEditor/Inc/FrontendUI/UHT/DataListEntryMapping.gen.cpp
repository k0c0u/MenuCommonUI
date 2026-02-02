// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/DataListEntryMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataListEntryMapping() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListEntryWidget_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UDataListEntryMapping();
FRONTENDUI_API UClass* Z_Construct_UClass_UDataListEntryMapping_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UDataListEntryMapping
void UDataListEntryMapping::StaticRegisterNativesUDataListEntryMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataListEntryMapping);
UClass* Z_Construct_UClass_UDataListEntryMapping_NoRegister()
{
	return UDataListEntryMapping::StaticClass();
}
struct Z_Construct_UClass_UDataListEntryMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataListEntryMapping.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataListEntryMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataObjectListEntryMap_MetaData[] = {
		{ "Category", "DataListEntryMapping" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataListEntryMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataObjectListEntryMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataObjectListEntryMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataObjectListEntryMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataListEntryMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataListEntryMapping_Statics::NewProp_DataObjectListEntryMap_ValueProp = { "DataObjectListEntryMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseListEntryWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataListEntryMapping_Statics::NewProp_DataObjectListEntryMap_Key_KeyProp = { "DataObjectListEntryMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseListDataObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataListEntryMapping_Statics::NewProp_DataObjectListEntryMap = { "DataObjectListEntryMap", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataListEntryMapping, DataObjectListEntryMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataObjectListEntryMap_MetaData), NewProp_DataObjectListEntryMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataListEntryMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataListEntryMapping_Statics::NewProp_DataObjectListEntryMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataListEntryMapping_Statics::NewProp_DataObjectListEntryMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataListEntryMapping_Statics::NewProp_DataObjectListEntryMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataListEntryMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataListEntryMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataListEntryMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataListEntryMapping_Statics::ClassParams = {
	&UDataListEntryMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataListEntryMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataListEntryMapping_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataListEntryMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataListEntryMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataListEntryMapping()
{
	if (!Z_Registration_Info_UClass_UDataListEntryMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataListEntryMapping.OuterSingleton, Z_Construct_UClass_UDataListEntryMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataListEntryMapping.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UDataListEntryMapping>()
{
	return UDataListEntryMapping::StaticClass();
}
UDataListEntryMapping::UDataListEntryMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataListEntryMapping);
UDataListEntryMapping::~UDataListEntryMapping() {}
// End Class UDataListEntryMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataListEntryMapping_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataListEntryMapping, UDataListEntryMapping::StaticClass, TEXT("UDataListEntryMapping"), &Z_Registration_Info_UClass_UDataListEntryMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataListEntryMapping), 1853377826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataListEntryMapping_h_3485401683(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataListEntryMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataListEntryMapping_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
