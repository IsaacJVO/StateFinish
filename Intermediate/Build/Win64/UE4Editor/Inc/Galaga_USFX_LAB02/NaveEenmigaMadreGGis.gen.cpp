// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/NaveEenmigaMadreGGis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEenmigaMadreGGis() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEenmigaMadreGGis_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEenmigaMadreGGis();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_ANaveEenmigaMadre();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void ANaveEenmigaMadreGGis::StaticRegisterNativesANaveEenmigaMadreGGis()
	{
	}
	UClass* Z_Construct_UClass_ANaveEenmigaMadreGGis_NoRegister()
	{
		return ANaveEenmigaMadreGGis::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEenmigaMadreGGis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEenmigaMadreGGis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEenmigaMadre,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEenmigaMadreGGis_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEenmigaMadreGGis.h" },
		{ "ModuleRelativePath", "NaveEenmigaMadreGGis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEenmigaMadreGGis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEenmigaMadreGGis>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEenmigaMadreGGis_Statics::ClassParams = {
		&ANaveEenmigaMadreGGis::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEenmigaMadreGGis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEenmigaMadreGGis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEenmigaMadreGGis()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEenmigaMadreGGis_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEenmigaMadreGGis, 4149416940);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<ANaveEenmigaMadreGGis>()
	{
		return ANaveEenmigaMadreGGis::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEenmigaMadreGGis(Z_Construct_UClass_ANaveEenmigaMadreGGis, &ANaveEenmigaMadreGGis::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("ANaveEenmigaMadreGGis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEenmigaMadreGGis);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
