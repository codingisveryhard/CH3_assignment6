// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment6/Public/FlashActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashActor() {}

// Begin Cross Module References
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_AFlashActor();
CH3_ASSIGNMENT6_API UClass* Z_Construct_UClass_AFlashActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_assignment6();
// End Cross Module References

// Begin Class AFlashActor Function ToggleVisibility
struct Z_Construct_UFunction_AFlashActor_ToggleVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Plat| Event" },
		{ "ModuleRelativePath", "Public/FlashActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashActor_ToggleVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashActor, nullptr, "ToggleVisibility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashActor_ToggleVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlashActor_ToggleVisibility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlashActor_ToggleVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlashActor_ToggleVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlashActor::execToggleVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleVisibility();
	P_NATIVE_END;
}
// End Class AFlashActor Function ToggleVisibility

// Begin Class AFlashActor
void AFlashActor::StaticRegisterNativesAFlashActor()
{
	UClass* Class = AFlashActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleVisibility", &AFlashActor::execToggleVisibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlashActor);
UClass* Z_Construct_UClass_AFlashActor_NoRegister()
{
	return AFlashActor::StaticClass();
}
struct Z_Construct_UClass_AFlashActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FlashActor.h" },
		{ "ModuleRelativePath", "Public/FlashActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Plat| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Plat| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsVisible_MetaData[] = {
		{ "Category", "Plat| Properties" },
		{ "ModuleRelativePath", "Public/FlashActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatTime_MetaData[] = {
		{ "Category", "Plat| Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb0\x80\xec\x8b\x9c \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8\xed\x95\x98\xeb\x8a\x94 \xeb\xb3\x80\xec\x88\x98 (\xec\xb6\xa9\xeb\x8f\x8c\xec\x97\x90\xec\x84\x9c\xeb\x8f\x84 \xec\x82\xac\xec\x9a\xa9)\n" },
#endif
		{ "ModuleRelativePath", "Public/FlashActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb0\x80\xec\x8b\x9c \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8\xed\x95\x98\xeb\x8a\x94 \xeb\xb3\x80\xec\x88\x98 (\xec\xb6\xa9\xeb\x8f\x8c\xec\x97\x90\xec\x84\x9c\xeb\x8f\x84 \xec\x82\xac\xec\x9a\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[] = {
		{ "Category", "Plat| Properties" },
		{ "ModuleRelativePath", "Public/FlashActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepeatTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlashActor_ToggleVisibility, "ToggleVisibility" }, // 501520311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlashActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlashActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
void Z_Construct_UClass_AFlashActor_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((AFlashActor*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlashActor_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlashActor), &Z_Construct_UClass_AFlashActor_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsVisible_MetaData), NewProp_IsVisible_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashActor_Statics::NewProp_RepeatTime = { "RepeatTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlashActor, RepeatTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatTime_MetaData), NewProp_RepeatTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashActor_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlashActor, DelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayTime_MetaData), NewProp_DelayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashActor_Statics::NewProp_IsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashActor_Statics::NewProp_RepeatTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashActor_Statics::NewProp_DelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlashActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlashActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlashActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlashActor_Statics::ClassParams = {
	&AFlashActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlashActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlashActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlashActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlashActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlashActor()
{
	if (!Z_Registration_Info_UClass_AFlashActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlashActor.OuterSingleton, Z_Construct_UClass_AFlashActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlashActor.OuterSingleton;
}
template<> CH3_ASSIGNMENT6_API UClass* StaticClass<AFlashActor>()
{
	return AFlashActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashActor);
AFlashActor::~AFlashActor() {}
// End Class AFlashActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlashActor, AFlashActor::StaticClass, TEXT("AFlashActor"), &Z_Registration_Info_UClass_AFlashActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlashActor), 2864294614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_2378490976(TEXT("/Script/CH3_assignment6"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_FlashActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
