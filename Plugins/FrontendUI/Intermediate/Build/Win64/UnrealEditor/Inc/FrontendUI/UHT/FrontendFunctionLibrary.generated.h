// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrontendFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseActivatableWidget;
class UTexture2D;
struct FGameplayTag;
#ifdef FRONTENDUI_FrontendFunctionLibrary_generated_h
#error "FrontendFunctionLibrary.generated.h already included, missing '#pragma once' in FrontendFunctionLibrary.h"
#endif
#define FRONTENDUI_FrontendFunctionLibrary_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOptionsSoftImageByTag); \
	DECLARE_FUNCTION(execGetFrontendSoftWidgetClassByTag);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFrontendFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFrontendFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FrontendUI"), NO_API) \
	DECLARE_SERIALIZER(UFrontendFunctionLibrary)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontendFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFrontendFunctionLibrary(UFrontendFunctionLibrary&&); \
	UFrontendFunctionLibrary(const UFrontendFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrontendFunctionLibrary) \
	NO_API virtual ~UFrontendFunctionLibrary();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h_13_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UFrontendFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_FrontendFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
