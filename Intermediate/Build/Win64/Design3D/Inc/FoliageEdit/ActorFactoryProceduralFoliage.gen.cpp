// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageEdit/Private/ActorFactoryProceduralFoliage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryProceduralFoliage() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage_NoRegister();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxVolume();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void UActorFactoryProceduralFoliage::StaticRegisterNativesUActorFactoryProceduralFoliage()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage_NoRegister()
	{
		return UActorFactoryProceduralFoliage::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryBoxVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "ActorFactoryProceduralFoliage.h" },
		{ "ModuleRelativePath", "Private/ActorFactoryProceduralFoliage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryProceduralFoliage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::ClassParams = {
		&UActorFactoryProceduralFoliage::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryProceduralFoliage, 3191447554);
	template<> FOLIAGEEDIT_API UClass* StaticClass<UActorFactoryProceduralFoliage>()
	{
		return UActorFactoryProceduralFoliage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryProceduralFoliage(Z_Construct_UClass_UActorFactoryProceduralFoliage, &UActorFactoryProceduralFoliage::StaticClass, TEXT("/Script/FoliageEdit"), TEXT("UActorFactoryProceduralFoliage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryProceduralFoliage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif