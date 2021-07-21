// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyShooting/Public/PlayerMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMove() {}
// Cross Module References
	MYSHOOTING_API UClass* Z_Construct_UClass_UPlayerMove_NoRegister();
	MYSHOOTING_API UClass* Z_Construct_UClass_UPlayerMove();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyShooting();
// End Cross Module References
	void UPlayerMove::StaticRegisterNativesUPlayerMove()
	{
	}
	UClass* Z_Construct_UClass_UPlayerMove_NoRegister()
	{
		return UPlayerMove::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyShooting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerMove.h" },
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMove_Statics::ClassParams = {
		&UPlayerMove::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerMove, 4119384922);
	template<> MYSHOOTING_API UClass* StaticClass<UPlayerMove>()
	{
		return UPlayerMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerMove(Z_Construct_UClass_UPlayerMove, &UPlayerMove::StaticClass, TEXT("/Script/MyShooting"), TEXT("UPlayerMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
