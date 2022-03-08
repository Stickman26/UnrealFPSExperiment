// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSExperiment/FPSExperimentHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSExperimentHUD() {}
// Cross Module References
	FPSEXPERIMENT_API UClass* Z_Construct_UClass_AFPSExperimentHUD_NoRegister();
	FPSEXPERIMENT_API UClass* Z_Construct_UClass_AFPSExperimentHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPSExperiment();
// End Cross Module References
	void AFPSExperimentHUD::StaticRegisterNativesAFPSExperimentHUD()
	{
	}
	UClass* Z_Construct_UClass_AFPSExperimentHUD_NoRegister()
	{
		return AFPSExperimentHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPSExperimentHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSExperimentHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSExperiment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSExperimentHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPSExperimentHUD.h" },
		{ "ModuleRelativePath", "FPSExperimentHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSExperimentHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSExperimentHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSExperimentHUD_Statics::ClassParams = {
		&AFPSExperimentHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSExperimentHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSExperimentHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSExperimentHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSExperimentHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSExperimentHUD, 2263033998);
	template<> FPSEXPERIMENT_API UClass* StaticClass<AFPSExperimentHUD>()
	{
		return AFPSExperimentHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSExperimentHUD(Z_Construct_UClass_AFPSExperimentHUD, &AFPSExperimentHUD::StaticClass, TEXT("/Script/FPSExperiment"), TEXT("AFPSExperimentHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSExperimentHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
