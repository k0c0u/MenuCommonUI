// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/DataObjects/BaseListDataObject.h"
#include "FrontendUI/Public/FrontendStructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseListDataObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject_NoRegister();
FRONTENDUI_API UScriptStruct* Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UBaseListDataObject
void UBaseListDataObject::StaticRegisterNativesUBaseListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseListDataObject);
UClass* Z_Construct_UClass_UBaseListDataObject_NoRegister()
{
	return UBaseListDataObject::StaticClass();
}
struct Z_Construct_UClass_UBaseListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/BaseListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/BaseListDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/BaseListDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditConditionDescArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/BaseListDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditConditionDescArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditConditionDescArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseListDataObject_Statics::NewProp_ParentData = { "ParentData", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseListDataObject, ParentData), Z_Construct_UClass_UBaseListDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentData_MetaData), NewProp_ParentData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseListDataObject_Statics::NewProp_EditConditionDescArray_Inner = { "EditConditionDescArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription, METADATA_PARAMS(0, nullptr) }; // 2567105644
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseListDataObject_Statics::NewProp_EditConditionDescArray = { "EditConditionDescArray", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseListDataObject, EditConditionDescArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditConditionDescArray_MetaData), NewProp_EditConditionDescArray_MetaData) }; // 2567105644
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseListDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseListDataObject_Statics::NewProp_ParentData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseListDataObject_Statics::NewProp_EditConditionDescArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseListDataObject_Statics::NewProp_EditConditionDescArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseListDataObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseListDataObject_Statics::ClassParams = {
	&UBaseListDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseListDataObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseListDataObject_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseListDataObject()
{
	if (!Z_Registration_Info_UClass_UBaseListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseListDataObject.OuterSingleton, Z_Construct_UClass_UBaseListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UBaseListDataObject>()
{
	return UBaseListDataObject::StaticClass();
}
UBaseListDataObject::UBaseListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseListDataObject);
UBaseListDataObject::~UBaseListDataObject() {}
// End Class UBaseListDataObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_BaseListDataObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseListDataObject, UBaseListDataObject::StaticClass, TEXT("UBaseListDataObject"), &Z_Registration_Info_UClass_UBaseListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseListDataObject), 3791206997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_BaseListDataObject_h_291786667(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_BaseListDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_BaseListDataObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
