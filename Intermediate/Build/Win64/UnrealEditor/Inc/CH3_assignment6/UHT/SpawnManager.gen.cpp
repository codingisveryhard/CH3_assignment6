// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment6/Public/SpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManager() {}

// Begin Cross Module References
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_AMoveActor_NoRegister();
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_ARotateActor_NoRegister();
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpawnManager();
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpawnManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_assignment6();
// End Cross Module References

// Begin Class ASpawnManager Function RandomSpawn
struct Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics
{
	struct SpawnManager_eventRandomSpawn_Parms
	{
		TSubclassOf<AActor> ActorClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn| Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\xa1\xed\x84\xb0\xec\x9d\x98 \xec\x83\x9d\xec\x84\xb1 \xeb\xb2\x94\xec\x9c\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\xa1\xed\x84\xb0\xec\x9d\x98 \xec\x83\x9d\xec\x84\xb1 \xeb\xb2\x94\xec\x9c\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnManager_eventRandomSpawn_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnManager, nullptr, "RandomSpawn", nullptr, nullptr, Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::SpawnManager_eventRandomSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::SpawnManager_eventRandomSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnManager_RandomSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnManager_RandomSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnManager::execRandomSpawn)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RandomSpawn(Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class ASpawnManager Function RandomSpawn

// Begin Class ASpawnManager
void ASpawnManager::StaticRegisterNativesASpawnManager()
{
	UClass* Class = ASpawnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RandomSpawn", &ASpawnManager::execRandomSpawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnManager);
UClass* Z_Construct_UClass_ASpawnManager_NoRegister()
{
	return ASpawnManager::StaticClass();
}
struct Z_Construct_UClass_ASpawnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnManager.h" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActor_MetaData[] = {
		{ "Category", "Spawn| Actors" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateActor_MetaData[] = {
		{ "Category", "Spawn| Actors" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateNumber_MetaData[] = {
		{ "Category", "Spawn| Properties" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRange_MetaData[] = {
		{ "Category", "Spawn| Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\xa1\xed\x84\xb0\xea\xb0\x80 \xec\x83\x9d\xec\x84\xb1\xeb\x90\xa0 \xec\x88\xab\xec\x9e\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\xa1\xed\x84\xb0\xea\xb0\x80 \xec\x83\x9d\xec\x84\xb1\xeb\x90\xa0 \xec\x88\xab\xec\x9e\x90" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MoveActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RotateActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreateNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnManager_RandomSpawn, "RandomSpawn" }, // 1845648817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_MoveActor = { "MoveActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, MoveActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AMoveActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActor_MetaData), NewProp_MoveActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_RotateActor = { "RotateActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, RotateActor), Z_Construct_UClass_UClass, Z_Construct_UClass_ARotateActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateActor_MetaData), NewProp_RotateActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_CreateNumber = { "CreateNumber", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, CreateNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateNumber_MetaData), NewProp_CreateNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnRange = { "SpawnRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, SpawnRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRange_MetaData), NewProp_SpawnRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_MoveActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_RotateActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_CreateNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnManager_Statics::ClassParams = {
	&ASpawnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnManager()
{
	if (!Z_Registration_Info_UClass_ASpawnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnManager.OuterSingleton, Z_Construct_UClass_ASpawnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnManager.OuterSingleton;
}
template<> CH3_ASSIGNMENT6_API UClass* StaticClass<ASpawnManager>()
{
	return ASpawnManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnManager);
ASpawnManager::~ASpawnManager() {}
// End Class ASpawnManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnManager, ASpawnManager::StaticClass, TEXT("ASpawnManager"), &Z_Registration_Info_UClass_ASpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnManager), 2568789745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnManager_h_327154261(TEXT("/Script/CH3_assignment6"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
