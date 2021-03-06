// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/SoundSurroundFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSurroundFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSurroundFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSurroundFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundSurroundFactory::StaticRegisterNativesUSoundSurroundFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundSurroundFactory_NoRegister()
	{
		return USoundSurroundFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSurroundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSurroundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSurroundFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundSurroundFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSurroundFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSurroundFactory_Statics::NewProp_CueVolume_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/SoundSurroundFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSurroundFactory_Statics::NewProp_CueVolume = { "CueVolume", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSurroundFactory, CueVolume), METADATA_PARAMS(Z_Construct_UClass_USoundSurroundFactory_Statics::NewProp_CueVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSurroundFactory_Statics::NewProp_CueVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSurroundFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSurroundFactory_Statics::NewProp_CueVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSurroundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSurroundFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSurroundFactory_Statics::ClassParams = {
		&USoundSurroundFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSurroundFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundSurroundFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSurroundFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSurroundFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSurroundFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSurroundFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSurroundFactory, 2629239694);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSurroundFactory>()
	{
		return USoundSurroundFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSurroundFactory(Z_Construct_UClass_USoundSurroundFactory, &USoundSurroundFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundSurroundFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSurroundFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
