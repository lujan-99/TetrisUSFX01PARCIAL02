// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Fact_Escenario01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFact_Escenario01() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_Escenario01_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_Escenario01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_Escenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AFact_Escenario01::StaticRegisterNativesAFact_Escenario01()
	{
	}
	UClass* Z_Construct_UClass_AFact_Escenario01_NoRegister()
	{
		return AFact_Escenario01::StaticClass();
	}
	struct Z_Construct_UClass_AFact_Escenario01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFact_Escenario01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFact_Escenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFact_Escenario01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fact_Escenario01.h" },
		{ "ModuleRelativePath", "Fact_Escenario01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFact_Escenario01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFact_Escenario01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFact_Escenario01_Statics::ClassParams = {
		&AFact_Escenario01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFact_Escenario01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFact_Escenario01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFact_Escenario01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFact_Escenario01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFact_Escenario01, 769455820);
	template<> TETRISUSFX01_API UClass* StaticClass<AFact_Escenario01>()
	{
		return AFact_Escenario01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFact_Escenario01(Z_Construct_UClass_AFact_Escenario01, &AFact_Escenario01::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AFact_Escenario01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFact_Escenario01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
