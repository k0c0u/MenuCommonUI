// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Options/ListEntries/BaseListEntryWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRONTENDUI_BaseListEntryWidget_generated_h
#error "BaseListEntryWidget.generated.h already included, missing '#pragma once' in BaseListEntryWidget.h"
#endif
#define FRONTENDUI_BaseListEntryWidget_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseListEntryWidget(); \
	friend struct Z_Construct_UClass_UBaseListEntryWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseListEntryWidget, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UBaseListEntryWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseListEntryWidget*>(this); }


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseListEntryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseListEntryWidget(UBaseListEntryWidget&&); \
	UBaseListEntryWidget(const UBaseListEntryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseListEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseListEntryWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseListEntryWidget) \
	NO_API virtual ~UBaseListEntryWidget();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_15_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UBaseListEntryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_ListEntries_BaseListEntryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
