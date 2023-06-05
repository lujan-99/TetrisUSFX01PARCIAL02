// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Bul_PiezaInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBul_PiezaInterface() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBul_PiezaInterface_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBul_PiezaInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UBul_PiezaInterface::StaticRegisterNativesUBul_PiezaInterface()
	{
	}
	UClass* Z_Construct_UClass_UBul_PiezaInterface_NoRegister()
	{
		return UBul_PiezaInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBul_PiezaInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBul_PiezaInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBul_PiezaInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bul_PiezaInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBul_PiezaInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBul_PiezaInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBul_PiezaInterface_Statics::ClassParams = {
		&UBul_PiezaInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBul_PiezaInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBul_PiezaInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBul_PiezaInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBul_PiezaInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBul_PiezaInterface, 3689167561);
	template<> TETRISUSFX01_API UClass* StaticClass<UBul_PiezaInterface>()
	{
		return UBul_PiezaInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBul_PiezaInterface(Z_Construct_UClass_UBul_PiezaInterface, &UBul_PiezaInterface::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UBul_PiezaInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBul_PiezaInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
