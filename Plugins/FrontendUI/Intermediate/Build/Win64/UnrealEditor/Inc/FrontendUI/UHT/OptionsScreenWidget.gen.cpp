// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/OptionsScreenWidget.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionsScreenWidget() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseActivatableWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonListView_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendTabListWidgetBase_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UOptionsDataRegistry_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UOptionsDetailsViewWidget_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UOptionsScreenWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UOptionsScreenWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UOptionsScreenWidget Function OnOptionsTabSelected
struct Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics
{
	struct OptionsScreenWidget_eventOnOptionsTabSelected_Parms
	{
		FName TabID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TabID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::NewProp_TabID = { "TabID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionsScreenWidget_eventOnOptionsTabSelected_Parms, TabID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::NewProp_TabID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsScreenWidget, nullptr, "OnOptionsTabSelected", nullptr, nullptr, Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::OptionsScreenWidget_eventOnOptionsTabSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::OptionsScreenWidget_eventOnOptionsTabSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionsScreenWidget::execOnOptionsTabSelected)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TabID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOptionsTabSelected(Z_Param_TabID);
	P_NATIVE_END;
}
// End Class UOptionsScreenWidget Function OnOptionsTabSelected

// Begin Class UOptionsScreenWidget
void UOptionsScreenWidget::StaticRegisterNativesUOptionsScreenWidget()
{
	UClass* Class = UOptionsScreenWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOptionsTabSelected", &UOptionsScreenWidget::execOnOptionsTabSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionsScreenWidget);
UClass* Z_Construct_UClass_UOptionsScreenWidget_NoRegister()
{
	return UOptionsScreenWidget::StaticClass();
}
struct Z_Construct_UClass_UOptionsScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Options/OptionsScreenWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsTabListWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailsViewListEntryInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedOwningDataRegistry_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetAction_MetaData[] = {
		{ "Category", "Frontend Options Screen" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsScreenWidget.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResettableDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsTabListWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsListView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetailsViewListEntryInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedOwningDataRegistry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResetAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResettableDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResettableDataArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptionsScreenWidget_OnOptionsTabSelected, "OnOptionsTabSelected" }, // 2085196180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionsScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_OptionsTabListWidget = { "OptionsTabListWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsScreenWidget, OptionsTabListWidget), Z_Construct_UClass_UFrontendTabListWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsTabListWidget_MetaData), NewProp_OptionsTabListWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_OptionsListView = { "OptionsListView", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsScreenWidget, OptionsListView), Z_Construct_UClass_UFrontendCommonListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsListView_MetaData), NewProp_OptionsListView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_DetailsViewListEntryInfo = { "DetailsViewListEntryInfo", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsScreenWidget, DetailsViewListEntryInfo), Z_Construct_UClass_UOptionsDetailsViewWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailsViewListEntryInfo_MetaData), NewProp_DetailsViewListEntryInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_CreatedOwningDataRegistry = { "CreatedOwningDataRegistry", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsScreenWidget, CreatedOwningDataRegistry), Z_Construct_UClass_UOptionsDataRegistry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedOwningDataRegistry_MetaData), NewProp_CreatedOwningDataRegistry_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_ResetAction = { "ResetAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsScreenWidget, ResetAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetAction_MetaData), NewProp_ResetAction_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_ResettableDataArray_Inner = { "ResettableDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseListDataObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_ResettableDataArray = { "ResettableDataArray", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsScreenWidget, ResettableDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResettableDataArray_MetaData), NewProp_ResettableDataArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionsScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_OptionsTabListWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_OptionsListView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_DetailsViewListEntryInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_CreatedOwningDataRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_ResetAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_ResettableDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsScreenWidget_Statics::NewProp_ResettableDataArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsScreenWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptionsScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionsScreenWidget_Statics::ClassParams = {
	&UOptionsScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOptionsScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsScreenWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionsScreenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptionsScreenWidget()
{
	if (!Z_Registration_Info_UClass_UOptionsScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionsScreenWidget.OuterSingleton, Z_Construct_UClass_UOptionsScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptionsScreenWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UOptionsScreenWidget>()
{
	return UOptionsScreenWidget::StaticClass();
}
UOptionsScreenWidget::UOptionsScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionsScreenWidget);
UOptionsScreenWidget::~UOptionsScreenWidget() {}
// End Class UOptionsScreenWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptionsScreenWidget, UOptionsScreenWidget::StaticClass, TEXT("UOptionsScreenWidget"), &Z_Registration_Info_UClass_UOptionsScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionsScreenWidget), 47840775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_680846378(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
