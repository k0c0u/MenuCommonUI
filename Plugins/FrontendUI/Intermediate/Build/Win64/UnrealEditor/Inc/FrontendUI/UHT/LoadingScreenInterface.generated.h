// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/LoadingScreenInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRONTENDUI_LoadingScreenInterface_generated_h
#error "LoadingScreenInterface.generated.h already included, missing '#pragma once' in LoadingScreenInterface.h"
#endif
#define FRONTENDUI_LoadingScreenInterface_generated_h

#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnLoadingScreenDeactivated_Implementation() {}; \
	virtual void OnLoadingScreenActivated_Implementation() {}; \
	DECLARE_FUNCTION(execOnLoadingScreenDeactivated); \
	DECLARE_FUNCTION(execOnLoadingScreenActivated);


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FRONTENDUI_API ULoadingScreenInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoadingScreenInterface(ULoadingScreenInterface&&); \
	ULoadingScreenInterface(const ULoadingScreenInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FRONTENDUI_API, ULoadingScreenInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadingScreenInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadingScreenInterface) \
	FRONTENDUI_API virtual ~ULoadingScreenInterface();


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULoadingScreenInterface(); \
	friend struct Z_Construct_UClass_ULoadingScreenInterface_Statics; \
public: \
	DECLARE_CLASS(ULoadingScreenInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FrontendUI"), FRONTENDUI_API) \
	DECLARE_SERIALIZER(ULoadingScreenInterface)


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILoadingScreenInterface() {} \
public: \
	typedef ULoadingScreenInterface UClassType; \
	typedef ILoadingScreenInterface ThisClass; \
	static void Execute_OnLoadingScreenActivated(UObject* O); \
	static void Execute_OnLoadingScreenDeactivated(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_10_PROLOG
#define FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class ULoadingScreenInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
