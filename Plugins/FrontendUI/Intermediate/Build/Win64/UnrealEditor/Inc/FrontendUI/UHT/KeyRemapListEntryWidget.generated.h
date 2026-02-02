// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Options/ListEntries/KeyRemapListEntryWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef FRONTENDUI_KeyRemapListEntryWidget_generated_h
#error "KeyRemapListEntryWidget.generated.h already included, missing '#pragma once' in KeyRemapListEntryWidget.h"
#endif
#define FRONTENDUI_KeyRemapListEntryWidget_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnKeyRemapCanceled); \
	DECLARE_FUNCTION(execOnKeyToRemapPressed); \
	DECLARE_FUNCTION(execOnResetKeyBindingButtonClicked); \
	DECLARE_FUNCTION(execOnRemapKeyButtonClicked);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeyRemapListEntryWidget(); \
	friend struct Z_Construct_UClass_UKeyRemapListEntryWidget_Statics; \
public: \
	DECLARE_CLASS(UKeyRemapListEntryWidget, UBaseListEntryWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UKeyRemapListEntryWidget)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeyRemapListEntryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKeyRemapListEntryWidget(UKeyRemapListEntryWidget&&); \
	UKeyRemapListEntryWidget(const UKeyRemapListEntryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyRemapListEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyRemapListEntryWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyRemapListEntryWidget) \
	NO_API virtual ~UKeyRemapListEntryWidget();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_13_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UKeyRemapListEntryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_KeyRemapListEntryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
