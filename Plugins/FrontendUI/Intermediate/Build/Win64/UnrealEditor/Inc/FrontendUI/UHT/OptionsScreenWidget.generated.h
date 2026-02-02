// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Options/OptionsScreenWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRONTENDUI_OptionsScreenWidget_generated_h
#error "OptionsScreenWidget.generated.h already included, missing '#pragma once' in OptionsScreenWidget.h"
#endif
#define FRONTENDUI_OptionsScreenWidget_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOptionsTabSelected);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptionsScreenWidget(); \
	friend struct Z_Construct_UClass_UOptionsScreenWidget_Statics; \
public: \
	DECLARE_CLASS(UOptionsScreenWidget, UBaseActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UOptionsScreenWidget)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionsScreenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptionsScreenWidget(UOptionsScreenWidget&&); \
	UOptionsScreenWidget(const UOptionsScreenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionsScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionsScreenWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionsScreenWidget) \
	NO_API virtual ~UOptionsScreenWidget();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_17_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UOptionsScreenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_OptionsScreenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
