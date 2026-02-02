// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/FontendSettings/FrontendGameUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendGameUserSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendGameUserSettings();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendGameUserSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UFrontendGameUserSettings Function GetAllowBackgroundAudio
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics
{
	struct FrontendGameUserSettings_eventGetAllowBackgroundAudio_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FrontendGameUserSettings_eventGetAllowBackgroundAudio_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FrontendGameUserSettings_eventGetAllowBackgroundAudio_Parms), &Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetAllowBackgroundAudio", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::FrontendGameUserSettings_eventGetAllowBackgroundAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::FrontendGameUserSettings_eventGetAllowBackgroundAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetAllowBackgroundAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAllowBackgroundAudio();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetAllowBackgroundAudio

// Begin Class UFrontendGameUserSettings Function GetCurrentDisplayGamma
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics
{
	struct FrontendGameUserSettings_eventGetCurrentDisplayGamma_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Video Collection Tab ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Video Collection Tab *****" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetCurrentDisplayGamma_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetCurrentDisplayGamma", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::FrontendGameUserSettings_eventGetCurrentDisplayGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::FrontendGameUserSettings_eventGetCurrentDisplayGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetCurrentDisplayGamma)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentDisplayGamma();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetCurrentDisplayGamma

// Begin Class UFrontendGameUserSettings Function GetCurrentGameCulture
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics
{
	struct FrontendGameUserSettings_eventGetCurrentGameCulture_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetCurrentGameCulture_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetCurrentGameCulture", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::FrontendGameUserSettings_eventGetCurrentGameCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::FrontendGameUserSettings_eventGetCurrentGameCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetCurrentGameCulture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentGameCulture();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetCurrentGameCulture

// Begin Class UFrontendGameUserSettings Function GetCurrentGameDifficulty
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics
{
	struct FrontendGameUserSettings_eventGetCurrentGameDifficulty_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetCurrentGameDifficulty_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetCurrentGameDifficulty", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::FrontendGameUserSettings_eventGetCurrentGameDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::FrontendGameUserSettings_eventGetCurrentGameDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetCurrentGameDifficulty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentGameDifficulty();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetCurrentGameDifficulty

// Begin Class UFrontendGameUserSettings Function GetLanguage
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics
{
	struct FrontendGameUserSettings_eventGetLanguage_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Video Collection Tab ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Video Collection Tab *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetLanguage_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetLanguage", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::FrontendGameUserSettings_eventGetLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::FrontendGameUserSettings_eventGetLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetLanguage();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetLanguage

// Begin Class UFrontendGameUserSettings Function GetMusicVolume
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics
{
	struct FrontendGameUserSettings_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::FrontendGameUserSettings_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::FrontendGameUserSettings_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetMusicVolume

// Begin Class UFrontendGameUserSettings Function GetOverallVolume
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics
{
	struct FrontendGameUserSettings_eventGetOverallVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Audio Collection Tab ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Audio Collection Tab *****" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetOverallVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetOverallVolume", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::FrontendGameUserSettings_eventGetOverallVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::FrontendGameUserSettings_eventGetOverallVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetOverallVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOverallVolume();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetOverallVolume

// Begin Class UFrontendGameUserSettings Function GetSoundFXVolume
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics
{
	struct FrontendGameUserSettings_eventGetSoundFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetSoundFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetSoundFXVolume", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::FrontendGameUserSettings_eventGetSoundFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::FrontendGameUserSettings_eventGetSoundFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetSoundFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoundFXVolume();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetSoundFXVolume

// Begin Class UFrontendGameUserSettings Function GetUseHDRAudioMode
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics
{
	struct FrontendGameUserSettings_eventGetUseHDRAudioMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FrontendGameUserSettings_eventGetUseHDRAudioMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FrontendGameUserSettings_eventGetUseHDRAudioMode_Parms), &Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetUseHDRAudioMode", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::FrontendGameUserSettings_eventGetUseHDRAudioMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::FrontendGameUserSettings_eventGetUseHDRAudioMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetUseHDRAudioMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUseHDRAudioMode();
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function GetUseHDRAudioMode

// Begin Class UFrontendGameUserSettings Function SetAllowBackgroundAudio
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics
{
	struct FrontendGameUserSettings_eventSetAllowBackgroundAudio_Parms
	{
		bool bInNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::NewProp_bInNewValue_SetBit(void* Obj)
{
	((FrontendGameUserSettings_eventSetAllowBackgroundAudio_Parms*)Obj)->bInNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::NewProp_bInNewValue = { "bInNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FrontendGameUserSettings_eventSetAllowBackgroundAudio_Parms), &Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::NewProp_bInNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::NewProp_bInNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetAllowBackgroundAudio", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::FrontendGameUserSettings_eventSetAllowBackgroundAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::FrontendGameUserSettings_eventSetAllowBackgroundAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetAllowBackgroundAudio)
{
	P_GET_UBOOL(Z_Param_bInNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllowBackgroundAudio(Z_Param_bInNewValue);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetAllowBackgroundAudio

// Begin Class UFrontendGameUserSettings Function SetCurrentDisplayGamma
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics
{
	struct FrontendGameUserSettings_eventSetCurrentDisplayGamma_Parms
	{
		float InNewGamma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::NewProp_InNewGamma = { "InNewGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetCurrentDisplayGamma_Parms, InNewGamma), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::NewProp_InNewGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetCurrentDisplayGamma", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::FrontendGameUserSettings_eventSetCurrentDisplayGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::FrontendGameUserSettings_eventSetCurrentDisplayGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetCurrentDisplayGamma)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewGamma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentDisplayGamma(Z_Param_InNewGamma);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetCurrentDisplayGamma

// Begin Class UFrontendGameUserSettings Function SetCurrentGameCulture
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics
{
	struct FrontendGameUserSettings_eventSetCurrentGameCulture_Parms
	{
		FString NewLanguage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLanguage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewLanguage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::NewProp_NewLanguage = { "NewLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetCurrentGameCulture_Parms, NewLanguage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLanguage_MetaData), NewProp_NewLanguage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::NewProp_NewLanguage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetCurrentGameCulture", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::FrontendGameUserSettings_eventSetCurrentGameCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::FrontendGameUserSettings_eventSetCurrentGameCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetCurrentGameCulture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewLanguage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentGameCulture(Z_Param_NewLanguage);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetCurrentGameCulture

// Begin Class UFrontendGameUserSettings Function SetCurrentGameDifficulty
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics
{
	struct FrontendGameUserSettings_eventSetCurrentGameDifficulty_Parms
	{
		FString InNewDifficulty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewDifficulty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNewDifficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::NewProp_InNewDifficulty = { "InNewDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetCurrentGameDifficulty_Parms, InNewDifficulty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewDifficulty_MetaData), NewProp_InNewDifficulty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::NewProp_InNewDifficulty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetCurrentGameDifficulty", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::FrontendGameUserSettings_eventSetCurrentGameDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::FrontendGameUserSettings_eventSetCurrentGameDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetCurrentGameDifficulty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNewDifficulty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentGameDifficulty(Z_Param_InNewDifficulty);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetCurrentGameDifficulty

// Begin Class UFrontendGameUserSettings Function SetLanguage
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics
{
	struct FrontendGameUserSettings_eventSetLanguage_Parms
	{
		FName New;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_New;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetLanguage_Parms, New), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_New_MetaData), NewProp_New_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::NewProp_New,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetLanguage", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::FrontendGameUserSettings_eventSetLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::FrontendGameUserSettings_eventSetLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetLanguage)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_New);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLanguage(Z_Param_Out_New);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetLanguage

// Begin Class UFrontendGameUserSettings Function SetMusicVolume
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics
{
	struct FrontendGameUserSettings_eventSetMusicVolume_Parms
	{
		float InNewVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::NewProp_InNewVolume = { "InNewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetMusicVolume_Parms, InNewVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::NewProp_InNewVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::FrontendGameUserSettings_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::FrontendGameUserSettings_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_InNewVolume);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetMusicVolume

// Begin Class UFrontendGameUserSettings Function SetOverallVolume
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics
{
	struct FrontendGameUserSettings_eventSetOverallVolume_Parms
	{
		float InNewVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::NewProp_InNewVolume = { "InNewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetOverallVolume_Parms, InNewVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::NewProp_InNewVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetOverallVolume", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::FrontendGameUserSettings_eventSetOverallVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::FrontendGameUserSettings_eventSetOverallVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetOverallVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverallVolume(Z_Param_InNewVolume);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetOverallVolume

// Begin Class UFrontendGameUserSettings Function SetSoundFXVolume
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics
{
	struct FrontendGameUserSettings_eventSetSoundFXVolume_Parms
	{
		float InNewVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::NewProp_InNewVolume = { "InNewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetSoundFXVolume_Parms, InNewVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::NewProp_InNewVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetSoundFXVolume", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::FrontendGameUserSettings_eventSetSoundFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::FrontendGameUserSettings_eventSetSoundFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetSoundFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundFXVolume(Z_Param_InNewVolume);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetSoundFXVolume

// Begin Class UFrontendGameUserSettings Function SetUseHDRAudioMode
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics
{
	struct FrontendGameUserSettings_eventSetUseHDRAudioMode_Parms
	{
		bool bInNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::NewProp_bInNewValue_SetBit(void* Obj)
{
	((FrontendGameUserSettings_eventSetUseHDRAudioMode_Parms*)Obj)->bInNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::NewProp_bInNewValue = { "bInNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FrontendGameUserSettings_eventSetUseHDRAudioMode_Parms), &Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::NewProp_bInNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::NewProp_bInNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetUseHDRAudioMode", nullptr, nullptr, Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::FrontendGameUserSettings_eventSetUseHDRAudioMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::FrontendGameUserSettings_eventSetUseHDRAudioMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetUseHDRAudioMode)
{
	P_GET_UBOOL(Z_Param_bInNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseHDRAudioMode(Z_Param_bInNewValue);
	P_NATIVE_END;
}
// End Class UFrontendGameUserSettings Function SetUseHDRAudioMode

// Begin Class UFrontendGameUserSettings
void UFrontendGameUserSettings::StaticRegisterNativesUFrontendGameUserSettings()
{
	UClass* Class = UFrontendGameUserSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllowBackgroundAudio", &UFrontendGameUserSettings::execGetAllowBackgroundAudio },
		{ "GetCurrentDisplayGamma", &UFrontendGameUserSettings::execGetCurrentDisplayGamma },
		{ "GetCurrentGameCulture", &UFrontendGameUserSettings::execGetCurrentGameCulture },
		{ "GetCurrentGameDifficulty", &UFrontendGameUserSettings::execGetCurrentGameDifficulty },
		{ "GetLanguage", &UFrontendGameUserSettings::execGetLanguage },
		{ "GetMusicVolume", &UFrontendGameUserSettings::execGetMusicVolume },
		{ "GetOverallVolume", &UFrontendGameUserSettings::execGetOverallVolume },
		{ "GetSoundFXVolume", &UFrontendGameUserSettings::execGetSoundFXVolume },
		{ "GetUseHDRAudioMode", &UFrontendGameUserSettings::execGetUseHDRAudioMode },
		{ "SetAllowBackgroundAudio", &UFrontendGameUserSettings::execSetAllowBackgroundAudio },
		{ "SetCurrentDisplayGamma", &UFrontendGameUserSettings::execSetCurrentDisplayGamma },
		{ "SetCurrentGameCulture", &UFrontendGameUserSettings::execSetCurrentGameCulture },
		{ "SetCurrentGameDifficulty", &UFrontendGameUserSettings::execSetCurrentGameDifficulty },
		{ "SetLanguage", &UFrontendGameUserSettings::execSetLanguage },
		{ "SetMusicVolume", &UFrontendGameUserSettings::execSetMusicVolume },
		{ "SetOverallVolume", &UFrontendGameUserSettings::execSetOverallVolume },
		{ "SetSoundFXVolume", &UFrontendGameUserSettings::execSetSoundFXVolume },
		{ "SetUseHDRAudioMode", &UFrontendGameUserSettings::execSetUseHDRAudioMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontendGameUserSettings);
UClass* Z_Construct_UClass_UFrontendGameUserSettings_NoRegister()
{
	return UFrontendGameUserSettings::StaticClass();
}
struct Z_Construct_UClass_UFrontendGameUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FontendSettings/FrontendGameUserSettings.h" },
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameDifficulty_MetaData[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolume_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** Audio Collection Tab ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** Audio Collection Tab *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBackgroundAudio_MetaData[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHDRAudioMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLanguage_MetaData[] = {
		{ "ModuleRelativePath", "Public/FontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentGameDifficulty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundFXVolume;
	static void NewProp_bAllowBackgroundAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBackgroundAudio;
	static void NewProp_bUseHDRAudioMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHDRAudioMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentLanguage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetAllowBackgroundAudio, "GetAllowBackgroundAudio" }, // 1458827804
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentDisplayGamma, "GetCurrentDisplayGamma" }, // 1640529832
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameCulture, "GetCurrentGameCulture" }, // 4034745054
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty, "GetCurrentGameDifficulty" }, // 2130940121
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetLanguage, "GetLanguage" }, // 2801798485
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume, "GetMusicVolume" }, // 4011974988
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume, "GetOverallVolume" }, // 3630637310
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume, "GetSoundFXVolume" }, // 2224514615
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetUseHDRAudioMode, "GetUseHDRAudioMode" }, // 3941798379
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetAllowBackgroundAudio, "SetAllowBackgroundAudio" }, // 4255805542
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentDisplayGamma, "SetCurrentDisplayGamma" }, // 2484905518
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameCulture, "SetCurrentGameCulture" }, // 587023217
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty, "SetCurrentGameDifficulty" }, // 413501746
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetLanguage, "SetLanguage" }, // 2456123997
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume, "SetMusicVolume" }, // 861010577
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume, "SetOverallVolume" }, // 3180098967
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume, "SetSoundFXVolume" }, // 878637380
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetUseHDRAudioMode, "SetUseHDRAudioMode" }, // 1984754103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_CurrentGameDifficulty = { "CurrentGameDifficulty", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, CurrentGameDifficulty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameDifficulty_MetaData), NewProp_CurrentGameDifficulty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_OverallVolume = { "OverallVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, OverallVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallVolume_MetaData), NewProp_OverallVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_SoundFXVolume = { "SoundFXVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, SoundFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXVolume_MetaData), NewProp_SoundFXVolume_MetaData) };
void Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_bAllowBackgroundAudio_SetBit(void* Obj)
{
	((UFrontendGameUserSettings*)Obj)->bAllowBackgroundAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_bAllowBackgroundAudio = { "bAllowBackgroundAudio", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFrontendGameUserSettings), &Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_bAllowBackgroundAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowBackgroundAudio_MetaData), NewProp_bAllowBackgroundAudio_MetaData) };
void Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_bUseHDRAudioMode_SetBit(void* Obj)
{
	((UFrontendGameUserSettings*)Obj)->bUseHDRAudioMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_bUseHDRAudioMode = { "bUseHDRAudioMode", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFrontendGameUserSettings), &Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_bUseHDRAudioMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHDRAudioMode_MetaData), NewProp_bUseHDRAudioMode_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_CurrentLanguage = { "CurrentLanguage", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, CurrentLanguage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLanguage_MetaData), NewProp_CurrentLanguage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_CurrentGameDifficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_OverallVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_MusicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_SoundFXVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_bAllowBackgroundAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_bUseHDRAudioMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_CurrentLanguage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendGameUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendGameUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::ClassParams = {
	&UFrontendGameUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers),
	0,
	0x409000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendGameUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendGameUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendGameUserSettings()
{
	if (!Z_Registration_Info_UClass_UFrontendGameUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendGameUserSettings.OuterSingleton, Z_Construct_UClass_UFrontendGameUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendGameUserSettings.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UFrontendGameUserSettings>()
{
	return UFrontendGameUserSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendGameUserSettings);
UFrontendGameUserSettings::~UFrontendGameUserSettings() {}
// End Class UFrontendGameUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendGameUserSettings, UFrontendGameUserSettings::StaticClass, TEXT("UFrontendGameUserSettings"), &Z_Registration_Info_UClass_UFrontendGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendGameUserSettings), 1545353953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_2449990346(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
