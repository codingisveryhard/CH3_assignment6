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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_assignment6();
// End Cross Module References

// Begin Class AWarpActor Function Warp
struct Z_Construct_UFunction_AWarpActor_Warp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Plat| Event" },
		{ "ModuleRelativePath", "Public/WarpActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarpActor_Warp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarpActor, nullptr, "Warp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarpActor_Warp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarpActor_Warp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWarpActor_Warp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarpActor_Warp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarpActor::execWarp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Warp();
	P_NATIVE_END;
}
// End Class AWarpActor Function Warp

// Begin Class AWarpActor
void AWarpActor::StaticRegisterNativesAWarpActor()
{
	UClass* Class = AWarpActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Warp", &AWarpActor::execWarp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Plat| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WarpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Plat| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WarpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Plat| Properties" },
		{ "ModuleRelativePath", "Public/WarpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWarp_MetaData[] = {
		{ "Category", "Plat| Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb4\x88\xea\xb8\xb0 \xec\x9c\x84\xec\xb9\x98\xea\xb0\x92 \xec\xa0\x80\xec\x9e\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/WarpActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x88\xea\xb8\xb0 \xec\x9c\x84\xec\xb9\x98\xea\xb0\x92 \xec\xa0\x80\xec\x9e\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatTime_MetaData[] = {
		{ "Category", "Plat| Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\x9d\xb4\xeb\x8f\x99\xea\xb1\xb0\xeb\xa6\xac \xec\x84\xa4\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/WarpActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\x9d\xb4\xeb\x8f\x99\xea\xb1\xb0\xeb\xa6\xac \xec\x84\xa4\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[] = {
		{ "Category", "Plat| Properties" },
		{ "ModuleRelativePath", "Public/WarpActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxWarp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepeatTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarpActor_Warp, "Warp" }, // 1790059184
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarpActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarpActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarpActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarpActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarpActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWarpActor_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarpActor, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWarpActor_Statics::NewProp_MaxWarp = { "MaxWarp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarpActor, MaxWarp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWarp_MetaData), NewProp_MaxWarp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWarpActor_Statics::NewProp_RepeatTime = { "RepeatTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarpActor, RepeatTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatTime_MetaData), NewProp_RepeatTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWarpActor_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarpActor, DelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayTime_MetaData), NewProp_DelayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarpActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarpActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarpActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarpActor_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarpActor_Statics::NewProp_MaxWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarpActor_Statics::NewProp_RepeatTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarpActor_Statics::NewProp_DelayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarpActor_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AWarpActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarpActor_Statics::PropPointers),
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
		{ Z_Construct_UClass_AWarpActor, AWarpActor::StaticClass, TEXT("AWarpActor"), &Z_Registration_Info_UClass_AWarpActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarpActor), 4262798753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_WarpActor_h_3670671643(TEXT("/Script/CH3_assignment6"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_WarpActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment6_Source_CH3_assignment6_Public_WarpActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
