// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/PrimaryLayoutWidget.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryLayoutWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UPrimaryLayoutWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UPrimaryLayoutWidget_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UPrimaryLayoutWidget Function RegisterWidgetStack
struct Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics
{
	struct PrimaryLayoutWidget_eventRegisterWidgetStack_Parms
	{
		FGameplayTag InStackTag;
		UCommonActivatableWidgetContainerBase* InStack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PrimaryLayoutWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStackTag_MetaData[] = {
		{ "Categories", "Frontend.WidgetStack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStackTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::NewProp_InStackTag = { "InStackTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PrimaryLayoutWidget_eventRegisterWidgetStack_Parms, InStackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStackTag_MetaData), NewProp_InStackTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::NewProp_InStack = { "InStack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PrimaryLayoutWidget_eventRegisterWidgetStack_Parms, InStack), Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStack_MetaData), NewProp_InStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::NewProp_InStackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::NewProp_InStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrimaryLayoutWidget, nullptr, "RegisterWidgetStack", nullptr, nullptr, Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::PrimaryLayoutWidget_eventRegisterWidgetStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::PrimaryLayoutWidget_eventRegisterWidgetStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPrimaryLayoutWidget::execRegisterWidgetStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InStackTag);
	P_GET_OBJECT(UCommonActivatableWidgetContainerBase,Z_Param_InStack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterWidgetStack(Z_Param_InStackTag,Z_Param_InStack);
	P_NATIVE_END;
}
// End Class UPrimaryLayoutWidget Function RegisterWidgetStack

// Begin Class UPrimaryLayoutWidget
void UPrimaryLayoutWidget::StaticRegisterNativesUPrimaryLayoutWidget()
{
	UClass* Class = UPrimaryLayoutWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterWidgetStack", &UPrimaryLayoutWidget::execRegisterWidgetStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimaryLayoutWidget);
UClass* Z_Construct_UClass_UPrimaryLayoutWidget_NoRegister()
{
	return UPrimaryLayoutWidget::StaticClass();
}
struct Z_Construct_UClass_UPrimaryLayoutWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/PrimaryLayoutWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/PrimaryLayoutWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredWidgetStackMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/PrimaryLayoutWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredWidgetStackMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredWidgetStackMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredWidgetStackMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPrimaryLayoutWidget_RegisterWidgetStack, "RegisterWidgetStack" }, // 854801088
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimaryLayoutWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPrimaryLayoutWidget_Statics::NewProp_RegisteredWidgetStackMap_ValueProp = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryLayoutWidget_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp = { "RegisteredWidgetStackMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPrimaryLayoutWidget_Statics::NewProp_RegisteredWidgetStackMap = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPrimaryLayoutWidget, RegisteredWidgetStackMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredWidgetStackMap_MetaData), NewProp_RegisteredWidgetStackMap_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimaryLayoutWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryLayoutWidget_Statics::NewProp_RegisteredWidgetStackMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryLayoutWidget_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryLayoutWidget_Statics::NewProp_RegisteredWidgetStackMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryLayoutWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPrimaryLayoutWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryLayoutWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimaryLayoutWidget_Statics::ClassParams = {
	&UPrimaryLayoutWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPrimaryLayoutWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryLayoutWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryLayoutWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrimaryLayoutWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrimaryLayoutWidget()
{
	if (!Z_Registration_Info_UClass_UPrimaryLayoutWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimaryLayoutWidget.OuterSingleton, Z_Construct_UClass_UPrimaryLayoutWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrimaryLayoutWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UPrimaryLayoutWidget>()
{
	return UPrimaryLayoutWidget::StaticClass();
}
UPrimaryLayoutWidget::UPrimaryLayoutWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryLayoutWidget);
UPrimaryLayoutWidget::~UPrimaryLayoutWidget() {}
// End Class UPrimaryLayoutWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_PrimaryLayoutWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrimaryLayoutWidget, UPrimaryLayoutWidget::StaticClass, TEXT("UPrimaryLayoutWidget"), &Z_Registration_Info_UClass_UPrimaryLayoutWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimaryLayoutWidget), 787986112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_PrimaryLayoutWidget_h_2259027331(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_PrimaryLayoutWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_PrimaryLayoutWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
