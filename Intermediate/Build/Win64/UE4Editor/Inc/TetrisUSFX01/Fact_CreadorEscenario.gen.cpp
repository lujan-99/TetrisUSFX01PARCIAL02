// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Fact_CreadorEscenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFact_CreadorEscenario() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_CreadorEscenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_CreadorEscenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AFact_CreadorEscenario::StaticRegisterNativesAFact_CreadorEscenario()
	{
	}
	UClass* Z_Construct_UClass_AFact_CreadorEscenario_NoRegister()
	{
		return AFact_CreadorEscenario::StaticClass();
	}
	struct Z_Construct_UClass_AFact_CreadorEscenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFact_CreadorEscenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFact_CreadorEscenario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fact_CreadorEscenario.h" },
		{ "ModuleRelativePath", "Fact_CreadorEscenario.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFact_CreadorEscenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFact_CreadorEscenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFact_CreadorEscenario_Statics::ClassParams = {
		&AFact_CreadorEscenario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFact_CreadorEscenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFact_CreadorEscenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFact_CreadorEscenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFact_CreadorEscenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFact_CreadorEscenario, 2751788349);
	template<> TETRISUSFX01_API UClass* StaticClass<AFact_CreadorEscenario>()
	{
		return AFact_CreadorEscenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFact_CreadorEscenario(Z_Construct_UClass_AFact_CreadorEscenario, &AFact_CreadorEscenario::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AFact_CreadorEscenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFact_CreadorEscenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
