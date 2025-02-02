// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment6/Public/SpawnActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnActor() {}

// Begin Cross Module References
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpawnActor();
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpawnActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_assignment6();
// End Cross Module References

// Begin Class ASpawnActor Function SpawnRandomActor
struct Z_Construct_UFunction_ASpawnActor_SpawnRandomActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/SpawnActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnActor_SpawnRandomActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnActor, nullptr, "SpawnRandomActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnActor_SpawnRandomActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnActor_SpawnRandomActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpawnActor_SpawnRandomActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnActor_SpawnRandomActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnActor::execSpawnRandomActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnRandomActor();
	P_NATIVE_END;
}
// End Class ASpawnActor Function SpawnRandomActor

// Begin Class ASpawnActor
void ASpawnActor::StaticRegisterNativesASpawnActor()
{
	UClass* Class = ASpawnActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnRandomActor", &ASpawnActor::execSpawnRandomActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnActor);
UClass* Z_Construct_UClass_ASpawnActor_NoRegister()
{
	return ASpawnActor::StaticClass();
}
struct Z_Construct_UClass_ASpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnActor.h" },
		{ "ModuleRelativePath", "Public/SpawnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpawnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningCylinder_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpawnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorDataTable_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9b\x90\xed\x86\xb5\xed\x98\x95 \xeb\xaa\xa8\xec\x96\x91\xec\x9c\xbc\xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xeb\xb3\xb4\xea\xb3\xa0\xec\x9e\x90 \xed\x95\x9c\xeb\x8b\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x90\xed\x86\xb5\xed\x98\x95 \xeb\xaa\xa8\xec\x96\x91\xec\x9c\xbc\xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xeb\xb3\xb4\xea\xb3\xa0\xec\x9e\x90 \xed\x95\x9c\xeb\x8b\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawningCylinder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnActor_SpawnRandomActor, "SpawnRandomActor" }, // 3411155136
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnActor_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnActor, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnActor_Statics::NewProp_SpawningCylinder = { "SpawningCylinder", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnActor, SpawningCylinder), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningCylinder_MetaData), NewProp_SpawningCylinder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnActor_Statics::NewProp_ActorDataTable = { "ActorDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnActor, ActorDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorDataTable_MetaData), NewProp_ActorDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnActor_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnActor_Statics::NewProp_SpawningCylinder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnActor_Statics::NewProp_ActorDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnActor_Statics::ClassParams = {
	&ASpawnActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnActor()
{
	if (!Z_Registration_Info_UClass_ASpawnActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnActor.OuterSingleton, Z_Construct_UClass_ASpawnActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnActor.OuterSingleton;
}
template<> CH3_ASSIGNMENT6_API UClass* StaticClass<ASpawnActor>()
{
	return ASpawnActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnActor);
ASpawnActor::~ASpawnActor() {}
// End Class ASpawnActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnActor, ASpawnActor::StaticClass, TEXT("ASpawnActor"), &Z_Registration_Info_UClass_ASpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnActor), 2534975830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_2455673279(TEXT("/Script/CH3_assignment6"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
