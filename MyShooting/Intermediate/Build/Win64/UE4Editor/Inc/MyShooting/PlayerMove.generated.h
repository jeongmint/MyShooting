// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSHOOTING_PlayerMove_generated_h
#error "PlayerMove.generated.h already included, missing '#pragma once' in PlayerMove.h"
#endif
#define MYSHOOTING_PlayerMove_generated_h

#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_SPARSE_DATA
#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_RPC_WRAPPERS
#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMove(); \
	friend struct Z_Construct_UClass_UPlayerMove_Statics; \
public: \
	DECLARE_CLASS(UPlayerMove, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyShooting"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMove)


#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerMove(); \
	friend struct Z_Construct_UClass_UPlayerMove_Statics; \
public: \
	DECLARE_CLASS(UPlayerMove, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyShooting"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMove)


#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMove(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMove) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMove); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMove); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMove(UPlayerMove&&); \
	NO_API UPlayerMove(const UPlayerMove&); \
public:


#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMove(UPlayerMove&&); \
	NO_API UPlayerMove(const UPlayerMove&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMove); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMove); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerMove)


#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__me() { return STRUCT_OFFSET(UPlayerMove, me); }


#define MyShooting_Source_MyShooting_Public_PlayerMove_h_10_PROLOG
#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_PRIVATE_PROPERTY_OFFSET \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_SPARSE_DATA \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_RPC_WRAPPERS \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_INCLASS \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyShooting_Source_MyShooting_Public_PlayerMove_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_PRIVATE_PROPERTY_OFFSET \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_SPARSE_DATA \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_INCLASS_NO_PURE_DECLS \
	MyShooting_Source_MyShooting_Public_PlayerMove_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSHOOTING_API UClass* StaticClass<class UPlayerMove>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyShooting_Source_MyShooting_Public_PlayerMove_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
