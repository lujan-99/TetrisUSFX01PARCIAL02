// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Adap_Adaptador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdap_Adaptador() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UAdap_Adaptador_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UAdap_Adaptador();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UAdap_Componente();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UAdap_Adaptador::StaticRegisterNativesUAdap_Adaptador()
	{
	}
	UClass* Z_Construct_UClass_UAdap_Adaptador_NoRegister()
	{
		return UAdap_Adaptador::StaticClass();
	}
	struct Z_Construct_UClass_UAdap_Adaptador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdap_Adaptador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdap_Componente,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdap_Adaptador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Adap_Adaptador.h" },
		{ "ModuleRelativePath", "Adap_Adaptador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdap_Adaptador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdap_Adaptador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdap_Adaptador_Statics::ClassParams = {
		&UAdap_Adaptador::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdap_Adaptador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdap_Adaptador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdap_Adaptador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdap_Adaptador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdap_Adaptador, 3476663974);
	template<> TETRISUSFX01_API UClass* StaticClass<UAdap_Adaptador>()
	{
		return UAdap_Adaptador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdap_Adaptador(Z_Construct_UClass_UAdap_Adaptador, &UAdap_Adaptador::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UAdap_Adaptador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdap_Adaptador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
