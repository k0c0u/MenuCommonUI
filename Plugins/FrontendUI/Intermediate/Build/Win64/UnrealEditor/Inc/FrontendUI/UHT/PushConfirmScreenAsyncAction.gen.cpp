// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/AsyncActions/PushConfirmScreenAsyncAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePushConfirmScreenAsyncAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
FRONTENDUI_API UClass* Z_Construct_UClass_UPushConfirmScreenAsyncAction();
FRONTENDUI_API UClass* Z_Construct_UClass_UPushConfirmScreenAsyncAction_NoRegister();
FRONTENDUI_API UEnum* Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType();
FRONTENDUI_API UEnum* Z_Construct_UEnum_FrontendUI_EConfirmScreenType();
FRONTENDUI_API UFunction* Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Delegate FOnConfirmScreenButtonClickedDelegate
struct Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics
{
	struct _Script_FrontendUI_eventOnConfirmScreenButtonClickedDelegate_Parms
	{
		EConfirmScreenButtonType ClickedButtonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/PushConfirmScreenAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClickedButtonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClickedButtonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::NewProp_ClickedButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::NewProp_ClickedButtonType = { "ClickedButtonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FrontendUI_eventOnConfirmScreenButtonClickedDelegate_Parms, ClickedButtonType), Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType, METADATA_PARAMS(0, nullptr) }; // 881829255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::NewProp_ClickedButtonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::NewProp_ClickedButtonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FrontendUI, nullptr, "OnConfirmScreenButtonClickedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::_Script_FrontendUI_eventOnConfirmScreenButtonClickedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::_Script_FrontendUI_eventOnConfirmScreenButtonClickedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnConfirmScreenButtonClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnConfirmScreenButtonClickedDelegate, EConfirmScreenButtonType ClickedButtonType)
{
	struct _Script_FrontendUI_eventOnConfirmScreenButtonClickedDelegate_Parms
	{
		EConfirmScreenButtonType ClickedButtonType;
	};
	_Script_FrontendUI_eventOnConfirmScreenButtonClickedDelegate_Parms Parms;
	Parms.ClickedButtonType=ClickedButtonType;
	OnConfirmScreenButtonClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnConfirmScreenButtonClickedDelegate

// Begin Class UPushConfirmScreenAsyncAction Function PushConfirmScreen
struct Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics
{
	struct PushConfirmScreenAsyncAction_eventPushConfirmScreen_Parms
	{
		const UObject* WorldContextObject;
		EConfirmScreenType ScreenType;
		FText InScreenTitle;
		FText InScreenMessage;
		UPushConfirmScreenAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "DisplayName", "Show Confirmation Screen" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AsyncActions/PushConfirmScreenAsyncAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScreenType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InScreenTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InScreenMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushConfirmScreenAsyncAction_eventPushConfirmScreen_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_ScreenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_ScreenType = { "ScreenType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushConfirmScreenAsyncAction_eventPushConfirmScreen_Parms, ScreenType), Z_Construct_UEnum_FrontendUI_EConfirmScreenType, METADATA_PARAMS(0, nullptr) }; // 3661324030
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_InScreenTitle = { "InScreenTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushConfirmScreenAsyncAction_eventPushConfirmScreen_Parms, InScreenTitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_InScreenMessage = { "InScreenMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushConfirmScreenAsyncAction_eventPushConfirmScreen_Parms, InScreenMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushConfirmScreenAsyncAction_eventPushConfirmScreen_Parms, ReturnValue), Z_Construct_UClass_UPushConfirmScreenAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_ScreenType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_ScreenType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_InScreenTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_InScreenMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPushConfirmScreenAsyncAction, nullptr, "PushConfirmScreen", nullptr, nullptr, Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::PushConfirmScreenAsyncAction_eventPushConfirmScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::PushConfirmScreenAsyncAction_eventPushConfirmScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPushConfirmScreenAsyncAction::execPushConfirmScreen)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EConfirmScreenType,Z_Param_ScreenType);
	P_GET_PROPERTY(FTextProperty,Z_Param_InScreenTitle);
	P_GET_PROPERTY(FTextProperty,Z_Param_InScreenMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPushConfirmScreenAsyncAction**)Z_Param__Result=UPushConfirmScreenAsyncAction::PushConfirmScreen(Z_Param_WorldContextObject,EConfirmScreenType(Z_Param_ScreenType),Z_Param_InScreenTitle,Z_Param_InScreenMessage);
	P_NATIVE_END;
}
// End Class UPushConfirmScreenAsyncAction Function PushConfirmScreen

// Begin Class UPushConfirmScreenAsyncAction
void UPushConfirmScreenAsyncAction::StaticRegisterNativesUPushConfirmScreenAsyncAction()
{
	UClass* Class = UPushConfirmScreenAsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PushConfirmScreen", &UPushConfirmScreenAsyncAction::execPushConfirmScreen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPushConfirmScreenAsyncAction);
UClass* Z_Construct_UClass_UPushConfirmScreenAsyncAction_NoRegister()
{
	return UPushConfirmScreenAsyncAction::StaticClass();
}
struct Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncActions/PushConfirmScreenAsyncAction.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/PushConfirmScreenAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonClicked_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UBlueprintAsyncActionBase Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncActions/PushConfirmScreenAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPushConfirmScreenAsyncAction_PushConfirmScreen, "PushConfirmScreen" }, // 1964639811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPushConfirmScreenAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::NewProp_OnButtonClicked = { "OnButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPushConfirmScreenAsyncAction, OnButtonClicked), Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonClicked_MetaData), NewProp_OnButtonClicked_MetaData) }; // 1592708719
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::NewProp_OnButtonClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::ClassParams = {
	&UPushConfirmScreenAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPushConfirmScreenAsyncAction()
{
	if (!Z_Registration_Info_UClass_UPushConfirmScreenAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPushConfirmScreenAsyncAction.OuterSingleton, Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPushConfirmScreenAsyncAction.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UPushConfirmScreenAsyncAction>()
{
	return UPushConfirmScreenAsyncAction::StaticClass();
}
UPushConfirmScreenAsyncAction::UPushConfirmScreenAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPushConfirmScreenAsyncAction);
UPushConfirmScreenAsyncAction::~UPushConfirmScreenAsyncAction() {}
// End Class UPushConfirmScreenAsyncAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPushConfirmScreenAsyncAction, UPushConfirmScreenAsyncAction::StaticClass, TEXT("UPushConfirmScreenAsyncAction"), &Z_Registration_Info_UClass_UPushConfirmScreenAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPushConfirmScreenAsyncAction), 352264082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_1099837505(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
