// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment6/Public/SpawnRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnRow() {}

// Begin Cross Module References
CH3_ASSIGNMENT6_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnRow();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CH3_assignment6();
// End Cross Module References

// Begin ScriptStruct FSpawnRow
static_assert(std::is_polymorphic<FSpawnRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSpawnRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnRow;
class UScriptStruct* FSpawnRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnRow, (UObject*)Z_Construct_UPackage__Script_CH3_assignment6(), TEXT("SpawnRow"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnRow.OuterSingleton;
}
template<> CH3_ASSIGNMENT6_API UScriptStruct* StaticStruct<FSpawnRow>()
{
	return FSpawnRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "Category", "SpawnRow" },
		{ "ModuleRelativePath", "Public/SpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "SpawnRow" },
		{ "ModuleRelativePath", "Public/SpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "SpawnRow" },
		{ "ModuleRelativePath", "Public/SpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveSpeed_MetaData[] = {
		{ "Category", "MoveActor" },
		{ "ModuleRelativePath", "Public/SpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMoveSpeed_MetaData[] = {
		{ "Category", "MoveActor" },
		{ "ModuleRelativePath", "Public/SpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "MoveActor" },
		{ "ModuleRelativePath", "Public/SpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "Category", "MoveActor" },
		{ "ModuleRelativePath", "Public/SpawnRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRow, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRow, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRow, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_MaxMoveSpeed = { "MaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRow, MaxMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveSpeed_MetaData), NewProp_MaxMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_MinMoveSpeed = { "MinMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRow, MinMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMoveSpeed_MetaData), NewProp_MinMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRow, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRow, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_ActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_SpawnChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_MaxMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_MinMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRow_Statics::NewProp_MinDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_assignment6,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SpawnRow",
	Z_Construct_UScriptStruct_FSpawnRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnRow_Statics::PropPointers),
	sizeof(FSpawnRow),
	alignof(FSpawnRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnRow()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnRow.InnerSingleton, Z_Construct_UScriptStruct_FSpawnRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnRow.InnerSingleton;
}
// End ScriptStruct FSpawnRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnRow::StaticStruct, Z_Construct_UScriptStruct_FSpawnRow_Statics::NewStructOps, TEXT("SpawnRow"), &Z_Registration_Info_UScriptStruct_SpawnRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnRow), 2616455364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnRow_h_2701170543(TEXT("/Script/CH3_assignment6"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
