// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/ConfirmScreenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirmScreenWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UBaseActivatableWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UConfirmScreenInfoObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UConfirmScreenInfoObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UConfirmScreenWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UConfirmScreenWidget_NoRegister();
FRONTENDUI_API UEnum* Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType();
FRONTENDUI_API UScriptStruct* Z_Construct_UScriptStruct_FConfirmScreenButtonInfo();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin ScriptStruct FConfirmScreenButtonInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConfirmScreenButtonInfo;
class UScriptStruct* FConfirmScreenButtonInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConfirmScreenButtonInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConfirmScreenButtonInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfirmScreenButtonInfo, (UObject*)Z_Construct_UPackage__Script_FrontendUI(), TEXT("ConfirmScreenButtonInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConfirmScreenButtonInfo.OuterSingleton;
}
template<> FRONTENDUI_API UScriptStruct* StaticStruct<FConfirmScreenButtonInfo>()
{
	return FConfirmScreenButtonInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmScreenButtonType_MetaData[] = {
		{ "Category", "ConfirmScreenButtonInfo" },
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonTextToDisplay_MetaData[] = {
		{ "Category", "ConfirmScreenButtonInfo" },
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConfirmScreenButtonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConfirmScreenButtonType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonTextToDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfirmScreenButtonInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ConfirmScreenButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ConfirmScreenButtonType = { "ConfirmScreenButtonType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfirmScreenButtonInfo, ConfirmScreenButtonType), Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmScreenButtonType_MetaData), NewProp_ConfirmScreenButtonType_MetaData) }; // 881829255
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ButtonTextToDisplay = { "ButtonTextToDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfirmScreenButtonInfo, ButtonTextToDisplay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonTextToDisplay_MetaData), NewProp_ButtonTextToDisplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ConfirmScreenButtonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ConfirmScreenButtonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ButtonTextToDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
	nullptr,
	&NewStructOps,
	"ConfirmScreenButtonInfo",
	Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::PropPointers),
	sizeof(FConfirmScreenButtonInfo),
	alignof(FConfirmScreenButtonInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConfirmScreenButtonInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ConfirmScreenButtonInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConfirmScreenButtonInfo.InnerSingleton, Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConfirmScreenButtonInfo.InnerSingleton;
}
// End ScriptStruct FConfirmScreenButtonInfo

// Begin Class UConfirmScreenInfoObject
void UConfirmScreenInfoObject::StaticRegisterNativesUConfirmScreenInfoObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfirmScreenInfoObject);
UClass* Z_Construct_UClass_UConfirmScreenInfoObject_NoRegister()
{
	return UConfirmScreenInfoObject::StaticClass();
}
struct Z_Construct_UClass_UConfirmScreenInfoObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/ConfirmScreenWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenTitle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableScreenButtons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ScreenTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ScreenMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableScreenButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableScreenButtons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirmScreenInfoObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_ScreenTitle = { "ScreenTitle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenInfoObject, ScreenTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenTitle_MetaData), NewProp_ScreenTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_ScreenMessage = { "ScreenMessage", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenInfoObject, ScreenMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMessage_MetaData), NewProp_ScreenMessage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_AvailableScreenButtons_Inner = { "AvailableScreenButtons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConfirmScreenButtonInfo, METADATA_PARAMS(0, nullptr) }; // 3943197769
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_AvailableScreenButtons = { "AvailableScreenButtons", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenInfoObject, AvailableScreenButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableScreenButtons_MetaData), NewProp_AvailableScreenButtons_MetaData) }; // 3943197769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConfirmScreenInfoObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_ScreenTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_ScreenMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_AvailableScreenButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_AvailableScreenButtons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenInfoObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConfirmScreenInfoObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenInfoObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::ClassParams = {
	&UConfirmScreenInfoObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConfirmScreenInfoObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenInfoObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenInfoObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UConfirmScreenInfoObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConfirmScreenInfoObject()
{
	if (!Z_Registration_Info_UClass_UConfirmScreenInfoObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfirmScreenInfoObject.OuterSingleton, Z_Construct_UClass_UConfirmScreenInfoObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConfirmScreenInfoObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UConfirmScreenInfoObject>()
{
	return UConfirmScreenInfoObject::StaticClass();
}
UConfirmScreenInfoObject::UConfirmScreenInfoObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirmScreenInfoObject);
UConfirmScreenInfoObject::~UConfirmScreenInfoObject() {}
// End Class UConfirmScreenInfoObject

// Begin Class UConfirmScreenWidget
void UConfirmScreenWidget::StaticRegisterNativesUConfirmScreenWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfirmScreenWidget);
UClass* Z_Construct_UClass_UConfirmScreenWidget_NoRegister()
{
	return UConfirmScreenWidget::StaticClass();
}
struct Z_Construct_UClass_UConfirmScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/ConfirmScreenWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_Message_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicEntryBox_Buttons_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ConfirmScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicEntryBox_Buttons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirmScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmScreenWidget_Statics::NewProp_CommonTextBlock_Title = { "CommonTextBlock_Title", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenWidget, CommonTextBlock_Title), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_Title_MetaData), NewProp_CommonTextBlock_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmScreenWidget_Statics::NewProp_CommonTextBlock_Message = { "CommonTextBlock_Message", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenWidget, CommonTextBlock_Message), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_Message_MetaData), NewProp_CommonTextBlock_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmScreenWidget_Statics::NewProp_DynamicEntryBox_Buttons = { "DynamicEntryBox_Buttons", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenWidget, DynamicEntryBox_Buttons), Z_Construct_UClass_UDynamicEntryBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicEntryBox_Buttons_MetaData), NewProp_DynamicEntryBox_Buttons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConfirmScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenWidget_Statics::NewProp_CommonTextBlock_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenWidget_Statics::NewProp_CommonTextBlock_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenWidget_Statics::NewProp_DynamicEntryBox_Buttons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConfirmScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfirmScreenWidget_Statics::ClassParams = {
	&UConfirmScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConfirmScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UConfirmScreenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConfirmScreenWidget()
{
	if (!Z_Registration_Info_UClass_UConfirmScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfirmScreenWidget.OuterSingleton, Z_Construct_UClass_UConfirmScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConfirmScreenWidget.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UConfirmScreenWidget>()
{
	return UConfirmScreenWidget::StaticClass();
}
UConfirmScreenWidget::UConfirmScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirmScreenWidget);
UConfirmScreenWidget::~UConfirmScreenWidget() {}
// End Class UConfirmScreenWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_ConfirmScreenWidget_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConfirmScreenButtonInfo::StaticStruct, Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewStructOps, TEXT("ConfirmScreenButtonInfo"), &Z_Registration_Info_UScriptStruct_ConfirmScreenButtonInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConfirmScreenButtonInfo), 3943197769U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConfirmScreenInfoObject, UConfirmScreenInfoObject::StaticClass, TEXT("UConfirmScreenInfoObject"), &Z_Registration_Info_UClass_UConfirmScreenInfoObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfirmScreenInfoObject), 2056739510U) },
		{ Z_Construct_UClass_UConfirmScreenWidget, UConfirmScreenWidget::StaticClass, TEXT("UConfirmScreenWidget"), &Z_Registration_Info_UClass_UConfirmScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfirmScreenWidget), 1977137758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_ConfirmScreenWidget_h_2484785172(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_ConfirmScreenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_ConfirmScreenWidget_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_ConfirmScreenWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_ConfirmScreenWidget_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
