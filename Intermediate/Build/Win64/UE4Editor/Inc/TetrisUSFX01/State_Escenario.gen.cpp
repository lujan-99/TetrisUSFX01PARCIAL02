// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/State_Escenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeState_Escenario() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AState_Escenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AState_Escenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AState_Escenario::StaticRegisterNativesAState_Escenario()
	{
	}
	UClass* Z_Construct_UClass_AState_Escenario_NoRegister()
	{
		return AState_Escenario::StaticClass();
	}
	struct Z_Construct_UClass_AState_Escenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshEscenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshEscenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AState_Escenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AState_Escenario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State_Escenario.h" },
		{ "ModuleRelativePath", "State_Escenario.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AState_Escenario_Statics::NewProp_MeshEscenario_MetaData[] = {
		{ "Category", "State_Escenario" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "State_Escenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AState_Escenario_Statics::NewProp_MeshEscenario = { "MeshEscenario", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AState_Escenario, MeshEscenario), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AState_Escenario_Statics::NewProp_MeshEscenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AState_Escenario_Statics::NewProp_MeshEscenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AState_Escenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AState_Escenario_Statics::NewProp_MeshEscenario,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AState_Escenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AState_Escenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AState_Escenario_Statics::ClassParams = {
		&AState_Escenario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AState_Escenario_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AState_Escenario_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AState_Escenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AState_Escenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AState_Escenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AState_Escenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AState_Escenario, 2252197790);
	template<> TETRISUSFX01_API UClass* StaticClass<AState_Escenario>()
	{
		return AState_Escenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AState_Escenario(Z_Construct_UClass_AState_Escenario, &AState_Escenario::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AState_Escenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AState_Escenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
