// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Dec_Interface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDec_Interface() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UDec_Interface_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UDec_Interface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UDec_Interface::StaticRegisterNativesUDec_Interface()
	{
	}
	UClass* Z_Construct_UClass_UDec_Interface_NoRegister()
	{
		return UDec_Interface::StaticClass();
	}
	struct Z_Construct_UClass_UDec_Interface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDec_Interface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDec_Interface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dec_Interface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDec_Interface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDec_Interface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDec_Interface_Statics::ClassParams = {
		&UDec_Interface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDec_Interface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDec_Interface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDec_Interface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDec_Interface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDec_Interface, 2218751728);
	template<> TETRISUSFX01_API UClass* StaticClass<UDec_Interface>()
	{
		return UDec_Interface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDec_Interface(Z_Construct_UClass_UDec_Interface, &UDec_Interface::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UDec_Interface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDec_Interface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
