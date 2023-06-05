// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISUSFX01_Board_generated_h
#error "Board.generated.h already included, missing '#pragma once' in Board.h"
#endif
#define TETRISUSFX01_Board_generated_h

#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_SPARSE_DATA
#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_RPC_WRAPPERS
#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoard(); \
	friend struct Z_Construct_UClass_ABoard_Statics; \
public: \
	DECLARE_CLASS(ABoard, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(ABoard)


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABoard(); \
	friend struct Z_Construct_UClass_ABoard_Statics; \
public: \
	DECLARE_CLASS(ABoard, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(ABoard)


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoard(ABoard&&); \
	NO_API ABoard(const ABoard&); \
public:


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoard(ABoard&&); \
	NO_API ABoard(const ABoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoard)


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Peligro() { return STRUCT_OFFSET(ABoard, Peligro); } \
	FORCEINLINE static uint32 __PPO__Jugador() { return STRUCT_OFFSET(ABoard, Jugador); } \
	FORCEINLINE static uint32 __PPO__ConstructorPieza01() { return STRUCT_OFFSET(ABoard, ConstructorPieza01); } \
	FORCEINLINE static uint32 __PPO__ConstructorPieza02() { return STRUCT_OFFSET(ABoard, ConstructorPieza02); } \
	FORCEINLINE static uint32 __PPO__ConstructorPieza03() { return STRUCT_OFFSET(ABoard, ConstructorPieza03); } \
	FORCEINLINE static uint32 __PPO__ConstructorPieza04() { return STRUCT_OFFSET(ABoard, ConstructorPieza04); } \
	FORCEINLINE static uint32 __PPO__ConstructorPieza05() { return STRUCT_OFFSET(ABoard, ConstructorPieza05); } \
	FORCEINLINE static uint32 __PPO__DirectorPieza() { return STRUCT_OFFSET(ABoard, DirectorPieza); }


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_16_PROLOG
#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_PRIVATE_PROPERTY_OFFSET \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_SPARSE_DATA \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_RPC_WRAPPERS \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_INCLASS \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_PRIVATE_PROPERTY_OFFSET \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_SPARSE_DATA \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_INCLASS_NO_PURE_DECLS \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISUSFX01_API UClass* StaticClass<class ABoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TetrisUSFX01_master_Source_TetrisUSFX01_Board_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
