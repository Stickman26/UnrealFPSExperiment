// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSExperiment/TargetReticleUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetReticleUI() {}
// Cross Module References
	FPSEXPERIMENT_API UClass* Z_Construct_UClass_UTargetReticleUI_NoRegister();
	FPSEXPERIMENT_API UClass* Z_Construct_UClass_UTargetReticleUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FPSExperiment();
// End Cross Module References
	void UTargetReticleUI::StaticRegisterNativesUTargetReticleUI()
	{
	}
	UClass* Z_Construct_UClass_UTargetReticleUI_NoRegister()
	{
		return UTargetReticleUI::StaticClass();
	}
	struct Z_Construct_UClass_UTargetReticleUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetReticleUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSExperiment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetReticleUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TargetReticleUI.h" },
		{ "ModuleRelativePath", "TargetReticleUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetReticleUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetReticleUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTargetReticleUI_Statics::ClassParams = {
		&UTargetReticleUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetReticleUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetReticleUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetReticleUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTargetReticleUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTargetReticleUI, 2248579538);
	template<> FPSEXPERIMENT_API UClass* StaticClass<UTargetReticleUI>()
	{
		return UTargetReticleUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetReticleUI(Z_Construct_UClass_UTargetReticleUI, &UTargetReticleUI::StaticClass, TEXT("/Script/FPSExperiment"), TEXT("UTargetReticleUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetReticleUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
