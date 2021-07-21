// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSHOOTING_ShootPlayer_generated_h
#error "ShootPlayer.generated.h already included, missing '#pragma once' in ShootPlayer.h"
#endif
#define MYSHOOTING_ShootPlayer_generated_h

#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_SPARSE_DATA
#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_RPC_WRAPPERS
#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootPlayer(); \
	friend struct Z_Construct_UClass_AShootPlayer_Statics; \
public: \
	DECLARE_CLASS(AShootPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyShooting"), NO_API) \
	DECLARE_SERIALIZER(AShootPlayer)


#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShootPlayer(); \
	friend struct Z_Construct_UClass_AShootPlayer_Statics; \
public: \
	DECLARE_CLASS(AShootPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyShooting"), NO_API) \
	DECLARE_SERIALIZER(AShootPlayer)


#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootPlayer(AShootPlayer&&); \
	NO_API AShootPlayer(const AShootPlayer&); \
public:


#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootPlayer(AShootPlayer&&); \
	NO_API AShootPlayer(const AShootPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootPlayer)


#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_9_PROLOG
#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_SPARSE_DATA \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_RPC_WRAPPERS \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_INCLASS \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_SPARSE_DATA \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_INCLASS_NO_PURE_DECLS \
	MyShooting_Source_MyShooting_Public_ShootPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSHOOTING_API UClass* StaticClass<class AShootPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyShooting_Source_MyShooting_Public_ShootPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
