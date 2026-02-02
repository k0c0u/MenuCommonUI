// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalarListEntryWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UAnalogSlider_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonNumericTextBlock_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListEntryWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UScalarListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UScalarListEntryWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UScalarListEntryWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UScalarListEntryWidget Function OnSliderMouseCaptureBegin
struct Z_Construct_UFunction_UScalarListEntryWidget_OnSliderMouseCaptureBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScalarListEntryWidget_OnSliderMouseCaptureBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScalarListEntryWidget, nullptr, "OnSliderMouseCaptureBegin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarListEntryWidget_OnSliderMouseCaptureBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScalarListEntryWidget_OnSliderMouseCaptureBegin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UScalarListEntryWidget_OnSliderMouseCaptureBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScalarListEntryWidget_OnSliderMouseCaptureBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScalarListEntryWidget::execOnSliderMouseCaptureBegin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSliderMouseCaptureBegin();
	P_NATIVE_END;
}
// End Class UScalarListEntryWidget Function OnSliderMouseCaptureBegin

// Begin Class UScalarListEntryWidget Function OnSliderValueChanged
struct Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics
{
	struct ScalarListEntryWidget_eventOnSliderValueChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScalarListEntryWidget_eventOnSliderValueChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScalarListEntryWidget, nullptr, "OnSliderValueChanged", nullptr, nullptr, Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::ScalarListEntryWidget_eventOnSliderValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::ScalarListEntryWidget_eventOnSliderValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScalarListEntryWidget::execOnSliderValueChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSliderValueChanged(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UScalarListEntryWidget Function OnSliderValueChanged

// Begin Class UScalarListEntryWidget
void UScalarListEntryWidget::StaticRegisterNativesUScalarListEntryWidget()
{
	UClass* Class = UScalarListEntryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSliderMouseCaptureBegin", &UScalarListEntryWidget::execOnSliderMouseCaptureBegin },
		{ "OnSliderValueChanged", &UScalarListEntryWidget::execOnSliderValueChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalarListEntryWidget);
UClass* Z_Construct_UClass_UScalarListEntryWidget_NoRegister()
{
	return UScalarListEntryWidget::StaticClass();
}
struct Z_Construct_UClass_UScalarListEntryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderDefaultColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderHighlightColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "ScalarListEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalogSlider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "ScalarListEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningScalarDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/ScalarListEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderDefaultColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderHighlightColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnalogSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOwningScalarDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScalarListEntryWidget_OnSliderMouseCaptureBegin, "OnSliderMouseCaptureBegin" }, // 183530673
		{ &Z_Construct_UFunction_UScalarListEntryWidget_OnSliderValueChanged, "OnSliderValueChanged" }, // 4169102734
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalarListEntryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_SliderDefaultColor = { "SliderDefaultColor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalarListEntryWidget, SliderDefaultColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderDefaultColor_MetaData), NewProp_SliderDefaultColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_SliderHighlightColor = { "SliderHighlightColor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalarListEntryWidget, SliderHighlightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderHighlightColor_MetaData), NewProp_SliderHighlightColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalarListEntryWidget, SettingValue), Z_Construct_UClass_UCommonNumericTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingValue_MetaData), NewProp_SettingValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_AnalogSlider = { "AnalogSlider", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalarListEntryWidget, AnalogSlider), Z_Construct_UClass_UAnalogSlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalogSlider_MetaData), NewProp_AnalogSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_CachedOwningScalarDataObject = { "CachedOwningScalarDataObject", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalarListEntryWidget, CachedOwningScalarDataObject), Z_Construct_UClass_UScalarListDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningScalarDataObject_MetaData), NewProp_CachedOwningScalarDataObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScalarListEntryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_SliderDefaultColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_SliderHighlightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_SettingValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_AnalogSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalarListEntryWidget_Statics::NewProp_CachedOwningScalarDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalarListEntryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScalarListEntryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseListEntryWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalarListEntryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalarListEntryWidget_Statics::ClassParams = {
	&UScalarListEntryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScalarListEntryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScalarListEntryWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScalarListEntryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UScalarListEntryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScalarListEntryWidget()
{
	if (!Z_Registration_Info_UClass_UScalarListEntryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalarListEntryWidget.OuterSingleton, Z_Construct_UClass_UScalarListEntryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScalarListEntryWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UScalarListEntryWidget>()
{
	return UScalarListEntryWidget::StaticClass();
}
UScalarListEntryWidget::UScalarListEntryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScalarListEntryWidget);
UScalarListEntryWidget::~UScalarListEntryWidget() {}
// End Class UScalarListEntryWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_ScalarListEntryWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScalarListEntryWidget, UScalarListEntryWidget::StaticClass, TEXT("UScalarListEntryWidget"), &Z_Registration_Info_UClass_UScalarListEntryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalarListEntryWidget), 3406041833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_ScalarListEntryWidget_h_2507942670(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_ScalarListEntryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_ScalarListEntryWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
