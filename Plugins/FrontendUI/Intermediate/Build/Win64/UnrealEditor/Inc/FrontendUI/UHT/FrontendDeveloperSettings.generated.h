// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FontendSettings/FrontendDeveloperSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRONTENDUI_FrontendDeveloperSettings_generated_h
#error "FrontendDeveloperSettings.generated.h already included, missing '#pragma once' in FrontendDeveloperSettings.h"
#endif
#define FRONTENDUI_FrontendDeveloperSettings_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendDeveloperSettings(); \
	friend struct Z_Construct_UClass_UFrontendDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UFrontendDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UFrontendDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontendDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFrontendDeveloperSettings(UFrontendDeveloperSettings&&); \
	UFrontendDeveloperSettings(const UFrontendDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrontendDeveloperSettings) \
	NO_API virtual ~UFrontendDeveloperSettings();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_12_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UFrontendDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FontendSettings_FrontendDeveloperSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
