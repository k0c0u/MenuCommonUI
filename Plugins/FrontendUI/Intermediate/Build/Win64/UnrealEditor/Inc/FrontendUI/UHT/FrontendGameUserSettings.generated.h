// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FontendSettings/FrontendGameUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRONTENDUI_FrontendGameUserSettings_generated_h
#error "FrontendGameUserSettings.generated.h already included, missing '#pragma once' in FrontendGameUserSettings.h"
#endif
#define FRONTENDUI_FrontendGameUserSettings_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execGetLanguage); \
	DECLARE_FUNCTION(execSetCurrentDisplayGamma); \
	DECLARE_FUNCTION(execGetCurrentDisplayGamma); \
	DECLARE_FUNCTION(execSetUseHDRAudioMode); \
	DECLARE_FUNCTION(execGetUseHDRAudioMode); \
	DECLARE_FUNCTION(execSetAllowBackgroundAudio); \
	DECLARE_FUNCTION(execGetAllowBackgroundAudio); \
	DECLARE_FUNCTION(execSetSoundFXVolume); \
	DECLARE_FUNCTION(execGetSoundFXVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execSetOverallVolume); \
	DECLARE_FUNCTION(execGetOverallVolume); \
	DECLARE_FUNCTION(execSetCurrentGameDifficulty); \
	DECLARE_FUNCTION(execSetCurrentGameCulture); \
	DECLARE_FUNCTION(execGetCurrentGameCulture); \
	DECLARE_FUNCTION(execGetCurrentGameDifficulty);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendGameUserSettings(); \
	friend struct Z_Construct_UClass_UFrontendGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UFrontendGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UFrontendGameUserSettings)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFrontendGameUserSettings(UFrontendGameUserSettings&&); \
	UFrontendGameUserSettings(const UFrontendGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendGameUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFrontendGameUserSettings) \
	NO_API virtual ~UFrontendGameUserSettings();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_11_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UFrontendGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendGameUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
