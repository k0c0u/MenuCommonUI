// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Interface/LoadingScreenInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FRONTENDUI_API UClass* Z_Construct_UClass_ULoadingScreenInterface();
FRONTENDUI_API UClass* Z_Construct_UClass_ULoadingScreenInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Interface ULoadingScreenInterface Function OnLoadingScreenActivated
void ILoadingScreenInterface::OnLoadingScreenActivated()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLoadingScreenActivated instead.");
}
static FName NAME_ULoadingScreenInterface_OnLoadingScreenActivated = FName(TEXT("OnLoadingScreenActivated"));
void ILoadingScreenInterface::Execute_OnLoadingScreenActivated(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULoadingScreenInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_ULoadingScreenInterface_OnLoadingScreenActivated);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ILoadingScreenInterface*)(O->GetNativeInterfaceAddress(ULoadingScreenInterface::StaticClass())))
	{
		I->OnLoadingScreenActivated_Implementation();
	}
}
struct Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenActivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/LoadingScreenInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenInterface, nullptr, "OnLoadingScreenActivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenActivated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILoadingScreenInterface::execOnLoadingScreenActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadingScreenActivated_Implementation();
	P_NATIVE_END;
}
// End Interface ULoadingScreenInterface Function OnLoadingScreenActivated

// Begin Interface ULoadingScreenInterface Function OnLoadingScreenDeactivated
void ILoadingScreenInterface::OnLoadingScreenDeactivated()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLoadingScreenDeactivated instead.");
}
static FName NAME_ULoadingScreenInterface_OnLoadingScreenDeactivated = FName(TEXT("OnLoadingScreenDeactivated"));
void ILoadingScreenInterface::Execute_OnLoadingScreenDeactivated(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULoadingScreenInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_ULoadingScreenInterface_OnLoadingScreenDeactivated);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ILoadingScreenInterface*)(O->GetNativeInterfaceAddress(ULoadingScreenInterface::StaticClass())))
	{
		I->OnLoadingScreenDeactivated_Implementation();
	}
}
struct Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenDeactivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//virtual void OnLoadingScreenActivated_Implementation();\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/LoadingScreenInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void OnLoadingScreenActivated_Implementation();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenInterface, nullptr, "OnLoadingScreenDeactivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenDeactivated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenDeactivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenDeactivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILoadingScreenInterface::execOnLoadingScreenDeactivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadingScreenDeactivated_Implementation();
	P_NATIVE_END;
}
// End Interface ULoadingScreenInterface Function OnLoadingScreenDeactivated

// Begin Interface ULoadingScreenInterface
void ULoadingScreenInterface::StaticRegisterNativesULoadingScreenInterface()
{
	UClass* Class = ULoadingScreenInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnLoadingScreenActivated", &ILoadingScreenInterface::execOnLoadingScreenActivated },
		{ "OnLoadingScreenDeactivated", &ILoadingScreenInterface::execOnLoadingScreenDeactivated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadingScreenInterface);
UClass* Z_Construct_UClass_ULoadingScreenInterface_NoRegister()
{
	return ULoadingScreenInterface::StaticClass();
}
struct Z_Construct_UClass_ULoadingScreenInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interface/LoadingScreenInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenActivated, "OnLoadingScreenActivated" }, // 4153013653
		{ &Z_Construct_UFunction_ULoadingScreenInterface_OnLoadingScreenDeactivated, "OnLoadingScreenDeactivated" }, // 3452136934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILoadingScreenInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULoadingScreenInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenInterface_Statics::ClassParams = {
	&ULoadingScreenInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingScreenInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadingScreenInterface()
{
	if (!Z_Registration_Info_UClass_ULoadingScreenInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingScreenInterface.OuterSingleton, Z_Construct_UClass_ULoadingScreenInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadingScreenInterface.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<ULoadingScreenInterface>()
{
	return ULoadingScreenInterface::StaticClass();
}
ULoadingScreenInterface::ULoadingScreenInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenInterface);
ULoadingScreenInterface::~ULoadingScreenInterface() {}
// End Interface ULoadingScreenInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingScreenInterface, ULoadingScreenInterface::StaticClass, TEXT("ULoadingScreenInterface"), &Z_Registration_Info_UClass_ULoadingScreenInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingScreenInterface), 494337533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_2078601806(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Interface_LoadingScreenInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
