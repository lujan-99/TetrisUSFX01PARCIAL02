// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/State_EstadoTarde.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeState_EstadoTarde() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AState_EstadoTarde_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AState_EstadoTarde();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AState_Escenario_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UState_EstadoEscenario_NoRegister();
// End Cross Module References
	void AState_EstadoTarde::StaticRegisterNativesAState_EstadoTarde()
	{
	}
	UClass* Z_Construct_UClass_AState_EstadoTarde_NoRegister()
	{
		return AState_EstadoTarde::StaticClass();
	}
	struct Z_Construct_UClass_AState_EstadoTarde_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AState_EstadoTarde_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AState_EstadoTarde_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "State_EstadoTarde.h" },
		{ "ModuleRelativePath", "State_EstadoTarde.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AState_EstadoTarde_Statics::NewProp_Escenario_MetaData[] = {
		{ "ModuleRelativePath", "State_EstadoTarde.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AState_EstadoTarde_Statics::NewProp_Escenario = { "Escenario", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AState_EstadoTarde, Escenario), Z_Construct_UClass_AState_Escenario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AState_EstadoTarde_Statics::NewProp_Escenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AState_EstadoTarde_Statics::NewProp_Escenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AState_EstadoTarde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AState_EstadoTarde_Statics::NewProp_Escenario,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AState_EstadoTarde_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_EstadoEscenario_NoRegister, (int32)VTABLE_OFFSET(AState_EstadoTarde, IState_EstadoEscenario), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AState_EstadoTarde_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AState_EstadoTarde>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AState_EstadoTarde_Statics::ClassParams = {
		&AState_EstadoTarde::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AState_EstadoTarde_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AState_EstadoTarde_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AState_EstadoTarde_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AState_EstadoTarde_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AState_EstadoTarde()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AState_EstadoTarde_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AState_EstadoTarde, 2839050983);
	template<> TETRISUSFX01_API UClass* StaticClass<AState_EstadoTarde>()
	{
		return AState_EstadoTarde::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AState_EstadoTarde(Z_Construct_UClass_AState_EstadoTarde, &AState_EstadoTarde::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AState_EstadoTarde"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AState_EstadoTarde);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
