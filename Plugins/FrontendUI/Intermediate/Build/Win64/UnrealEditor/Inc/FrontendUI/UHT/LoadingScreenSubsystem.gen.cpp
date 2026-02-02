// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Subsystems/LoadingScreenSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
FRONTENDUI_API UClass* Z_Construct_UClass_ULoadingScreenSubsystem();
FRONTENDUI_API UClass* Z_Construct_UClass_ULoadingScreenSubsystem_NoRegister();
FRONTENDUI_API UFunction* Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Delegate FOnLoadingReasonUpdatedDelegate
struct Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics
{
	struct LoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms
	{
		FText CurrentLoadingReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/LoadingScreenSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadingReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_CurrentLoadingReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::NewProp_CurrentLoadingReason = { "CurrentLoadingReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms, CurrentLoadingReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLoadingReason_MetaData), NewProp_CurrentLoadingReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::NewProp_CurrentLoadingReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenSubsystem, nullptr, "OnLoadingReasonUpdatedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::LoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::LoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void ULoadingScreenSubsystem::FOnLoadingReasonUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLoadingReasonUpdatedDelegate, FText const& CurrentLoadingReason)
{
	struct LoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms
	{
		FText CurrentLoadingReason;
	};
	LoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms Parms;
	Parms.CurrentLoadingReason=CurrentLoadingReason;
	OnLoadingReasonUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLoadingReasonUpdatedDelegate

// Begin Class ULoadingScreenSubsystem
void ULoadingScreenSubsystem::StaticRegisterNativesULoadingScreenSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadingScreenSubsystem);
UClass* Z_Construct_UClass_ULoadingScreenSubsystem_NoRegister()
{
	return ULoadingScreenSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULoadingScreenSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/LoadingScreenSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/LoadingScreenSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadingReasonUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/LoadingScreenSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadingReasonUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature, "OnLoadingReasonUpdatedDelegate__DelegateSignature" }, // 739835765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_OnLoadingReasonUpdated = { "OnLoadingReasonUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSubsystem, OnLoadingReasonUpdated), Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadingReasonUpdated_MetaData), NewProp_OnLoadingReasonUpdated_MetaData) }; // 739835765
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_OnLoadingReasonUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadingScreenSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenSubsystem_Statics::ClassParams = {
	&ULoadingScreenSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoadingScreenSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingScreenSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadingScreenSubsystem()
{
	if (!Z_Registration_Info_UClass_ULoadingScreenSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingScreenSubsystem.OuterSingleton, Z_Construct_UClass_ULoadingScreenSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadingScreenSubsystem.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<ULoadingScreenSubsystem>()
{
	return ULoadingScreenSubsystem::StaticClass();
}
ULoadingScreenSubsystem::ULoadingScreenSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenSubsystem);
ULoadingScreenSubsystem::~ULoadingScreenSubsystem() {}
// End Class ULoadingScreenSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingScreenSubsystem, ULoadingScreenSubsystem::StaticClass, TEXT("ULoadingScreenSubsystem"), &Z_Registration_Info_UClass_ULoadingScreenSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingScreenSubsystem), 2136425675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_627375086(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
