// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Buttons/FrontendCommonButtonBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateBrush;
#ifdef FRONTENDUI_FrontendCommonButtonBase_generated_h
#error "FrontendCommonButtonBase.generated.h already included, missing '#pragma once' in FrontendCommonButtonBase.h"
#endif
#define FRONTENDUI_FrontendCommonButtonBase_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ToggleButtonImageHighlight_Implementation(bool bShouldHighlight); \
	DECLARE_FUNCTION(execSetButtonDisplayImage); \
	DECLARE_FUNCTION(execToggleButtonImageHighlight); \
	DECLARE_FUNCTION(execSetButtonText);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendCommonButtonBase(); \
	friend struct Z_Construct_UClass_UFrontendCommonButtonBase_Statics; \
public: \
	DECLARE_CLASS(UFrontendCommonButtonBase, UCommonButtonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UFrontendCommonButtonBase)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontendCommonButtonBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFrontendCommonButtonBase(UFrontendCommonButtonBase&&); \
	UFrontendCommonButtonBase(const UFrontendCommonButtonBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendCommonButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendCommonButtonBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrontendCommonButtonBase) \
	NO_API virtual ~UFrontendCommonButtonBase();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_11_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UFrontendCommonButtonBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Buttons_FrontendCommonButtonBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
