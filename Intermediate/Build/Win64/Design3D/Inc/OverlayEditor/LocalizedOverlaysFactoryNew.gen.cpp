// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OverlayEditor/Private/Factories/LocalizedOverlaysFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizedOverlaysFactoryNew() {}
// Cross Module References
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew_NoRegister();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OverlayEditor();
// End Cross Module References
	void ULocalizedOverlaysFactoryNew::StaticRegisterNativesULocalizedOverlaysFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew_NoRegister()
	{
		return ULocalizedOverlaysFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OverlayEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/LocalizedOverlaysFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/LocalizedOverlaysFactoryNew.h" },
		{ "ToolTip", "Implements a factory for new ULocalizedOverlays objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizedOverlaysFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::ClassParams = {
		&ULocalizedOverlaysFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizedOverlaysFactoryNew, 2264406442);
	template<> OVERLAYEDITOR_API UClass* StaticClass<ULocalizedOverlaysFactoryNew>()
	{
		return ULocalizedOverlaysFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizedOverlaysFactoryNew(Z_Construct_UClass_ULocalizedOverlaysFactoryNew, &ULocalizedOverlaysFactoryNew::StaticClass, TEXT("/Script/OverlayEditor"), TEXT("ULocalizedOverlaysFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizedOverlaysFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
