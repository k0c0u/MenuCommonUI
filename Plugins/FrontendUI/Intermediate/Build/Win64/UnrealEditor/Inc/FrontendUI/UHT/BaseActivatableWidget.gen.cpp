// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/BaseActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseActivatableWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseActivatableWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseActivatableWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UBaseActivatableWidget Function GetOwningPlayerController
struct Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics
{
	struct BaseActivatableWidget_eventGetOwningPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BaseActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseActivatableWidget_eventGetOwningPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseActivatableWidget, nullptr, "GetOwningPlayerController", nullptr, nullptr, Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::BaseActivatableWidget_eventGetOwningPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::BaseActivatableWidget_eventGetOwningPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseActivatableWidget::execGetOwningPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController();
	P_NATIVE_END;
}
// End Class UBaseActivatableWidget Function GetOwningPlayerController

// Begin Class UBaseActivatableWidget
void UBaseActivatableWidget::StaticRegisterNativesUBaseActivatableWidget()
{
	UClass* Class = UBaseActivatableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwningPlayerController", &UBaseActivatableWidget::execGetOwningPlayerController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseActivatableWidget);
UClass* Z_Construct_UClass_UBaseActivatableWidget_NoRegister()
{
	return UBaseActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/BaseActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/BaseActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseActivatableWidget_GetOwningPlayerController, "GetOwningPlayerController" }, // 4161920689
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseActivatableWidget_Statics::ClassParams = {
	&UBaseActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UBaseActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseActivatableWidget.OuterSingleton, Z_Construct_UClass_UBaseActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseActivatableWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UBaseActivatableWidget>()
{
	return UBaseActivatableWidget::StaticClass();
}
UBaseActivatableWidget::UBaseActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseActivatableWidget);
UBaseActivatableWidget::~UBaseActivatableWidget() {}
// End Class UBaseActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_BaseActivatableWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseActivatableWidget, UBaseActivatableWidget::StaticClass, TEXT("UBaseActivatableWidget"), &Z_Registration_Info_UClass_UBaseActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseActivatableWidget), 1078628433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_BaseActivatableWidget_h_862199414(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_BaseActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_BaseActivatableWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
