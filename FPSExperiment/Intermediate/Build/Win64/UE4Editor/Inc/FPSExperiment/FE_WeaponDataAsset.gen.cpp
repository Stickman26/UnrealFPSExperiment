// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSExperiment/FE_WeaponDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFE_WeaponDataAsset() {}
// Cross Module References
	FPSEXPERIMENT_API UEnum* Z_Construct_UEnum_FPSExperiment_WeaponType();
	UPackage* Z_Construct_UPackage__Script_FPSExperiment();
	FPSEXPERIMENT_API UClass* Z_Construct_UClass_UFE_WeaponDataAsset_NoRegister();
	FPSEXPERIMENT_API UClass* Z_Construct_UClass_UFE_WeaponDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* WeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSExperiment_WeaponType, Z_Construct_UPackage__Script_FPSExperiment(), TEXT("WeaponType"));
		}
		return Singleton;
	}
	template<> FPSEXPERIMENT_API UEnum* StaticEnum<WeaponType>()
	{
		return WeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_WeaponType(WeaponType_StaticEnum, TEXT("/Script/FPSExperiment"), TEXT("WeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSExperiment_WeaponType_Hash() { return 1505513134U; }
	UEnum* Z_Construct_UEnum_FPSExperiment_WeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSExperiment();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("WeaponType"), 0, Get_Z_Construct_UEnum_FPSExperiment_WeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HitScan", (int64)HitScan },
				{ "Projectile", (int64)Projectile },
				{ "Scatter", (int64)Scatter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HitScan.Display", "HitScan" },
				{ "HitScan.Name", "HitScan" },
				{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
				{ "Projectile.Display", "Projectile" },
				{ "Projectile.Name", "Projectile" },
				{ "Scatter.Display", "Scatter" },
				{ "Scatter.Name", "Scatter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSExperiment,
				nullptr,
				"WeaponType",
				"WeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFE_WeaponDataAsset::StaticRegisterNativesUFE_WeaponDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UFE_WeaponDataAsset_NoRegister()
	{
		return UFE_WeaponDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFE_WeaponDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponIsFullAuto_MetaData[];
#endif
		static void NewProp_WeaponIsFullAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponIsFullAuto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponShotDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponShotDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponFireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDrawStowTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDrawStowTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMaxAmmoReserves_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_WeaponMaxAmmoReserves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMaxLoadedAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_WeaponMaxLoadedAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMinimumScatterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponMinimumScatterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMaximumScatterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponMaximumScatterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponScatterValueIncreasePerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponScatterValueIncreasePerShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponScatterValueDecreasePerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponScatterValueDecreasePerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamagePerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDamagePerShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponNumberOfProjectilesPerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_WeaponNumberOfProjectilesPerShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamagePerPellet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDamagePerPellet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_WeaponProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFE_WeaponDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSExperiment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FE_WeaponDataAsset.h" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponName), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponType), Z_Construct_UEnum_FPSExperiment_WeaponType, METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponIsFullAuto_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponIsFullAuto_SetBit(void* Obj)
	{
		((UFE_WeaponDataAsset*)Obj)->WeaponIsFullAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponIsFullAuto = { "WeaponIsFullAuto", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFE_WeaponDataAsset), &Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponIsFullAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponIsFullAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponIsFullAuto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponShotDelay_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "EditCondition", "!WeaponIsFullAuto" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponShotDelay = { "WeaponShotDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponShotDelay), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponShotDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponShotDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponFireRate_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "EditCondition", "WeaponIsFullAuto" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponFireRate = { "WeaponFireRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponFireRate), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponFireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponFireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDrawStowTime_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDrawStowTime = { "WeaponDrawStowTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponDrawStowTime), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDrawStowTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDrawStowTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxAmmoReserves_MetaData[] = {
		{ "Category", "Ammuntion/Reloading" },
		{ "Comment", "//Variables regarding ammuntion and reloading\n" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variables regarding ammuntion and reloading" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxAmmoReserves = { "WeaponMaxAmmoReserves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponMaxAmmoReserves), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxAmmoReserves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxAmmoReserves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxLoadedAmmo_MetaData[] = {
		{ "Category", "Ammuntion/Reloading" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxLoadedAmmo = { "WeaponMaxLoadedAmmo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponMaxLoadedAmmo), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxLoadedAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxLoadedAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponReloadTime_MetaData[] = {
		{ "Category", "Ammuntion/Reloading" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponReloadTime = { "WeaponReloadTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponReloadTime), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMinimumScatterValue_MetaData[] = {
		{ "Category", "Weapon Bullet Scatter" },
		{ "Comment", "//Variable regarding bullet scatter values\n" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variable regarding bullet scatter values" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMinimumScatterValue = { "WeaponMinimumScatterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponMinimumScatterValue), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMinimumScatterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMinimumScatterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaximumScatterValue_MetaData[] = {
		{ "Category", "Weapon Bullet Scatter" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaximumScatterValue = { "WeaponMaximumScatterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponMaximumScatterValue), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaximumScatterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaximumScatterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueIncreasePerShot_MetaData[] = {
		{ "Category", "Weapon Bullet Scatter" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueIncreasePerShot = { "WeaponScatterValueIncreasePerShot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponScatterValueIncreasePerShot), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueIncreasePerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueIncreasePerShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueDecreasePerTick_MetaData[] = {
		{ "Category", "Weapon Bullet Scatter" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueDecreasePerTick = { "WeaponScatterValueDecreasePerTick", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponScatterValueDecreasePerTick), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueDecreasePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueDecreasePerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerShot_MetaData[] = {
		{ "Category", "Hit Scan" },
		{ "Comment", "//Variables for hit scan weapons\n" },
		{ "EditCondition", "weaponType == WeaponType::HitScan" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variables for hit scan weapons" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerShot = { "WeaponDamagePerShot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponDamagePerShot), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponNumberOfProjectilesPerShot_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "//Variables for scatter weapons\n" },
		{ "EditCondition", "weaponType == WeaponType::Scatter" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variables for scatter weapons" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponNumberOfProjectilesPerShot = { "WeaponNumberOfProjectilesPerShot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponNumberOfProjectilesPerShot), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponNumberOfProjectilesPerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponNumberOfProjectilesPerShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerPellet_MetaData[] = {
		{ "Category", "Scatter" },
		{ "EditCondition", "weaponType == WeaponType::Scatter" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerPellet = { "WeaponDamagePerPellet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponDamagePerPellet), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerPellet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerPellet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//Variables for projectile weapons\n" },
		{ "EditCondition", "weaponType == WeaponType::Projectile" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variables for projectile weapons" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponProjectile = { "WeaponProjectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, WeaponProjectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponProjectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFE_WeaponDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponIsFullAuto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponShotDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponFireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDrawStowTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxAmmoReserves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaxLoadedAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMinimumScatterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponMaximumScatterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueIncreasePerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponScatterValueDecreasePerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponNumberOfProjectilesPerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponDamagePerPellet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_WeaponProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFE_WeaponDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFE_WeaponDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::ClassParams = {
		&UFE_WeaponDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFE_WeaponDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFE_WeaponDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFE_WeaponDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFE_WeaponDataAsset, 2228303831);
	template<> FPSEXPERIMENT_API UClass* StaticClass<UFE_WeaponDataAsset>()
	{
		return UFE_WeaponDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFE_WeaponDataAsset(Z_Construct_UClass_UFE_WeaponDataAsset, &UFE_WeaponDataAsset::StaticClass, TEXT("/Script/FPSExperiment"), TEXT("UFE_WeaponDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFE_WeaponDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
