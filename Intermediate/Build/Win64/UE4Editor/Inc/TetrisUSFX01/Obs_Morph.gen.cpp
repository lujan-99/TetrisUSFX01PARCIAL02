// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Obs_Morph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObs_Morph() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UObs_Morph_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UObs_Morph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UObs_Morph::StaticRegisterNativesUObs_Morph()
	{
	}
	UClass* Z_Construct_UClass_UObs_Morph_NoRegister()
	{
		return UObs_Morph::StaticClass();
	}
	struct Z_Construct_UClass_UObs_Morph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObs_Morph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObs_Morph_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Obs_Morph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObs_Morph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObs_Morph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObs_Morph_Statics::ClassParams = {
		&UObs_Morph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObs_Morph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObs_Morph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObs_Morph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObs_Morph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObs_Morph, 1290414098);
	template<> TETRISUSFX01_API UClass* StaticClass<UObs_Morph>()
	{
		return UObs_Morph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObs_Morph(Z_Construct_UClass_UObs_Morph, &UObs_Morph::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UObs_Morph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObs_Morph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
