// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Strat_Estrategia01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrat_Estrategia01() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AStrat_Estrategia01_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AStrat_Estrategia01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UStrat_Estrategia_NoRegister();
// End Cross Module References
	void AStrat_Estrategia01::StaticRegisterNativesAStrat_Estrategia01()
	{
	}
	UClass* Z_Construct_UClass_AStrat_Estrategia01_NoRegister()
	{
		return AStrat_Estrategia01::StaticClass();
	}
	struct Z_Construct_UClass_AStrat_Estrategia01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrat_Estrategia01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrat_Estrategia01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Strat_Estrategia01.h" },
		{ "ModuleRelativePath", "Strat_Estrategia01.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrat_Estrategia01_Statics::NewProp_MeshActor_MetaData[] = {
		{ "Category", "Strat_Estrategia01" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Strat_Estrategia01.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrat_Estrategia01_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStrat_Estrategia01, MeshActor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStrat_Estrategia01_Statics::NewProp_MeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStrat_Estrategia01_Statics::NewProp_MeshActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStrat_Estrategia01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrat_Estrategia01_Statics::NewProp_MeshActor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrat_Estrategia01_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStrat_Estrategia_NoRegister, (int32)VTABLE_OFFSET(AStrat_Estrategia01, IStrat_Estrategia), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrat_Estrategia01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrat_Estrategia01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrat_Estrategia01_Statics::ClassParams = {
		&AStrat_Estrategia01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStrat_Estrategia01_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStrat_Estrategia01_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrat_Estrategia01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrat_Estrategia01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrat_Estrategia01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrat_Estrategia01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrat_Estrategia01, 980753828);
	template<> TETRISUSFX01_API UClass* StaticClass<AStrat_Estrategia01>()
	{
		return AStrat_Estrategia01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrat_Estrategia01(Z_Construct_UClass_AStrat_Estrategia01, &AStrat_Estrategia01::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AStrat_Estrategia01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrat_Estrategia01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
