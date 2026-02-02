// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/PushSoftWidgetAsyncAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UBaseActivatableWidget;
class UObject;
class UPushSoftWidgetAsyncAction;
struct FGameplayTag;
#ifdef FRONTENDUI_PushSoftWidgetAsyncAction_generated_h
#error "PushSoftWidgetAsyncAction.generated.h already included, missing '#pragma once' in PushSoftWidgetAsyncAction.h"
#endif
#define FRONTENDUI_PushSoftWidgetAsyncAction_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_13_DELEGATE \
FRONTENDUI_API void FOnPushSoftWidgetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPushSoftWidgetDelegate, UBaseActivatableWidget* PushedWidget);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPushSoftWidget);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPushSoftWidgetAsyncAction(); \
	friend struct Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPushSoftWidgetAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UPushSoftWidgetAsyncAction)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPushSoftWidgetAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPushSoftWidgetAsyncAction(UPushSoftWidgetAsyncAction&&); \
	UPushSoftWidgetAsyncAction(const UPushSoftWidgetAsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPushSoftWidgetAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPushSoftWidgetAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPushSoftWidgetAsyncAction) \
	NO_API virtual ~UPushSoftWidgetAsyncAction();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_15_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UPushSoftWidgetAsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushSoftWidgetAsyncAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
