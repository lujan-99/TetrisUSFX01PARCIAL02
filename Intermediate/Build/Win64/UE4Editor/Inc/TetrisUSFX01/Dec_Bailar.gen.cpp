// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Dec_Bailar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDec_Bailar() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UDec_Bailar_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UDec_Bailar();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UDec_Interface_NoRegister();
// End Cross Module References
	void UDec_Bailar::StaticRegisterNativesUDec_Bailar()
	{
	}
	UClass* Z_Construct_UClass_UDec_Bailar_NoRegister()
	{
		return UDec_Bailar::StaticClass();
	}
	struct Z_Construct_UClass_UDec_Bailar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Personita_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Personita;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDec_Bailar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDec_Bailar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Dec_Bailar.h" },
		{ "ModuleRelativePath", "Dec_Bailar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDec_Bailar_Statics::NewProp_Personita_MetaData[] = {
		{ "ModuleRelativePath", "Dec_Bailar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDec_Bailar_Statics::NewProp_Personita = { "Personita", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDec_Bailar, Personita), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDec_Bailar_Statics::NewProp_Personita_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDec_Bailar_Statics::NewProp_Personita_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDec_Bailar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDec_Bailar_Statics::NewProp_Personita,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDec_Bailar_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDec_Interface_NoRegister, (int32)VTABLE_OFFSET(UDec_Bailar, IDec_Interface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDec_Bailar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDec_Bailar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDec_Bailar_Statics::ClassParams = {
		&UDec_Bailar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDec_Bailar_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDec_Bailar_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDec_Bailar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDec_Bailar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDec_Bailar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDec_Bailar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDec_Bailar, 97542664);
	template<> TETRISUSFX01_API UClass* StaticClass<UDec_Bailar>()
	{
		return UDec_Bailar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDec_Bailar(Z_Construct_UClass_UDec_Bailar, &UDec_Bailar::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UDec_Bailar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDec_Bailar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
