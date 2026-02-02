// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/LoadingScreenSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRONTENDUI_LoadingScreenSubsystem_generated_h
#error "LoadingScreenSubsystem.generated.h already included, missing '#pragma once' in LoadingScreenSubsystem.h"
#endif
#define FRONTENDUI_LoadingScreenSubsystem_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_18_DELEGATE \
static void FOnLoadingReasonUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLoadingReasonUpdatedDelegate, FText const& CurrentLoadingReason);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadingScreenSubsystem(); \
	friend struct Z_Construct_UClass_ULoadingScreenSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULoadingScreenSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(ULoadingScreenSubsystem)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadingScreenSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoadingScreenSubsystem(ULoadingScreenSubsystem&&); \
	ULoadingScreenSubsystem(const ULoadingScreenSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadingScreenSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadingScreenSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadingScreenSubsystem) \
	NO_API virtual ~ULoadingScreenSubsystem();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_12_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class ULoadingScreenSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_LoadingScreenSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
