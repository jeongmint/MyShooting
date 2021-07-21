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
	MYSHOOTING_API UClass* Z_Construct_UClass_AShootPlayer_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "ClassGroupNames", "JM" },
		{ "IncludePath", "PlayerMove.h" },
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// ?\xca\xbf??\xd3\xbc? : ?\xcc\xb5??\xd3\xb5?\n// UPROPERTY?? ??\xc5\xa9?? ?\xd4\xbc??\xcc\xb9\xc7\xb7? ???\xda\xb8? ???? ?? ????\n// EditAnywhere ???\xf0\xbc\xad\xb5? ???? ????\n// VisibleAnyWhere ???\xe2\xb8\xb8 ????\n" },
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc? : ?\xcc\xb5??\xd3\xb5?\nUPROPERTY?? ??\xc5\xa9?? ?\xd4\xbc??\xcc\xb9\xc7\xb7? ???\xda\xb8? ???? ?? ????\nEditAnywhere ???\xf0\xbc\xad\xb5? ???? ????\nVisibleAnyWhere ???\xe2\xb8\xb8 ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMove_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMove, speed), METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMove_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMove, me), Z_Construct_UClass_AShootPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMove_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMove_Statics::NewProp_me,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMove_Statics::ClassParams = {
		&UPlayerMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UPlayerMove, 4198089270);
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
