// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Internationalization/StringTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStringTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStringTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UStringTable::StaticRegisterNativesUStringTable()
	{
	}
	UClass* Z_Construct_UClass_UStringTable_NoRegister()
	{
		return UStringTable::StaticClass();
	}
	struct Z_Construct_UClass_UStringTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Internationalization/StringTable.h" },
		{ "ModuleRelativePath", "Public/Internationalization/StringTable.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "String table wrapper asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStringTable_Statics::ClassParams = {
		&UStringTable::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStringTable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStringTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStringTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStringTable, 3968364381);
	template<> ENGINE_API UClass* StaticClass<UStringTable>()
	{
		return UStringTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringTable(Z_Construct_UClass_UStringTable, &UStringTable::StaticClass, TEXT("/Script/Engine"), TEXT("UStringTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringTable);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStringTable)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif