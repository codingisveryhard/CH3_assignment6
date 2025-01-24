// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlashActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH3_ASSIGNMENT6_FlashActor_generated_h
#error "FlashActor.generated.h already included, missing '#pragma once' in FlashActor.h"
#endif
#define CH3_ASSIGNMENT6_FlashActor_generated_h

#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleVisibility);


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlashActor(); \
	friend struct Z_Construct_UClass_AFlashActor_Statics; \
public: \
	DECLARE_CLASS(AFlashActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_assignment6"), NO_API) \
	DECLARE_SERIALIZER(AFlashActor)


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFlashActor(AFlashActor&&); \
	AFlashActor(const AFlashActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlashActor) \
	NO_API virtual ~AFlashActor();


#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_9_PROLOG
#define FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_ASSIGNMENT6_API UClass* StaticClass<class AFlashActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
