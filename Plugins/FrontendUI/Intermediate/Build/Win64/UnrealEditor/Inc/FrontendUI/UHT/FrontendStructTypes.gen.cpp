// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/FrontendStructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendStructTypes() {}

// Begin Cross Module References
FRONTENDUI_API UScriptStruct* Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin ScriptStruct FOptionsDataEditConditionDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptionsDataEditConditionDescription;
class UScriptStruct* FOptionsDataEditConditionDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptionsDataEditConditionDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptionsDataEditConditionDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription, (UObject*)Z_Construct_UPackage__Script_FrontendUI(), TEXT("OptionsDataEditConditionDescription"));
	}
	return Z_Registration_Info_UScriptStruct_OptionsDataEditConditionDescription.OuterSingleton;
}
template<> FRONTENDUI_API UScriptStruct* StaticStruct<FOptionsDataEditConditionDescription>()
{
	return FOptionsDataEditConditionDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendStructTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionsDataEditConditionDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
	nullptr,
	&NewStructOps,
	"OptionsDataEditConditionDescription",
	nullptr,
	0,
	sizeof(FOptionsDataEditConditionDescription),
	alignof(FOptionsDataEditConditionDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription()
{
	if (!Z_Registration_Info_UScriptStruct_OptionsDataEditConditionDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptionsDataEditConditionDescription.InnerSingleton, Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptionsDataEditConditionDescription.InnerSingleton;
}
// End ScriptStruct FOptionsDataEditConditionDescription

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendStructTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptionsDataEditConditionDescription::StaticStruct, Z_Construct_UScriptStruct_FOptionsDataEditConditionDescription_Statics::NewStructOps, TEXT("OptionsDataEditConditionDescription"), &Z_Registration_Info_UScriptStruct_OptionsDataEditConditionDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptionsDataEditConditionDescription), 2567105644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendStructTypes_h_2118585355(TEXT("/Script/FrontendUI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendStructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendStructTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
