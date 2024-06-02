// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/PORTAL1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePORTAL1() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_APORTAL1_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_APORTAL1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void APORTAL1::StaticRegisterNativesAPORTAL1()
	{
	}
	UClass* Z_Construct_UClass_APORTAL1_NoRegister()
	{
		return APORTAL1::StaticClass();
	}
	struct Z_Construct_UClass_APORTAL1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APORTAL1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APORTAL1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PORTAL1.h" },
		{ "ModuleRelativePath", "PORTAL1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APORTAL1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APORTAL1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APORTAL1_Statics::ClassParams = {
		&APORTAL1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APORTAL1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APORTAL1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APORTAL1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APORTAL1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APORTAL1, 3038478979);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<APORTAL1>()
	{
		return APORTAL1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APORTAL1(Z_Construct_UClass_APORTAL1, &APORTAL1::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("APORTAL1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APORTAL1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
