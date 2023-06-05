// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Facade_Circulo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacade_Circulo() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFacade_Circulo_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AFacade_Circulo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFacade_Circulo::StaticRegisterNativesAFacade_Circulo()
	{
	}
	UClass* Z_Construct_UClass_AFacade_Circulo_NoRegister()
	{
		return AFacade_Circulo::StaticClass();
	}
	struct Z_Construct_UClass_AFacade_Circulo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacade_Circulo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacade_Circulo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Facade_Circulo.h" },
		{ "ModuleRelativePath", "Facade_Circulo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacade_Circulo_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "Category", "Facade_Circulo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Facade_Circulo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFacade_Circulo_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFacade_Circulo, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFacade_Circulo_Statics::NewProp_BlockMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Circulo_Statics::NewProp_BlockMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFacade_Circulo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFacade_Circulo_Statics::NewProp_BlockMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacade_Circulo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacade_Circulo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacade_Circulo_Statics::ClassParams = {
		&AFacade_Circulo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFacade_Circulo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Circulo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacade_Circulo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Circulo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacade_Circulo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacade_Circulo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacade_Circulo, 1744978739);
	template<> TETRISUSFX01_API UClass* StaticClass<AFacade_Circulo>()
	{
		return AFacade_Circulo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacade_Circulo(Z_Construct_UClass_AFacade_Circulo, &AFacade_Circulo::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AFacade_Circulo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacade_Circulo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
