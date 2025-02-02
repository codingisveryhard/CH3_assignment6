// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpawnActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH3_ASSIGNMENT6_SpawnActor_generated_h
#error "SpawnActor.generated.h already included, missing '#pragma once' in SpawnActor.h"
#endif
#define CH3_ASSIGNMENT6_SpawnActor_generated_h

#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnRandomActor);


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnActor(); \
	friend struct Z_Construct_UClass_ASpawnActor_Statics; \
public: \
	DECLARE_CLASS(ASpawnActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_assignment6"), NO_API) \
	DECLARE_SERIALIZER(ASpawnActor)


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawnActor(ASpawnActor&&); \
	ASpawnActor(const ASpawnActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnActor) \
	NO_API virtual ~ASpawnActor();


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_12_PROLOG
#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_ASSIGNMENT6_API UClass* StaticClass<class ASpawnActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_SpawnActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
