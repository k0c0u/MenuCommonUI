// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Buttons/FrontendCommonButtonBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendCommonButtonBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UFrontendCommonButtonBase Function SetButtonDisplayImage
struct Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics
{
	struct FrontendCommonButtonBase_eventSetButtonDisplayImage_Parms
	{
		FSlateBrush InBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendCommonButtonBase_eventSetButtonDisplayImage_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::NewProp_InBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendCommonButtonBase, nullptr, "SetButtonDisplayImage", nullptr, nullptr, Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::FrontendCommonButtonBase_eventSetButtonDisplayImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::FrontendCommonButtonBase_eventSetButtonDisplayImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendCommonButtonBase::execSetButtonDisplayImage)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonDisplayImage(Z_Param_Out_InBrush);
	P_NATIVE_END;
}
// End Class UFrontendCommonButtonBase Function SetButtonDisplayImage

// Begin Class UFrontendCommonButtonBase Function SetButtonText
struct Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics
{
	struct FrontendCommonButtonBase_eventSetButtonText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendCommonButtonBase_eventSetButtonText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendCommonButtonBase, nullptr, "SetButtonText", nullptr, nullptr, Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::FrontendCommonButtonBase_eventSetButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::FrontendCommonButtonBase_eventSetButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendCommonButtonBase::execSetButtonText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonText(Z_Param_InText);
	P_NATIVE_END;
}
// End Class UFrontendCommonButtonBase Function SetButtonText

// Begin Class UFrontendCommonButtonBase Function ToggleButtonImageHighlight
struct FrontendCommonButtonBase_eventToggleButtonImageHighlight_Parms
{
	bool bShouldHighlight;
};
static const FName NAME_UFrontendCommonButtonBase_ToggleButtonImageHighlight = FName(TEXT("ToggleButtonImageHighlight"));
void UFrontendCommonButtonBase::ToggleButtonImageHighlight(bool bShouldHighlight)
{
	UFunction* Func = FindFunctionChecked(NAME_UFrontendCommonButtonBase_ToggleButtonImageHighlight);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FrontendCommonButtonBase_eventToggleButtonImageHighlight_Parms Parms;
		Parms.bShouldHighlight=bShouldHighlight ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ToggleButtonImageHighlight_Implementation(bShouldHighlight);
	}
}
struct Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldHighlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHighlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::NewProp_bShouldHighlight_SetBit(void* Obj)
{
	((FrontendCommonButtonBase_eventToggleButtonImageHighlight_Parms*)Obj)->bShouldHighlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::NewProp_bShouldHighlight = { "bShouldHighlight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FrontendCommonButtonBase_eventToggleButtonImageHighlight_Parms), &Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::NewProp_bShouldHighlight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::NewProp_bShouldHighlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendCommonButtonBase, nullptr, "ToggleButtonImageHighlight", nullptr, nullptr, Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::PropPointers), sizeof(FrontendCommonButtonBase_eventToggleButtonImageHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::Function_MetaDataParams) };
static_assert(sizeof(FrontendCommonButtonBase_eventToggleButtonImageHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendCommonButtonBase::execToggleButtonImageHighlight)
{
	P_GET_UBOOL(Z_Param_bShouldHighlight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleButtonImageHighlight_Implementation(Z_Param_bShouldHighlight);
	P_NATIVE_END;
}
// End Class UFrontendCommonButtonBase Function ToggleButtonImageHighlight

// Begin Class UFrontendCommonButtonBase
void UFrontendCommonButtonBase::StaticRegisterNativesUFrontendCommonButtonBase()
{
	UClass* Class = UFrontendCommonButtonBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetButtonDisplayImage", &UFrontendCommonButtonBase::execSetButtonDisplayImage },
		{ "SetButtonText", &UFrontendCommonButtonBase::execSetButtonText },
		{ "ToggleButtonImageHighlight", &UFrontendCommonButtonBase::execToggleButtonImageHighlight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontendCommonButtonBase);
UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister()
{
	return UFrontendCommonButtonBase::StaticClass();
}
struct Z_Construct_UClass_UFrontendCommonButtonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Buttons/FrontendCommonButtonBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftButtonImage_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSoftButtonImage_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightButtonImageColor_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultButtonImageColor_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSize_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToggleHighlightStateWhenHovered_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_ButtonText_MetaData[] = {
		{ "BindWidgetOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//**** Bound Widgets ****//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bound Widgets ***/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonImage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidgetOptional", "" },
		{ "Category", "FrontendCommonButtonBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonDisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Frontend Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//**** Bound Widgets ****//\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bound Widgets ***/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUserUpperCaseForButtonText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Frontend Button" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonDescriptionText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Frontend Button" },
		{ "ModuleRelativePath", "Public/Widgets/Buttons/FrontendCommonButtonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftButtonImage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSoftButtonImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightButtonImageColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultButtonImageColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredSize;
	static void NewProp_bToggleHighlightStateWhenHovered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggleHighlightStateWhenHovered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_ButtonText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonImage;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonDisplayText;
	static void NewProp_bUserUpperCaseForButtonText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserUpperCaseForButtonText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonDescriptionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage, "SetButtonDisplayImage" }, // 3860207550
		{ &Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText, "SetButtonText" }, // 1040292337
		{ &Z_Construct_UFunction_UFrontendCommonButtonBase_ToggleButtonImageHighlight, "ToggleButtonImageHighlight" }, // 3049912663
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendCommonButtonBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_SoftButtonImage = { "SoftButtonImage", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, SoftButtonImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftButtonImage_MetaData), NewProp_SoftButtonImage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_PreviewSoftButtonImage = { "PreviewSoftButtonImage", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, PreviewSoftButtonImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSoftButtonImage_MetaData), NewProp_PreviewSoftButtonImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_HighlightButtonImageColor = { "HighlightButtonImageColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, HighlightButtonImageColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightButtonImageColor_MetaData), NewProp_HighlightButtonImageColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_DefaultButtonImageColor = { "DefaultButtonImageColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, DefaultButtonImageColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultButtonImageColor_MetaData), NewProp_DefaultButtonImageColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, DesiredSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredSize_MetaData), NewProp_DesiredSize_MetaData) };
void Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bToggleHighlightStateWhenHovered_SetBit(void* Obj)
{
	((UFrontendCommonButtonBase*)Obj)->bToggleHighlightStateWhenHovered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bToggleHighlightStateWhenHovered = { "bToggleHighlightStateWhenHovered", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFrontendCommonButtonBase), &Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bToggleHighlightStateWhenHovered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToggleHighlightStateWhenHovered_MetaData), NewProp_bToggleHighlightStateWhenHovered_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_CommonTextBlock_ButtonText = { "CommonTextBlock_ButtonText", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, CommonTextBlock_ButtonText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_ButtonText_MetaData), NewProp_CommonTextBlock_ButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonImage = { "ButtonImage", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, ButtonImage), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonImage_MetaData), NewProp_ButtonImage_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDisplayText = { "ButtonDisplayText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, ButtonDisplayText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonDisplayText_MetaData), NewProp_ButtonDisplayText_MetaData) };
void Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUserUpperCaseForButtonText_SetBit(void* Obj)
{
	((UFrontendCommonButtonBase*)Obj)->bUserUpperCaseForButtonText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUserUpperCaseForButtonText = { "bUserUpperCaseForButtonText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFrontendCommonButtonBase), &Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUserUpperCaseForButtonText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUserUpperCaseForButtonText_MetaData), NewProp_bUserUpperCaseForButtonText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDescriptionText = { "ButtonDescriptionText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, ButtonDescriptionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonDescriptionText_MetaData), NewProp_ButtonDescriptionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_SoftButtonImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_PreviewSoftButtonImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_HighlightButtonImageColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_DefaultButtonImageColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_DesiredSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bToggleHighlightStateWhenHovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_CommonTextBlock_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDisplayText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUserUpperCaseForButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDescriptionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendCommonButtonBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonButtonBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::ClassParams = {
	&UFrontendCommonButtonBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonButtonBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendCommonButtonBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendCommonButtonBase()
{
	if (!Z_Registration_Info_UClass_UFrontendCommonButtonBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendCommonButtonBase.OuterSingleton, Z_Construct_UClass_UFrontendCommonButtonBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendCommonButtonBase.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UFrontendCommonButtonBase>()
{
	return UFrontendCommonButtonBase::StaticClass();
}
UFrontendCommonButtonBase::UFrontendCommonButtonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendCommonButtonBase);
UFrontendCommonButtonBase::~UFrontendCommonButtonBase() {}
// End Class UFrontendCommonButtonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendCommonButtonBase, UFrontendCommonButtonBase::StaticClass, TEXT("UFrontendCommonButtonBase"), &Z_Registration_Info_UClass_UFrontendCommonButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendCommonButtonBase), 4169615940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_658845166(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
