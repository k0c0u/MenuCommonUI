// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyRemapListEntryWidget() {}

// Begin Cross Module References
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListEntryWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UKeyRemapListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UKeyRemapListEntryWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UKeyRemapListEntryWidget_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UKeyRemapListEntryWidget Function OnKeyRemapCanceled
struct Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics
{
	struct KeyRemapListEntryWidget_eventOnKeyRemapCanceled_Parms
	{
		FText CanceledReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanceledReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_CanceledReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::NewProp_CanceledReason = { "CanceledReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyRemapListEntryWidget_eventOnKeyRemapCanceled_Parms, CanceledReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanceledReason_MetaData), NewProp_CanceledReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::NewProp_CanceledReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyRemapListEntryWidget, nullptr, "OnKeyRemapCanceled", nullptr, nullptr, Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::KeyRemapListEntryWidget_eventOnKeyRemapCanceled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::KeyRemapListEntryWidget_eventOnKeyRemapCanceled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyRemapListEntryWidget::execOnKeyRemapCanceled)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_CanceledReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnKeyRemapCanceled(Z_Param_Out_CanceledReason);
	P_NATIVE_END;
}
// End Class UKeyRemapListEntryWidget Function OnKeyRemapCanceled

// Begin Class UKeyRemapListEntryWidget Function OnKeyToRemapPressed
struct Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics
{
	struct KeyRemapListEntryWidget_eventOnKeyToRemapPressed_Parms
	{
		FKey PressedKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::NewProp_PressedKey = { "PressedKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyRemapListEntryWidget_eventOnKeyToRemapPressed_Parms, PressedKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedKey_MetaData), NewProp_PressedKey_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::NewProp_PressedKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyRemapListEntryWidget, nullptr, "OnKeyToRemapPressed", nullptr, nullptr, Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::KeyRemapListEntryWidget_eventOnKeyToRemapPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::KeyRemapListEntryWidget_eventOnKeyToRemapPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyRemapListEntryWidget::execOnKeyToRemapPressed)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_PressedKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnKeyToRemapPressed(Z_Param_Out_PressedKey);
	P_NATIVE_END;
}
// End Class UKeyRemapListEntryWidget Function OnKeyToRemapPressed

// Begin Class UKeyRemapListEntryWidget Function OnRemapKeyButtonClicked
struct Z_Construct_UFunction_UKeyRemapListEntryWidget_OnRemapKeyButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyRemapListEntryWidget_OnRemapKeyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyRemapListEntryWidget, nullptr, "OnRemapKeyButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnRemapKeyButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyRemapListEntryWidget_OnRemapKeyButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UKeyRemapListEntryWidget_OnRemapKeyButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyRemapListEntryWidget_OnRemapKeyButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyRemapListEntryWidget::execOnRemapKeyButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRemapKeyButtonClicked();
	P_NATIVE_END;
}
// End Class UKeyRemapListEntryWidget Function OnRemapKeyButtonClicked

// Begin Class UKeyRemapListEntryWidget Function OnResetKeyBindingButtonClicked
struct Z_Construct_UFunction_UKeyRemapListEntryWidget_OnResetKeyBindingButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyRemapListEntryWidget_OnResetKeyBindingButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyRemapListEntryWidget, nullptr, "OnResetKeyBindingButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyRemapListEntryWidget_OnResetKeyBindingButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyRemapListEntryWidget_OnResetKeyBindingButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UKeyRemapListEntryWidget_OnResetKeyBindingButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyRemapListEntryWidget_OnResetKeyBindingButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyRemapListEntryWidget::execOnResetKeyBindingButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResetKeyBindingButtonClicked();
	P_NATIVE_END;
}
// End Class UKeyRemapListEntryWidget Function OnResetKeyBindingButtonClicked

// Begin Class UKeyRemapListEntryWidget
void UKeyRemapListEntryWidget::StaticRegisterNativesUKeyRemapListEntryWidget()
{
	UClass* Class = UKeyRemapListEntryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnKeyRemapCanceled", &UKeyRemapListEntryWidget::execOnKeyRemapCanceled },
		{ "OnKeyToRemapPressed", &UKeyRemapListEntryWidget::execOnKeyToRemapPressed },
		{ "OnRemapKeyButtonClicked", &UKeyRemapListEntryWidget::execOnRemapKeyButtonClicked },
		{ "OnResetKeyBindingButtonClicked", &UKeyRemapListEntryWidget::execOnResetKeyBindingButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyRemapListEntryWidget);
UClass* Z_Construct_UClass_UKeyRemapListEntryWidget_NoRegister()
{
	return UKeyRemapListEntryWidget::StaticClass();
}
struct Z_Construct_UClass_UKeyRemapListEntryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "KeyRemapListEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetKeyBinding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "KeyRemapListEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyRemapDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/KeyRemapListEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemapKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetKeyBinding;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_KeyRemapDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyRemapCanceled, "OnKeyRemapCanceled" }, // 3878566570
		{ &Z_Construct_UFunction_UKeyRemapListEntryWidget_OnKeyToRemapPressed, "OnKeyToRemapPressed" }, // 3805876647
		{ &Z_Construct_UFunction_UKeyRemapListEntryWidget_OnRemapKeyButtonClicked, "OnRemapKeyButtonClicked" }, // 3827668970
		{ &Z_Construct_UFunction_UKeyRemapListEntryWidget_OnResetKeyBindingButtonClicked, "OnResetKeyBindingButtonClicked" }, // 1667265812
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyRemapListEntryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::NewProp_RemapKey = { "RemapKey", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyRemapListEntryWidget, RemapKey), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapKey_MetaData), NewProp_RemapKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::NewProp_ResetKeyBinding = { "ResetKeyBinding", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyRemapListEntryWidget, ResetKeyBinding), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetKeyBinding_MetaData), NewProp_ResetKeyBinding_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::NewProp_KeyRemapDataObject = { "KeyRemapDataObject", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyRemapListEntryWidget, KeyRemapDataObject), Z_Construct_UClass_UKeyRemapListDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyRemapDataObject_MetaData), NewProp_KeyRemapDataObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::NewProp_RemapKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::NewProp_ResetKeyBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::NewProp_KeyRemapDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseListEntryWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::ClassParams = {
	&UKeyRemapListEntryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyRemapListEntryWidget()
{
	if (!Z_Registration_Info_UClass_UKeyRemapListEntryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyRemapListEntryWidget.OuterSingleton, Z_Construct_UClass_UKeyRemapListEntryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyRemapListEntryWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UKeyRemapListEntryWidget>()
{
	return UKeyRemapListEntryWidget::StaticClass();
}
UKeyRemapListEntryWidget::UKeyRemapListEntryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyRemapListEntryWidget);
UKeyRemapListEntryWidget::~UKeyRemapListEntryWidget() {}
// End Class UKeyRemapListEntryWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyRemapListEntryWidget, UKeyRemapListEntryWidget::StaticClass, TEXT("UKeyRemapListEntryWidget"), &Z_Registration_Info_UClass_UKeyRemapListEntryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyRemapListEntryWidget), 640242183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_2049410203(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
