// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrontendEnumTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRONTENDUI_FrontendEnumTypes_generated_h
#error "FrontendEnumTypes.generated.h already included, missing '#pragma once' in FrontendEnumTypes.h"
#endif
#define FRONTENDUI_FrontendEnumTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendEnumTypes_h


#define FOREACH_ENUM_ECONFIRMSCREENTYPE(op) \
	op(EConfirmScreenType::Ok) \
	op(EConfirmScreenType::YesNo) \
	op(EConfirmScreenType::OKCancel) \
	op(EConfirmScreenType::Unknown) 

enum class EConfirmScreenType : uint8;
template<> struct TIsUEnumClass<EConfirmScreenType> { enum { Value = true }; };
template<> FRONTENDUI_API UEnum* StaticEnum<EConfirmScreenType>();

#define FOREACH_ENUM_ECONFIRMSCREENBUTTONTYPE(op) \
	op(EConfirmScreenButtonType::Confirmed) \
	op(EConfirmScreenButtonType::Cancelled) \
	op(EConfirmScreenButtonType::Closed) \
	op(EConfirmScreenButtonType::Unknown) 

enum class EConfirmScreenButtonType : uint8;
template<> struct TIsUEnumClass<EConfirmScreenButtonType> { enum { Value = true }; };
template<> FRONTENDUI_API UEnum* StaticEnum<EConfirmScreenButtonType>();

#define FOREACH_ENUM_EOPTIONSLISTDATAMODIFYREASON(op) \
	op(EOptionsListDataModifyReason::Directly) \
	op(EOptionsListDataModifyReason::Dependency) \
	op(EOptionsListDataModifyReason::ResetToDefault) 

enum class EOptionsListDataModifyReason : uint8;
template<> struct TIsUEnumClass<EOptionsListDataModifyReason> { enum { Value = true }; };
template<> FRONTENDUI_API UEnum* StaticEnum<EOptionsListDataModifyReason>();

#define FOREACH_ENUM_EGRAPHICSQUALITY(op) \
	op(EGraphicsQuality::Low) \
	op(EGraphicsQuality::Medium) \
	op(EGraphicsQuality::High) \
	op(EGraphicsQuality::Epic) \
	op(EGraphicsQuality::Cinematic) \
	op(EGraphicsQuality::Unknown) 

enum class EGraphicsQuality : uint8;
template<> struct TIsUEnumClass<EGraphicsQuality> { enum { Value = true }; };
template<> FRONTENDUI_API UEnum* StaticEnum<EGraphicsQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
