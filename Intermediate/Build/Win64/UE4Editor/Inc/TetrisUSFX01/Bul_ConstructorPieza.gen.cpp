// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Bul_ConstructorPieza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBul_ConstructorPieza() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBul_ConstructorPieza_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBul_ConstructorPieza();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UBul_ConstructorPieza::StaticRegisterNativesUBul_ConstructorPieza()
	{
	}
	UClass* Z_Construct_UClass_UBul_ConstructorPieza_NoRegister()
	{
		return UBul_ConstructorPieza::StaticClass();
	}
	struct Z_Construct_UClass_UBul_ConstructorPieza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBul_ConstructorPieza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBul_ConstructorPieza_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bul_ConstructorPieza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBul_ConstructorPieza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBul_ConstructorPieza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBul_ConstructorPieza_Statics::ClassParams = {
		&UBul_ConstructorPieza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBul_ConstructorPieza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBul_ConstructorPieza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBul_ConstructorPieza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBul_ConstructorPieza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBul_ConstructorPieza, 2384666636);
	template<> TETRISUSFX01_API UClass* StaticClass<UBul_ConstructorPieza>()
	{
		return UBul_ConstructorPieza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBul_ConstructorPieza(Z_Construct_UClass_UBul_ConstructorPieza, &UBul_ConstructorPieza::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UBul_ConstructorPieza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBul_ConstructorPieza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
