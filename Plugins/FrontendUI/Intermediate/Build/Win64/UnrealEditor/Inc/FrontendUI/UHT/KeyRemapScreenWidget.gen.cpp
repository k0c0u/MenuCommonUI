// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/KeyRemapScreenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyRemapScreenWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseActivatableWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UKeyRemapScreenWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UKeyRemapScreenWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UKeyRemapScreenWidget
void UKeyRemapScreenWidget::StaticRegisterNativesUKeyRemapScreenWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyRemapScreenWidget);
UClass* Z_Construct_UClass_UKeyRemapScreenWidget_NoRegister()
{
	return UKeyRemapScreenWidget::StaticClass();
}
struct Z_Construct_UClass_UKeyRemapScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/KeyRemapScreenWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/KeyRemapScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/KeyRemapScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemapMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyRemapScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKeyRemapScreenWidget_Statics::NewProp_RemapMessage = { "RemapMessage", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyRemapScreenWidget, RemapMessage), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapMessage_MetaData), NewProp_RemapMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyRemapScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyRemapScreenWidget_Statics::NewProp_RemapMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapScreenWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKeyRemapScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyRemapScreenWidget_Statics::ClassParams = {
	&UKeyRemapScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKeyRemapScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapScreenWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyRemapScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyRemapScreenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyRemapScreenWidget()
{
	if (!Z_Registration_Info_UClass_UKeyRemapScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyRemapScreenWidget.OuterSingleton, Z_Construct_UClass_UKeyRemapScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyRemapScreenWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UKeyRemapScreenWidget>()
{
	return UKeyRemapScreenWidget::StaticClass();
}
UKeyRemapScreenWidget::UKeyRemapScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyRemapScreenWidget);
UKeyRemapScreenWidget::~UKeyRemapScreenWidget() {}
// End Class UKeyRemapScreenWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_KeyRemapScreenWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyRemapScreenWidget, UKeyRemapScreenWidget::StaticClass, TEXT("UKeyRemapScreenWidget"), &Z_Registration_Info_UClass_UKeyRemapScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyRemapScreenWidget), 2744718315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_KeyRemapScreenWidget_h_2875376068(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_KeyRemapScreenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_KeyRemapScreenWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
