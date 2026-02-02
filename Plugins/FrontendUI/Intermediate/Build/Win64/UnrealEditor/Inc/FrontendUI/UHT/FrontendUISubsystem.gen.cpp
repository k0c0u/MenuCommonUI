// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Subsystems/FrontendUISubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendUISubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendUISubsystem();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendUISubsystem_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UPrimaryLayoutWidget_NoRegister();
FRONTENDUI_API UFunction* Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Delegate FOnButtonDescriptionTextUpdatedDelegate
struct Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics
{
	struct _Script_FrontendUI_eventOnButtonDescriptionTextUpdatedDelegate_Parms
	{
		UFrontendCommonButtonBase* BroadcastingButton;
		FText DescriptionText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/FrontendUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastingButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BroadcastingButton;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DescriptionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::NewProp_BroadcastingButton = { "BroadcastingButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FrontendUI_eventOnButtonDescriptionTextUpdatedDelegate_Parms, BroadcastingButton), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastingButton_MetaData), NewProp_BroadcastingButton_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FrontendUI_eventOnButtonDescriptionTextUpdatedDelegate_Parms, DescriptionText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::NewProp_BroadcastingButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::NewProp_DescriptionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FrontendUI, nullptr, "OnButtonDescriptionTextUpdatedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::_Script_FrontendUI_eventOnButtonDescriptionTextUpdatedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::_Script_FrontendUI_eventOnButtonDescriptionTextUpdatedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonDescriptionTextUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnButtonDescriptionTextUpdatedDelegate, UFrontendCommonButtonBase* BroadcastingButton, const FText& DescriptionText)
{
	struct _Script_FrontendUI_eventOnButtonDescriptionTextUpdatedDelegate_Parms
	{
		UFrontendCommonButtonBase* BroadcastingButton;
		FText DescriptionText;
	};
	_Script_FrontendUI_eventOnButtonDescriptionTextUpdatedDelegate_Parms Parms;
	Parms.BroadcastingButton=BroadcastingButton;
	Parms.DescriptionText=DescriptionText;
	OnButtonDescriptionTextUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnButtonDescriptionTextUpdatedDelegate

// Begin Class UFrontendUISubsystem Function RegisterCreatedPrimaryLayoutWidget
struct Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics
{
	struct FrontendUISubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms
	{
		UPrimaryLayoutWidget* InCreatedWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End USubsyem Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/FrontendUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCreatedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCreatedWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::NewProp_InCreatedWidget = { "InCreatedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendUISubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms, InCreatedWidget), Z_Construct_UClass_UPrimaryLayoutWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCreatedWidget_MetaData), NewProp_InCreatedWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::NewProp_InCreatedWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendUISubsystem, nullptr, "RegisterCreatedPrimaryLayoutWidget", nullptr, nullptr, Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FrontendUISubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FrontendUISubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendUISubsystem::execRegisterCreatedPrimaryLayoutWidget)
{
	P_GET_OBJECT(UPrimaryLayoutWidget,Z_Param_InCreatedWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterCreatedPrimaryLayoutWidget(Z_Param_InCreatedWidget);
	P_NATIVE_END;
}
// End Class UFrontendUISubsystem Function RegisterCreatedPrimaryLayoutWidget

// Begin Class UFrontendUISubsystem
void UFrontendUISubsystem::StaticRegisterNativesUFrontendUISubsystem()
{
	UClass* Class = UFrontendUISubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterCreatedPrimaryLayoutWidget", &UFrontendUISubsystem::execRegisterCreatedPrimaryLayoutWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontendUISubsystem);
UClass* Z_Construct_UClass_UFrontendUISubsystem_NoRegister()
{
	return UFrontendUISubsystem::StaticClass();
}
struct Z_Construct_UClass_UFrontendUISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/FrontendUISubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/FrontendUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonDescriptionTextUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/FrontendUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedPrimaryLayout_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/FrontendUISubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonDescriptionTextUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedPrimaryLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget, "RegisterCreatedPrimaryLayoutWidget" }, // 2233470297
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendUISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFrontendUISubsystem_Statics::NewProp_OnButtonDescriptionTextUpdated = { "OnButtonDescriptionTextUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendUISubsystem, OnButtonDescriptionTextUpdated), Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonDescriptionTextUpdated_MetaData), NewProp_OnButtonDescriptionTextUpdated_MetaData) }; // 1604440933
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendUISubsystem_Statics::NewProp_CreatedPrimaryLayout = { "CreatedPrimaryLayout", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendUISubsystem, CreatedPrimaryLayout), Z_Construct_UClass_UPrimaryLayoutWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedPrimaryLayout_MetaData), NewProp_CreatedPrimaryLayout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendUISubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendUISubsystem_Statics::NewProp_OnButtonDescriptionTextUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendUISubsystem_Statics::NewProp_CreatedPrimaryLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendUISubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendUISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendUISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendUISubsystem_Statics::ClassParams = {
	&UFrontendUISubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFrontendUISubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendUISubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendUISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendUISubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendUISubsystem()
{
	if (!Z_Registration_Info_UClass_UFrontendUISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendUISubsystem.OuterSingleton, Z_Construct_UClass_UFrontendUISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendUISubsystem.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UFrontendUISubsystem>()
{
	return UFrontendUISubsystem::StaticClass();
}
UFrontendUISubsystem::UFrontendUISubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendUISubsystem);
UFrontendUISubsystem::~UFrontendUISubsystem() {}
// End Class UFrontendUISubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendUISubsystem, UFrontendUISubsystem::StaticClass, TEXT("UFrontendUISubsystem"), &Z_Registration_Info_UClass_UFrontendUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendUISubsystem), 4018928198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_3039324693(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
