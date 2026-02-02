// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/PushConfirmScreenAsyncAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPushConfirmScreenAsyncAction;
enum class EConfirmScreenButtonType : uint8;
enum class EConfirmScreenType : uint8;
#ifdef FRONTENDUI_PushConfirmScreenAsyncAction_generated_h
#error "PushConfirmScreenAsyncAction.generated.h already included, missing '#pragma once' in PushConfirmScreenAsyncAction.h"
#endif
#define FRONTENDUI_PushConfirmScreenAsyncAction_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_9_DELEGATE \
FRONTENDUI_API void FOnConfirmScreenButtonClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnConfirmScreenButtonClickedDelegate, EConfirmScreenButtonType ClickedButtonType);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPushConfirmScreen);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPushConfirmScreenAsyncAction(); \
	friend struct Z_Construct_UClass_UPushConfirmScreenAsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPushConfirmScreenAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UPushConfirmScreenAsyncAction)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPushConfirmScreenAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPushConfirmScreenAsyncAction(UPushConfirmScreenAsyncAction&&); \
	UPushConfirmScreenAsyncAction(const UPushConfirmScreenAsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPushConfirmScreenAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPushConfirmScreenAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPushConfirmScreenAsyncAction) \
	NO_API virtual ~UPushConfirmScreenAsyncAction();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_13_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UPushConfirmScreenAsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_AsyncActions_PushConfirmScreenAsyncAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
