// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Strat_Estrategia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrat_Estrategia() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UStrat_Estrategia_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UStrat_Estrategia();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UStrat_Estrategia::StaticRegisterNativesUStrat_Estrategia()
	{
	}
	UClass* Z_Construct_UClass_UStrat_Estrategia_NoRegister()
	{
		return UStrat_Estrategia::StaticClass();
	}
	struct Z_Construct_UClass_UStrat_Estrategia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrat_Estrategia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrat_Estrategia_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Strat_Estrategia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrat_Estrategia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStrat_Estrategia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrat_Estrategia_Statics::ClassParams = {
		&UStrat_Estrategia::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStrat_Estrategia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrat_Estrategia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrat_Estrategia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrat_Estrategia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrat_Estrategia, 1905278081);
	template<> TETRISUSFX01_API UClass* StaticClass<UStrat_Estrategia>()
	{
		return UStrat_Estrategia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrat_Estrategia(Z_Construct_UClass_UStrat_Estrategia, &UStrat_Estrategia::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UStrat_Estrategia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrat_Estrategia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
