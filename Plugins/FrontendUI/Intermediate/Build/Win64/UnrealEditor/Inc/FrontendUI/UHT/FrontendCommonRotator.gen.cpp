// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Rotator/FrontendCommonRotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendCommonRotator() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonRotator();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonRotator();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonRotator_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UFrontendCommonRotator
void UFrontendCommonRotator::StaticRegisterNativesUFrontendCommonRotator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontendCommonRotator);
UClass* Z_Construct_UClass_UFrontendCommonRotator_NoRegister()
{
	return UFrontendCommonRotator::StaticClass();
}
struct Z_Construct_UClass_UFrontendCommonRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Rotator/FrontendCommonRotator.h" },
		{ "ModuleRelativePath", "Public/Widgets/Rotator/FrontendCommonRotator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendCommonRotator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFrontendCommonRotator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonRotator,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonRotator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendCommonRotator_Statics::ClassParams = {
	&UFrontendCommonRotator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonRotator_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendCommonRotator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendCommonRotator()
{
	if (!Z_Registration_Info_UClass_UFrontendCommonRotator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendCommonRotator.OuterSingleton, Z_Construct_UClass_UFrontendCommonRotator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendCommonRotator.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UFrontendCommonRotator>()
{
	return UFrontendCommonRotator::StaticClass();
}
UFrontendCommonRotator::UFrontendCommonRotator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendCommonRotator);
UFrontendCommonRotator::~UFrontendCommonRotator() {}
// End Class UFrontendCommonRotator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Rotator_FrontendCommonRotator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendCommonRotator, UFrontendCommonRotator::StaticClass, TEXT("UFrontendCommonRotator"), &Z_Registration_Info_UClass_UFrontendCommonRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendCommonRotator), 3401327342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Rotator_FrontendCommonRotator_h_3644636031(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Rotator_FrontendCommonRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Rotator_FrontendCommonRotator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
