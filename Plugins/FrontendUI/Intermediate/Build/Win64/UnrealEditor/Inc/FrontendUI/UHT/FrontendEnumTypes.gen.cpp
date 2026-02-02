// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/FrontendEnumTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendEnumTypes() {}

// Begin Cross Module References
FRONTENDUI_API UEnum* Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType();
FRONTENDUI_API UEnum* Z_Construct_UEnum_FrontendUI_EConfirmScreenType();
FRONTENDUI_API UEnum* Z_Construct_UEnum_FrontendUI_EGraphicsQuality();
FRONTENDUI_API UEnum* Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Enum EConfirmScreenType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConfirmScreenType;
static UEnum* EConfirmScreenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConfirmScreenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConfirmScreenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FrontendUI_EConfirmScreenType, (UObject*)Z_Construct_UPackage__Script_FrontendUI(), TEXT("EConfirmScreenType"));
	}
	return Z_Registration_Info_UEnum_EConfirmScreenType.OuterSingleton;
}
template<> FRONTENDUI_API UEnum* StaticEnum<EConfirmScreenType>()
{
	return EConfirmScreenType_StaticEnum();
}
struct Z_Construct_UEnum_FrontendUI_EConfirmScreenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FrontendEnumTypes.h" },
		{ "Ok.Name", "EConfirmScreenType::Ok" },
		{ "OKCancel.Name", "EConfirmScreenType::OKCancel" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EConfirmScreenType::Unknown" },
		{ "YesNo.Name", "EConfirmScreenType::YesNo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConfirmScreenType::Ok", (int64)EConfirmScreenType::Ok },
		{ "EConfirmScreenType::YesNo", (int64)EConfirmScreenType::YesNo },
		{ "EConfirmScreenType::OKCancel", (int64)EConfirmScreenType::OKCancel },
		{ "EConfirmScreenType::Unknown", (int64)EConfirmScreenType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FrontendUI_EConfirmScreenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FrontendUI,
	nullptr,
	"EConfirmScreenType",
	"EConfirmScreenType",
	Z_Construct_UEnum_FrontendUI_EConfirmScreenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FrontendUI_EConfirmScreenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FrontendUI_EConfirmScreenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FrontendUI_EConfirmScreenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FrontendUI_EConfirmScreenType()
{
	if (!Z_Registration_Info_UEnum_EConfirmScreenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConfirmScreenType.InnerSingleton, Z_Construct_UEnum_FrontendUI_EConfirmScreenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConfirmScreenType.InnerSingleton;
}
// End Enum EConfirmScreenType

// Begin Enum EConfirmScreenButtonType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConfirmScreenButtonType;
static UEnum* EConfirmScreenButtonType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConfirmScreenButtonType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConfirmScreenButtonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType, (UObject*)Z_Construct_UPackage__Script_FrontendUI(), TEXT("EConfirmScreenButtonType"));
	}
	return Z_Registration_Info_UEnum_EConfirmScreenButtonType.OuterSingleton;
}
template<> FRONTENDUI_API UEnum* StaticEnum<EConfirmScreenButtonType>()
{
	return EConfirmScreenButtonType_StaticEnum();
}
struct Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EConfirmScreenButtonType::Cancelled" },
		{ "Closed.Name", "EConfirmScreenButtonType::Closed" },
		{ "Confirmed.Name", "EConfirmScreenButtonType::Confirmed" },
		{ "ModuleRelativePath", "Public/FrontendEnumTypes.h" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EConfirmScreenButtonType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConfirmScreenButtonType::Confirmed", (int64)EConfirmScreenButtonType::Confirmed },
		{ "EConfirmScreenButtonType::Cancelled", (int64)EConfirmScreenButtonType::Cancelled },
		{ "EConfirmScreenButtonType::Closed", (int64)EConfirmScreenButtonType::Closed },
		{ "EConfirmScreenButtonType::Unknown", (int64)EConfirmScreenButtonType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FrontendUI,
	nullptr,
	"EConfirmScreenButtonType",
	"EConfirmScreenButtonType",
	Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType()
{
	if (!Z_Registration_Info_UEnum_EConfirmScreenButtonType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConfirmScreenButtonType.InnerSingleton, Z_Construct_UEnum_FrontendUI_EConfirmScreenButtonType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConfirmScreenButtonType.InnerSingleton;
}
// End Enum EConfirmScreenButtonType

// Begin Enum EOptionsListDataModifyReason
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptionsListDataModifyReason;
static UEnum* EOptionsListDataModifyReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptionsListDataModifyReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptionsListDataModifyReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason, (UObject*)Z_Construct_UPackage__Script_FrontendUI(), TEXT("EOptionsListDataModifyReason"));
	}
	return Z_Registration_Info_UEnum_EOptionsListDataModifyReason.OuterSingleton;
}
template<> FRONTENDUI_API UEnum* StaticEnum<EOptionsListDataModifyReason>()
{
	return EOptionsListDataModifyReason_StaticEnum();
}
struct Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dependency.Name", "EOptionsListDataModifyReason::Dependency" },
		{ "Directly.Name", "EOptionsListDataModifyReason::Directly" },
		{ "ModuleRelativePath", "Public/FrontendEnumTypes.h" },
		{ "ResetToDefault.Name", "EOptionsListDataModifyReason::ResetToDefault" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptionsListDataModifyReason::Directly", (int64)EOptionsListDataModifyReason::Directly },
		{ "EOptionsListDataModifyReason::Dependency", (int64)EOptionsListDataModifyReason::Dependency },
		{ "EOptionsListDataModifyReason::ResetToDefault", (int64)EOptionsListDataModifyReason::ResetToDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FrontendUI,
	nullptr,
	"EOptionsListDataModifyReason",
	"EOptionsListDataModifyReason",
	Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason()
{
	if (!Z_Registration_Info_UEnum_EOptionsListDataModifyReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptionsListDataModifyReason.InnerSingleton, Z_Construct_UEnum_FrontendUI_EOptionsListDataModifyReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptionsListDataModifyReason.InnerSingleton;
}
// End Enum EOptionsListDataModifyReason

// Begin Enum EGraphicsQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphicsQuality;
static UEnum* EGraphicsQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGraphicsQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGraphicsQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FrontendUI_EGraphicsQuality, (UObject*)Z_Construct_UPackage__Script_FrontendUI(), TEXT("EGraphicsQuality"));
	}
	return Z_Registration_Info_UEnum_EGraphicsQuality.OuterSingleton;
}
template<> FRONTENDUI_API UEnum* StaticEnum<EGraphicsQuality>()
{
	return EGraphicsQuality_StaticEnum();
}
struct Z_Construct_UEnum_FrontendUI_EGraphicsQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cinematic.Name", "EGraphicsQuality::Cinematic" },
		{ "Epic.Name", "EGraphicsQuality::Epic" },
		{ "High.Name", "EGraphicsQuality::High" },
		{ "Low.Name", "EGraphicsQuality::Low" },
		{ "Medium.Name", "EGraphicsQuality::Medium" },
		{ "ModuleRelativePath", "Public/FrontendEnumTypes.h" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EGraphicsQuality::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGraphicsQuality::Low", (int64)EGraphicsQuality::Low },
		{ "EGraphicsQuality::Medium", (int64)EGraphicsQuality::Medium },
		{ "EGraphicsQuality::High", (int64)EGraphicsQuality::High },
		{ "EGraphicsQuality::Epic", (int64)EGraphicsQuality::Epic },
		{ "EGraphicsQuality::Cinematic", (int64)EGraphicsQuality::Cinematic },
		{ "EGraphicsQuality::Unknown", (int64)EGraphicsQuality::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FrontendUI_EGraphicsQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FrontendUI,
	nullptr,
	"EGraphicsQuality",
	"EGraphicsQuality",
	Z_Construct_UEnum_FrontendUI_EGraphicsQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FrontendUI_EGraphicsQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FrontendUI_EGraphicsQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FrontendUI_EGraphicsQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FrontendUI_EGraphicsQuality()
{
	if (!Z_Registration_Info_UEnum_EGraphicsQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphicsQuality.InnerSingleton, Z_Construct_UEnum_FrontendUI_EGraphicsQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGraphicsQuality.InnerSingleton;
}
// End Enum EGraphicsQuality

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendEnumTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConfirmScreenType_StaticEnum, TEXT("EConfirmScreenType"), &Z_Registration_Info_UEnum_EConfirmScreenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3661324030U) },
		{ EConfirmScreenButtonType_StaticEnum, TEXT("EConfirmScreenButtonType"), &Z_Registration_Info_UEnum_EConfirmScreenButtonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 881829255U) },
		{ EOptionsListDataModifyReason_StaticEnum, TEXT("EOptionsListDataModifyReason"), &Z_Registration_Info_UEnum_EOptionsListDataModifyReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2169945446U) },
		{ EGraphicsQuality_StaticEnum, TEXT("EGraphicsQuality"), &Z_Registration_Info_UEnum_EGraphicsQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2691281403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendEnumTypes_h_1271195526(TEXT("/Script/FrontendUI"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendEnumTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendEnumTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
