// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/OptionsDetailsViewWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionsDetailsViewWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UOptionsDetailsViewWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UOptionsDetailsViewWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UOptionsDetailsViewWidget
void UOptionsDetailsViewWidget::StaticRegisterNativesUOptionsDetailsViewWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionsDetailsViewWidget);
UClass* Z_Construct_UClass_UOptionsDetailsViewWidget_NoRegister()
{
	return UOptionsDetailsViewWidget::StaticClass();
}
struct Z_Construct_UClass_UOptionsDetailsViewWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Options/OptionsDetailsViewWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsDetailsViewWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsDetailsViewWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsDetailsViewWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionRichTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsDetailsViewWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDetailsRichTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsDetailsViewWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableReasonRichTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsDetailsViewWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LazyImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DescriptionRichTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicDetailsRichTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisableReasonRichTextBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionsDetailsViewWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_TitleTextBlock = { "TitleTextBlock", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsDetailsViewWidget, TitleTextBlock), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleTextBlock_MetaData), NewProp_TitleTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_LazyImage = { "LazyImage", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsDetailsViewWidget, LazyImage), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyImage_MetaData), NewProp_LazyImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_DescriptionRichTextBlock = { "DescriptionRichTextBlock", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsDetailsViewWidget, DescriptionRichTextBlock), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionRichTextBlock_MetaData), NewProp_DescriptionRichTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_DynamicDetailsRichTextBlock = { "DynamicDetailsRichTextBlock", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsDetailsViewWidget, DynamicDetailsRichTextBlock), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicDetailsRichTextBlock_MetaData), NewProp_DynamicDetailsRichTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_DisableReasonRichTextBlock = { "DisableReasonRichTextBlock", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsDetailsViewWidget, DisableReasonRichTextBlock), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableReasonRichTextBlock_MetaData), NewProp_DisableReasonRichTextBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_TitleTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_LazyImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_DescriptionRichTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_DynamicDetailsRichTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::NewProp_DisableReasonRichTextBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::ClassParams = {
	&UOptionsDetailsViewWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptionsDetailsViewWidget()
{
	if (!Z_Registration_Info_UClass_UOptionsDetailsViewWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionsDetailsViewWidget.OuterSingleton, Z_Construct_UClass_UOptionsDetailsViewWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptionsDetailsViewWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UOptionsDetailsViewWidget>()
{
	return UOptionsDetailsViewWidget::StaticClass();
}
UOptionsDetailsViewWidget::UOptionsDetailsViewWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionsDetailsViewWidget);
UOptionsDetailsViewWidget::~UOptionsDetailsViewWidget() {}
// End Class UOptionsDetailsViewWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsDetailsViewWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptionsDetailsViewWidget, UOptionsDetailsViewWidget::StaticClass, TEXT("UOptionsDetailsViewWidget"), &Z_Registration_Info_UClass_UOptionsDetailsViewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionsDetailsViewWidget), 3083367643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsDetailsViewWidget_h_290963394(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsDetailsViewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsDetailsViewWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
