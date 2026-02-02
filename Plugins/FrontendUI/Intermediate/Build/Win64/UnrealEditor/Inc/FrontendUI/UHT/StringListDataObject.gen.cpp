// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Public/Widgets/Options/DataObjects/StringListDataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringListDataObject() {}

// Begin Cross Module References
FRONTENDUI_API UClass* Z_Construct_UClass_UStringBoolListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringBoolListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringEnumListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringEnumListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringIntegerListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringIntegerListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringListDataObject();
FRONTENDUI_API UClass* Z_Construct_UClass_UStringListDataObject_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UValueListDataObject();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// End Cross Module References

// Begin Class UStringListDataObject
void UStringListDataObject::StaticRegisterNativesUStringListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringListDataObject);
UClass* Z_Construct_UClass_UStringListDataObject_NoRegister()
{
	return UStringListDataObject::StaticClass();
}
struct Z_Construct_UClass_UStringListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/StringListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/StringListDataObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UValueListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringListDataObject_Statics::ClassParams = {
	&UStringListDataObject::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringListDataObject()
{
	if (!Z_Registration_Info_UClass_UStringListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringListDataObject.OuterSingleton, Z_Construct_UClass_UStringListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UStringListDataObject>()
{
	return UStringListDataObject::StaticClass();
}
UStringListDataObject::UStringListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringListDataObject);
UStringListDataObject::~UStringListDataObject() {}
// End Class UStringListDataObject

// Begin Class UStringBoolListDataObject
void UStringBoolListDataObject::StaticRegisterNativesUStringBoolListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringBoolListDataObject);
UClass* Z_Construct_UClass_UStringBoolListDataObject_NoRegister()
{
	return UStringBoolListDataObject::StaticClass();
}
struct Z_Construct_UClass_UStringBoolListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/StringListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/StringListDataObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringBoolListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringBoolListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStringListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringBoolListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringBoolListDataObject_Statics::ClassParams = {
	&UStringBoolListDataObject::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringBoolListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringBoolListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringBoolListDataObject()
{
	if (!Z_Registration_Info_UClass_UStringBoolListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringBoolListDataObject.OuterSingleton, Z_Construct_UClass_UStringBoolListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringBoolListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UStringBoolListDataObject>()
{
	return UStringBoolListDataObject::StaticClass();
}
UStringBoolListDataObject::UStringBoolListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringBoolListDataObject);
UStringBoolListDataObject::~UStringBoolListDataObject() {}
// End Class UStringBoolListDataObject

// Begin Class UStringEnumListDataObject
void UStringEnumListDataObject::StaticRegisterNativesUStringEnumListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringEnumListDataObject);
UClass* Z_Construct_UClass_UStringEnumListDataObject_NoRegister()
{
	return UStringEnumListDataObject::StaticClass();
}
struct Z_Construct_UClass_UStringEnumListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/StringListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/StringListDataObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringEnumListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringEnumListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStringListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringEnumListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringEnumListDataObject_Statics::ClassParams = {
	&UStringEnumListDataObject::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringEnumListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringEnumListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringEnumListDataObject()
{
	if (!Z_Registration_Info_UClass_UStringEnumListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringEnumListDataObject.OuterSingleton, Z_Construct_UClass_UStringEnumListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringEnumListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UStringEnumListDataObject>()
{
	return UStringEnumListDataObject::StaticClass();
}
UStringEnumListDataObject::UStringEnumListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringEnumListDataObject);
UStringEnumListDataObject::~UStringEnumListDataObject() {}
// End Class UStringEnumListDataObject

// Begin Class UStringIntegerListDataObject
void UStringIntegerListDataObject::StaticRegisterNativesUStringIntegerListDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringIntegerListDataObject);
UClass* Z_Construct_UClass_UStringIntegerListDataObject_NoRegister()
{
	return UStringIntegerListDataObject::StaticClass();
}
struct Z_Construct_UClass_UStringIntegerListDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/StringListDataObject.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/StringListDataObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringIntegerListDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringIntegerListDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStringListDataObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringIntegerListDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringIntegerListDataObject_Statics::ClassParams = {
	&UStringIntegerListDataObject::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringIntegerListDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringIntegerListDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringIntegerListDataObject()
{
	if (!Z_Registration_Info_UClass_UStringIntegerListDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringIntegerListDataObject.OuterSingleton, Z_Construct_UClass_UStringIntegerListDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringIntegerListDataObject.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UStringIntegerListDataObject>()
{
	return UStringIntegerListDataObject::StaticClass();
}
UStringIntegerListDataObject::UStringIntegerListDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringIntegerListDataObject);
UStringIntegerListDataObject::~UStringIntegerListDataObject() {}
// End Class UStringIntegerListDataObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_StringListDataObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStringListDataObject, UStringListDataObject::StaticClass, TEXT("UStringListDataObject"), &Z_Registration_Info_UClass_UStringListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringListDataObject), 1881703351U) },
		{ Z_Construct_UClass_UStringBoolListDataObject, UStringBoolListDataObject::StaticClass, TEXT("UStringBoolListDataObject"), &Z_Registration_Info_UClass_UStringBoolListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringBoolListDataObject), 2862496998U) },
		{ Z_Construct_UClass_UStringEnumListDataObject, UStringEnumListDataObject::StaticClass, TEXT("UStringEnumListDataObject"), &Z_Registration_Info_UClass_UStringEnumListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringEnumListDataObject), 3429178128U) },
		{ Z_Construct_UClass_UStringIntegerListDataObject, UStringIntegerListDataObject::StaticClass, TEXT("UStringIntegerListDataObject"), &Z_Registration_Info_UClass_UStringIntegerListDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringIntegerListDataObject), 494233104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_StringListDataObject_h_2231407864(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_StringListDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TestFrontendUI_Plugins_FrontendUI_Source_FrontendUI_Public_Widgets_Options_DataObjects_StringListDataObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
