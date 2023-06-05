// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Strat_Actor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrat_Actor() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AStrat_Actor_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AStrat_Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AStrat_Actor::StaticRegisterNativesAStrat_Actor()
	{
	}
	UClass* Z_Construct_UClass_AStrat_Actor_NoRegister()
	{
		return AStrat_Actor::StaticClass();
	}
	struct Z_Construct_UClass_AStrat_Actor_Statics
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrat_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrat_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Strat_Actor.h" },
		{ "ModuleRelativePath", "Strat_Actor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrat_Actor_Statics::NewProp_MeshActor_MetaData[] = {
		{ "Category", "Strat_Actor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Strat_Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrat_Actor_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStrat_Actor, MeshActor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStrat_Actor_Statics::NewProp_MeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStrat_Actor_Statics::NewProp_MeshActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStrat_Actor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrat_Actor_Statics::NewProp_MeshActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrat_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrat_Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrat_Actor_Statics::ClassParams = {
		&AStrat_Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStrat_Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStrat_Actor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrat_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrat_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrat_Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrat_Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrat_Actor, 1984234611);
	template<> TETRISUSFX01_API UClass* StaticClass<AStrat_Actor>()
	{
		return AStrat_Actor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrat_Actor(Z_Construct_UClass_AStrat_Actor, &AStrat_Actor::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AStrat_Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrat_Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
