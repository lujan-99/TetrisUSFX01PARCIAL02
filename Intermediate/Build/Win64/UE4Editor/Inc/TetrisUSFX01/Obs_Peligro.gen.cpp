// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Obs_Peligro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObs_Peligro() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AObs_Peligro_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AObs_Peligro();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AObs_Advertencia();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AObs_Peligro::StaticRegisterNativesAObs_Peligro()
	{
	}
	UClass* Z_Construct_UClass_AObs_Peligro_NoRegister()
	{
		return AObs_Peligro::StaticClass();
	}
	struct Z_Construct_UClass_AObs_Peligro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObs_Peligro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObs_Advertencia,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObs_Peligro_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Obs_Peligro.h" },
		{ "ModuleRelativePath", "Obs_Peligro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObs_Peligro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObs_Peligro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObs_Peligro_Statics::ClassParams = {
		&AObs_Peligro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObs_Peligro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObs_Peligro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObs_Peligro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObs_Peligro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObs_Peligro, 3901629194);
	template<> TETRISUSFX01_API UClass* StaticClass<AObs_Peligro>()
	{
		return AObs_Peligro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObs_Peligro(Z_Construct_UClass_AObs_Peligro, &AObs_Peligro::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AObs_Peligro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObs_Peligro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
