// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/ListEntries/BaseListEntryWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseListEntryWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListEntryWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseListEntryWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UBaseListEntryWidget
void UBaseListEntryWidget::StaticRegisterNativesUBaseListEntryWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseListEntryWidget);
UClass* Z_Construct_UClass_UBaseListEntryWidget_NoRegister()
{
	return UBaseListEntryWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseListEntryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/ListEntries/BaseListEntryWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/BaseListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextStyle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/BaseListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlighTextStyle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/BaseListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidgetOptional", "" },
		{ "Category", "BaseListEntryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/BaseListEntryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/BaseListEntryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTextStyle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HighlighTextStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingDisplayName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedOwningDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseListEntryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseListEntryWidget_Statics::NewProp_DefaultTextStyle = { "DefaultTextStyle", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseListEntryWidget, DefaultTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTextStyle_MetaData), NewProp_DefaultTextStyle_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseListEntryWidget_Statics::NewProp_HighlighTextStyle = { "HighlighTextStyle", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseListEntryWidget, HighlighTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlighTextStyle_MetaData), NewProp_HighlighTextStyle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseListEntryWidget_Statics::NewProp_SettingDisplayName = { "SettingDisplayName", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseListEntryWidget, SettingDisplayName), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingDisplayName_MetaData), NewProp_SettingDisplayName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBaseListEntryWidget_Statics::NewProp_CachedOwningDataObject = { "CachedOwningDataObject", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseListEntryWidget, CachedOwningDataObject), Z_Construct_UClass_UBaseListDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningDataObject_MetaData), NewProp_CachedOwningDataObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseListEntryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseListEntryWidget_Statics::NewProp_DefaultTextStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseListEntryWidget_Statics::NewProp_HighlighTextStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseListEntryWidget_Statics::NewProp_SettingDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseListEntryWidget_Statics::NewProp_CachedOwningDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseListEntryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseListEntryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseListEntryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseListEntryWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UBaseListEntryWidget, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseListEntryWidget_Statics::ClassParams = {
	&UBaseListEntryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseListEntryWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseListEntryWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseListEntryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseListEntryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseListEntryWidget()
{
	if (!Z_Registration_Info_UClass_UBaseListEntryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseListEntryWidget.OuterSingleton, Z_Construct_UClass_UBaseListEntryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseListEntryWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UBaseListEntryWidget>()
{
	return UBaseListEntryWidget::StaticClass();
}
UBaseListEntryWidget::UBaseListEntryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseListEntryWidget);
UBaseListEntryWidget::~UBaseListEntryWidget() {}
// End Class UBaseListEntryWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseListEntryWidget, UBaseListEntryWidget::StaticClass, TEXT("UBaseListEntryWidget"), &Z_Registration_Info_UClass_UBaseListEntryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseListEntryWidget), 4186776367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_3606477342(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
