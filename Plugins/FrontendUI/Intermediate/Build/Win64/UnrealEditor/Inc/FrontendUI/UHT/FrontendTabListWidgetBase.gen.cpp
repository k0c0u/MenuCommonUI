// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Lists/FrontendTabListWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendTabListWidgetBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidgetBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendTabListWidgetBase();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendTabListWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UFrontendTabListWidgetBase
void UFrontendTabListWidgetBase::StaticRegisterNativesUFrontendTabListWidgetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontendTabListWidgetBase);
UClass* Z_Construct_UClass_UFrontendTabListWidgetBase_NoRegister()
{
	return UFrontendTabListWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UFrontendTabListWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Lists/FrontendTabListWidgetBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Lists/FrontendTabListWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTabCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FrontendTabList" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Widgets/Lists/FrontendTabListWidgetBase.h" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabButtonWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FrontendTabList" },
		{ "ModuleRelativePath", "Public/Widgets/Lists/FrontendTabListWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugTabCount;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TabButtonWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendTabListWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::NewProp_DebugTabCount = { "DebugTabCount", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendTabListWidgetBase, DebugTabCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTabCount_MetaData), NewProp_DebugTabCount_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::NewProp_TabButtonWidgetClass = { "TabButtonWidgetClass", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendTabListWidgetBase, TabButtonWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabButtonWidgetClass_MetaData), NewProp_TabButtonWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::NewProp_DebugTabCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::NewProp_TabButtonWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonTabListWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::ClassParams = {
	&UFrontendTabListWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendTabListWidgetBase()
{
	if (!Z_Registration_Info_UClass_UFrontendTabListWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendTabListWidgetBase.OuterSingleton, Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendTabListWidgetBase.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UFrontendTabListWidgetBase>()
{
	return UFrontendTabListWidgetBase::StaticClass();
}
UFrontendTabListWidgetBase::UFrontendTabListWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendTabListWidgetBase);
UFrontendTabListWidgetBase::~UFrontendTabListWidgetBase() {}
// End Class UFrontendTabListWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Lists_FrontendTabListWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendTabListWidgetBase, UFrontendTabListWidgetBase::StaticClass, TEXT("UFrontendTabListWidgetBase"), &Z_Registration_Info_UClass_UFrontendTabListWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendTabListWidgetBase), 3197916475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Lists_FrontendTabListWidgetBase_h_1679882477(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Lists_FrontendTabListWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Lists_FrontendTabListWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
