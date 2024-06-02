// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/CAInvisible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAInvisible() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UCAInvisible_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UCAInvisible();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void UCAInvisible::StaticRegisterNativesUCAInvisible()
	{
	}
	UClass* Z_Construct_UClass_UCAInvisible_NoRegister()
	{
		return UCAInvisible::StaticClass();
	}
	struct Z_Construct_UClass_UCAInvisible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAInvisible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAInvisible_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CAInvisible.h" },
		{ "ModuleRelativePath", "CAInvisible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAInvisible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAInvisible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAInvisible_Statics::ClassParams = {
		&UCAInvisible::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCAInvisible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAInvisible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAInvisible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAInvisible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAInvisible, 2929300717);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<UCAInvisible>()
	{
		return UCAInvisible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAInvisible(Z_Construct_UClass_UCAInvisible, &UCAInvisible::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("UCAInvisible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAInvisible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
