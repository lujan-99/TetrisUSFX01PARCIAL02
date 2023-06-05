// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Fact_Escenario02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFact_Escenario02() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_Escenario02_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_Escenario02();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_Escenario();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AFact_Escenario02::StaticRegisterNativesAFact_Escenario02()
	{
	}
	UClass* Z_Construct_UClass_AFact_Escenario02_NoRegister()
	{
		return AFact_Escenario02::StaticClass();
	}
	struct Z_Construct_UClass_AFact_Escenario02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFact_Escenario02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFact_Escenario,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFact_Escenario02_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fact_Escenario02.h" },
		{ "ModuleRelativePath", "Fact_Escenario02.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFact_Escenario02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFact_Escenario02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFact_Escenario02_Statics::ClassParams = {
		&AFact_Escenario02::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFact_Escenario02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFact_Escenario02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFact_Escenario02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFact_Escenario02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFact_Escenario02, 2678535074);
	template<> TETRISUSFX01_API UClass* StaticClass<AFact_Escenario02>()
	{
		return AFact_Escenario02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFact_Escenario02(Z_Construct_UClass_AFact_Escenario02, &AFact_Escenario02::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AFact_Escenario02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFact_Escenario02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
