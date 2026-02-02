// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/FrontendUISubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFrontendCommonButtonBase;
class UPrimaryLayoutWidget;
#ifdef FRONTENDUI_FrontendUISubsystem_generated_h
#error "FrontendUISubsystem.generated.h already included, missing '#pragma once' in FrontendUISubsystem.h"
#endif
#define FRONTENDUI_FrontendUISubsystem_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_15_DELEGATE \
FRONTENDUI_API void FOnButtonDescriptionTextUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnButtonDescriptionTextUpdatedDelegate, UFrontendCommonButtonBase* BroadcastingButton, const FText& DescriptionText);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterCreatedPrimaryLayoutWidget);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendUISubsystem(); \
	friend struct Z_Construct_UClass_UFrontendUISubsystem_Statics; \
public: \
	DECLARE_CLASS(UFrontendUISubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UFrontendUISubsystem)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontendUISubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFrontendUISubsystem(UFrontendUISubsystem&&); \
	UFrontendUISubsystem(const UFrontendUISubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFrontendUISubsystem) \
	NO_API virtual ~UFrontendUISubsystem();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_24_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UFrontendUISubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Subsystems_FrontendUISubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
