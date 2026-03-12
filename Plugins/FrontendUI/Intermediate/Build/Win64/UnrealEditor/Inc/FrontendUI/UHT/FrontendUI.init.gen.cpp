// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendUI_init() {}
	FRONTENDUI_API UFunction* Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature();
	FRONTENDUI_API UFunction* Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature();
	FRONTENDUI_API UFunction* Z_Construct_UDelegateFunction_FrontendUI_OnPushSoftWidgetDelegate__DelegateSignature();
	FRONTENDUI_API UFunction* Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FrontendUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FrontendUI()
	{
		if (!Z_Registration_Info_UPackage__Script_FrontendUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FrontendUI_OnButtonDescriptionTextUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FrontendUI_OnConfirmScreenButtonClickedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FrontendUI_OnPushSoftWidgetDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FrontendUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x40552719,
				0x77F8CC32,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FrontendUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FrontendUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FrontendUI(Z_Construct_UPackage__Script_FrontendUI, TEXT("/Script/FrontendUI"), Z_Registration_Info_UPackage__Script_FrontendUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x40552719, 0x77F8CC32));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
