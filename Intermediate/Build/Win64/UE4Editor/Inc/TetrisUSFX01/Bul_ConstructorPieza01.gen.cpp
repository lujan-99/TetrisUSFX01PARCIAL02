// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Bul_ConstructorPieza01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBul_ConstructorPieza01() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABul_ConstructorPieza01_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABul_ConstructorPieza01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABul_PiezaBase_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBul_ConstructorPieza_NoRegister();
// End Cross Module References
	void ABul_ConstructorPieza01::StaticRegisterNativesABul_ConstructorPieza01()
	{
	}
	UClass* Z_Construct_UClass_ABul_ConstructorPieza01_NoRegister()
	{
		return ABul_ConstructorPieza01::StaticClass();
	}
	struct Z_Construct_UClass_ABul_ConstructorPieza01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pieza_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pieza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABul_ConstructorPieza01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABul_ConstructorPieza01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bul_ConstructorPieza01.h" },
		{ "ModuleRelativePath", "Bul_ConstructorPieza01.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABul_ConstructorPieza01_Statics::NewProp_Pieza_MetaData[] = {
		{ "ModuleRelativePath", "Bul_ConstructorPieza01.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABul_ConstructorPieza01_Statics::NewProp_Pieza = { "Pieza", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABul_ConstructorPieza01, Pieza), Z_Construct_UClass_ABul_PiezaBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABul_ConstructorPieza01_Statics::NewProp_Pieza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABul_ConstructorPieza01_Statics::NewProp_Pieza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABul_ConstructorPieza01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABul_ConstructorPieza01_Statics::NewProp_Pieza,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABul_ConstructorPieza01_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBul_ConstructorPieza_NoRegister, (int32)VTABLE_OFFSET(ABul_ConstructorPieza01, IBul_ConstructorPieza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABul_ConstructorPieza01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABul_ConstructorPieza01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABul_ConstructorPieza01_Statics::ClassParams = {
		&ABul_ConstructorPieza01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABul_ConstructorPieza01_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABul_ConstructorPieza01_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABul_ConstructorPieza01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABul_ConstructorPieza01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABul_ConstructorPieza01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABul_ConstructorPieza01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABul_ConstructorPieza01, 111290696);
	template<> TETRISUSFX01_API UClass* StaticClass<ABul_ConstructorPieza01>()
	{
		return ABul_ConstructorPieza01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABul_ConstructorPieza01(Z_Construct_UClass_ABul_ConstructorPieza01, &ABul_ConstructorPieza01::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABul_ConstructorPieza01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABul_ConstructorPieza01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
