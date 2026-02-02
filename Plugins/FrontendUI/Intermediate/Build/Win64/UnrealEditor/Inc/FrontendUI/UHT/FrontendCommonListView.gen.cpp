// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Lists/FrontendCommonListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendCommonListView() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonListView();
FRONTENDUI_API UClass* Z_Construct_UClass_UDataListEntryMapping_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonListView();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendCommonListView_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UFrontendCommonListView
void UFrontendCommonListView::StaticRegisterNativesUFrontendCommonListView()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontendCommonListView);
UClass* Z_Construct_UClass_UFrontendCommonListView_NoRegister()
{
	return UFrontendCommonListView::StaticClass();
}
struct Z_Construct_UClass_UFrontendCommonListView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Lists/FrontendCommonListView.h" },
		{ "ModuleRelativePath", "Public/Widgets/Lists/FrontendCommonListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataListEntryMapping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Widgets/Lists/FrontendCommonListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataListEntryMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendCommonListView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendCommonListView_Statics::NewProp_DataListEntryMapping = { "DataListEntryMapping", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonListView, DataListEntryMapping), Z_Construct_UClass_UDataListEntryMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataListEntryMapping_MetaData), NewProp_DataListEntryMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendCommonListView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonListView_Statics::NewProp_DataListEntryMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonListView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendCommonListView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonListView,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonListView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendCommonListView_Statics::ClassParams = {
	&UFrontendCommonListView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFrontendCommonListView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonListView_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonListView_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendCommonListView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendCommonListView()
{
	if (!Z_Registration_Info_UClass_UFrontendCommonListView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendCommonListView.OuterSingleton, Z_Construct_UClass_UFrontendCommonListView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendCommonListView.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UFrontendCommonListView>()
{
	return UFrontendCommonListView::StaticClass();
}
UFrontendCommonListView::UFrontendCommonListView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendCommonListView);
UFrontendCommonListView::~UFrontendCommonListView() {}
// End Class UFrontendCommonListView

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Lists_FrontendCommonListView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendCommonListView, UFrontendCommonListView::StaticClass, TEXT("UFrontendCommonListView"), &Z_Registration_Info_UClass_UFrontendCommonListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendCommonListView), 2504925342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Lists_FrontendCommonListView_h_757086369(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Lists_FrontendCommonListView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Lists_FrontendCommonListView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
