// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH3_ASSIGNMENT6_MoveActor_generated_h
#error "MoveActor.generated.h already included, missing '#pragma once' in MoveActor.h"
#endif
#define CH3_ASSIGNMENT6_MoveActor_generated_h

#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReverse);


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoveActor(); \
	friend struct Z_Construct_UClass_AMoveActor_Statics; \
public: \
	DECLARE_CLASS(AMoveActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_assignment6"), NO_API) \
	DECLARE_SERIALIZER(AMoveActor)


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMoveActor(AMoveActor&&); \
	AMoveActor(const AMoveActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoveActor) \
	NO_API virtual ~AMoveActor();


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h_9_PROLOG
#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_ASSIGNMENT6_API UClass* StaticClass<class AMoveActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_MoveActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
