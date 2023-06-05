// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Fact_Escenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFact_Escenario() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_Escenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFact_Escenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFact_Escenario::StaticRegisterNativesAFact_Escenario()
	{
	}
	UClass* Z_Construct_UClass_AFact_Escenario_NoRegister()
	{
		return AFact_Escenario::StaticClass();
	}
	struct Z_Construct_UClass_AFact_Escenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscenarioMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscenarioMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFact_Escenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFact_Escenario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fact_Escenario.h" },
		{ "ModuleRelativePath", "Fact_Escenario.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFact_Escenario_Statics::NewProp_EscenarioMesh_MetaData[] = {
		{ "Category", "Fact_Escenario" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fact_Escenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFact_Escenario_Statics::NewProp_EscenarioMesh = { "EscenarioMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFact_Escenario, EscenarioMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFact_Escenario_Statics::NewProp_EscenarioMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFact_Escenario_Statics::NewProp_EscenarioMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFact_Escenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFact_Escenario_Statics::NewProp_EscenarioMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFact_Escenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFact_Escenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFact_Escenario_Statics::ClassParams = {
		&AFact_Escenario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFact_Escenario_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFact_Escenario_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFact_Escenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFact_Escenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFact_Escenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFact_Escenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFact_Escenario, 941131622);
	template<> TETRISUSFX01_API UClass* StaticClass<AFact_Escenario>()
	{
		return AFact_Escenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFact_Escenario(Z_Construct_UClass_AFact_Escenario, &AFact_Escenario::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AFact_Escenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFact_Escenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
