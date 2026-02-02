// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/ListEntries/StringListEntryWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringListEntryWidget() {}

// Begin Cross Module References
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListEntryWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonRotator_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringListEntryWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringListEntryWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UStringListEntryWidget
void UStringListEntryWidget::StaticRegisterNativesUStringListEntryWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringListEntryWidget);
UClass* Z_Construct_UClass_UStringListEntryWidget_NoRegister()
{
	return UStringListEntryWidget::StaticClass();
}
struct Z_Construct_UClass_UStringListEntryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Options/ListEntries/StringListEntryWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/StringListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextOption_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "StringListEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/StringListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousOption_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "StringListEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/StringListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableOptions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "StringListEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/StringListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStringDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/StringListEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedStringDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringListEntryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStringListEntryWidget_Statics::NewProp_NextOption = { "NextOption", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStringListEntryWidget, NextOption), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextOption_MetaData), NewProp_NextOption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStringListEntryWidget_Statics::NewProp_PreviousOption = { "PreviousOption", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStringListEntryWidget, PreviousOption), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousOption_MetaData), NewProp_PreviousOption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStringListEntryWidget_Statics::NewProp_AvailableOptions = { "AvailableOptions", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStringListEntryWidget, AvailableOptions), Z_Construct_UClass_UFrontendCommonRotator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableOptions_MetaData), NewProp_AvailableOptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStringListEntryWidget_Statics::NewProp_CachedStringDataObject = { "CachedStringDataObject", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStringListEntryWidget, CachedStringDataObject), Z_Construct_UClass_UStringListDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStringDataObject_MetaData), NewProp_CachedStringDataObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStringListEntryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringListEntryWidget_Statics::NewProp_NextOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringListEntryWidget_Statics::NewProp_PreviousOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringListEntryWidget_Statics::NewProp_AvailableOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringListEntryWidget_Statics::NewProp_CachedStringDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringListEntryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStringListEntryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseListEntryWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringListEntryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringListEntryWidget_Statics::ClassParams = {
	&UStringListEntryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStringListEntryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStringListEntryWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringListEntryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringListEntryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringListEntryWidget()
{
	if (!Z_Registration_Info_UClass_UStringListEntryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringListEntryWidget.OuterSingleton, Z_Construct_UClass_UStringListEntryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringListEntryWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UStringListEntryWidget>()
{
	return UStringListEntryWidget::StaticClass();
}
UStringListEntryWidget::UStringListEntryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringListEntryWidget);
UStringListEntryWidget::~UStringListEntryWidget() {}
// End Class UStringListEntryWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_StringListEntryWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStringListEntryWidget, UStringListEntryWidget::StaticClass, TEXT("UStringListEntryWidget"), &Z_Registration_Info_UClass_UStringListEntryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringListEntryWidget), 2282343147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_StringListEntryWidget_h_1939213704(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_StringListEntryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_StringListEntryWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
