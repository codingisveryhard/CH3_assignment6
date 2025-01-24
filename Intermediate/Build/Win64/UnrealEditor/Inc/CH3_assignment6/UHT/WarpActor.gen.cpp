// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment6/Public/WarpActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarpActor() {}

// Begin Cross Module References
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_AWarpActor();
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_AWarpActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CH3_assignment6();
// End Cross Module References

// Begin Class AWarpActor
void AWarpActor::StaticRegisterNativesAWarpActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarpActor);
UClass* Z_Construct_UClass_AWarpActor_NoRegister()
{
	return AWarpActor::StaticClass();
}
struct Z_Construct_UClass_AWarpActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WarpActor.h" },
		{ "ModuleRelativePath", "Public/WarpActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarpActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarpActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarpActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarpActor_Statics::ClassParams = {
	&AWarpActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarpActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarpActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarpActor()
{
	if (!Z_Registration_Info_UClass_AWarpActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarpActor.OuterSingleton, Z_Construct_UClass_AWarpActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarpActor.OuterSingleton;
}
template<> CH3_ASSIGNMENT6_API UClass* StaticClass<AWarpActor>()
{
	return AWarpActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarpActor);
AWarpActor::~AWarpActor() {}
// End Class AWarpActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_WarpActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarpActor, AWarpActor::StaticClass, TEXT("AWarpActor"), &Z_Registration_Info_UClass_AWarpActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarpActor), 64274175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_WarpActor_h_2248013768(TEXT("/Script/CH3_assignment6"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_WarpActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_WarpActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
