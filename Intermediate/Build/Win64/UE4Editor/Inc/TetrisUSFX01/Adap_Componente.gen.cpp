// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Adap_Componente.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdap_Componente() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UAdap_Componente_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UAdap_Componente();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UAdap_Componente::StaticRegisterNativesUAdap_Componente()
	{
	}
	UClass* Z_Construct_UClass_UAdap_Componente_NoRegister()
	{
		return UAdap_Componente::StaticClass();
	}
	struct Z_Construct_UClass_UAdap_Componente_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdap_Componente_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdap_Componente_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Adap_Componente.h" },
		{ "ModuleRelativePath", "Adap_Componente.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdap_Componente_Statics::NewProp_MovementRadius_MetaData[] = {
		{ "ModuleRelativePath", "Adap_Componente.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdap_Componente_Statics::NewProp_MovementRadius = { "MovementRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdap_Componente, MovementRadius), METADATA_PARAMS(Z_Construct_UClass_UAdap_Componente_Statics::NewProp_MovementRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdap_Componente_Statics::NewProp_MovementRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdap_Componente_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdap_Componente_Statics::NewProp_MovementRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdap_Componente_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdap_Componente>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdap_Componente_Statics::ClassParams = {
		&UAdap_Componente::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdap_Componente_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdap_Componente_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdap_Componente_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdap_Componente_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdap_Componente()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdap_Componente_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdap_Componente, 2613500603);
	template<> TETRISUSFX01_API UClass* StaticClass<UAdap_Componente>()
	{
		return UAdap_Componente::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdap_Componente(Z_Construct_UClass_UAdap_Componente, &UAdap_Componente::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UAdap_Componente"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdap_Componente);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
