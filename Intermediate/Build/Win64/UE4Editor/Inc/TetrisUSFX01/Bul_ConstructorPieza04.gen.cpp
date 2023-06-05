// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Bul_ConstructorPieza04.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBul_ConstructorPieza04() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABul_ConstructorPieza04_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABul_ConstructorPieza04();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABul_PiezaBase_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBul_ConstructorPieza_NoRegister();
// End Cross Module References
	void ABul_ConstructorPieza04::StaticRegisterNativesABul_ConstructorPieza04()
	{
	}
	UClass* Z_Construct_UClass_ABul_ConstructorPieza04_NoRegister()
	{
		return ABul_ConstructorPieza04::StaticClass();
	}
	struct Z_Construct_UClass_ABul_ConstructorPieza04_Statics
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
	UObject* (*const Z_Construct_UClass_ABul_ConstructorPieza04_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABul_ConstructorPieza04_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bul_ConstructorPieza04.h" },
		{ "ModuleRelativePath", "Bul_ConstructorPieza04.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABul_ConstructorPieza04_Statics::NewProp_Pieza_MetaData[] = {
		{ "ModuleRelativePath", "Bul_ConstructorPieza04.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABul_ConstructorPieza04_Statics::NewProp_Pieza = { "Pieza", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABul_ConstructorPieza04, Pieza), Z_Construct_UClass_ABul_PiezaBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABul_ConstructorPieza04_Statics::NewProp_Pieza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABul_ConstructorPieza04_Statics::NewProp_Pieza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABul_ConstructorPieza04_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABul_ConstructorPieza04_Statics::NewProp_Pieza,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABul_ConstructorPieza04_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBul_ConstructorPieza_NoRegister, (int32)VTABLE_OFFSET(ABul_ConstructorPieza04, IBul_ConstructorPieza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABul_ConstructorPieza04_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABul_ConstructorPieza04>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABul_ConstructorPieza04_Statics::ClassParams = {
		&ABul_ConstructorPieza04::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABul_ConstructorPieza04_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABul_ConstructorPieza04_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABul_ConstructorPieza04_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABul_ConstructorPieza04_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABul_ConstructorPieza04()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABul_ConstructorPieza04_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABul_ConstructorPieza04, 3792711492);
	template<> TETRISUSFX01_API UClass* StaticClass<ABul_ConstructorPieza04>()
	{
		return ABul_ConstructorPieza04::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABul_ConstructorPieza04(Z_Construct_UClass_ABul_ConstructorPieza04, &ABul_ConstructorPieza04::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABul_ConstructorPieza04"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABul_ConstructorPieza04);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
