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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFullAuto_MetaData[];
#endif
		static void NewProp_IsFullAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFullAuto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawStowTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawStowTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLoadedAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxLoadedAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoReserves_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmoReserves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadedAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentLoadedAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmoReserves_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmmoReserves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumSpreadAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumSpreadAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumSpreadAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumSpreadAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleIncreasePerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleIncreasePerShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleDecreasePerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleDecreasePerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfProjectilesPerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfProjectilesPerShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerPellet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerPellet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Projectile;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, Name), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, Type), Z_Construct_UEnum_FPSExperiment_WeaponType, METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_IsFullAuto_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_IsFullAuto_SetBit(void* Obj)
	{
		((UFE_WeaponDataAsset*)Obj)->IsFullAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_IsFullAuto = { "IsFullAuto", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFE_WeaponDataAsset), &Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_IsFullAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_IsFullAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_IsFullAuto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, FireRate), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DrawStowTime_MetaData[] = {
		{ "Category", "FE_WeaponDataAsset" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DrawStowTime = { "DrawStowTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, DrawStowTime), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DrawStowTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DrawStowTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxLoadedAmmo_MetaData[] = {
		{ "Category", "Ammuntion/Reloading" },
		{ "Comment", "//Variables regarding ammuntion and reloading\n" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variables regarding ammuntion and reloading" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxLoadedAmmo = { "MaxLoadedAmmo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, MaxLoadedAmmo), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxLoadedAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxLoadedAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxAmmoReserves_MetaData[] = {
		{ "Category", "Ammuntion/Reloading" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxAmmoReserves = { "MaxAmmoReserves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, MaxAmmoReserves), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxAmmoReserves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxAmmoReserves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentLoadedAmmo_MetaData[] = {
		{ "Category", "Ammuntion/Reloading" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentLoadedAmmo = { "CurrentLoadedAmmo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, CurrentLoadedAmmo), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentLoadedAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentLoadedAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentAmmoReserves_MetaData[] = {
		{ "Category", "Ammuntion/Reloading" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentAmmoReserves = { "CurrentAmmoReserves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, CurrentAmmoReserves), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentAmmoReserves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentAmmoReserves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Ammuntion/Reloading" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, ReloadTime), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_ReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MinimumSpreadAngle_MetaData[] = {
		{ "Category", "Weapon Bullet Spread" },
		{ "Comment", "//Variable regarding bullet spread values\n" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variable regarding bullet spread values" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MinimumSpreadAngle = { "MinimumSpreadAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, MinimumSpreadAngle), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MinimumSpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MinimumSpreadAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaximumSpreadAngle_MetaData[] = {
		{ "Category", "Weapon Bullet Spread" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaximumSpreadAngle = { "MaximumSpreadAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, MaximumSpreadAngle), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaximumSpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaximumSpreadAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleIncreasePerShot_MetaData[] = {
		{ "Category", "Weapon Bullet Spread" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleIncreasePerShot = { "SpreadAngleIncreasePerShot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, SpreadAngleIncreasePerShot), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleIncreasePerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleIncreasePerShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleDecreasePerTick_MetaData[] = {
		{ "Category", "Weapon Bullet Spread" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleDecreasePerTick = { "SpreadAngleDecreasePerTick", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, SpreadAngleDecreasePerTick), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleDecreasePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleDecreasePerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_BulletRange_MetaData[] = {
		{ "Category", "Weapon Bullet Spread" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_BulletRange = { "BulletRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, BulletRange), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_BulletRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_BulletRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerShot_MetaData[] = {
		{ "Category", "Hit Scan" },
		{ "Comment", "//Variables for hit scan weapons\n" },
		{ "EditCondition", "Type == WeaponType::HitScan" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variables for hit scan weapons" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerShot = { "DamagePerShot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, DamagePerShot), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_NumberOfProjectilesPerShot_MetaData[] = {
		{ "Category", "Scatter" },
		{ "Comment", "//Variables for scatter weapons\n" },
		{ "EditCondition", "Type == WeaponType::Scatter" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variables for scatter weapons" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_NumberOfProjectilesPerShot = { "NumberOfProjectilesPerShot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, NumberOfProjectilesPerShot), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_NumberOfProjectilesPerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_NumberOfProjectilesPerShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerPellet_MetaData[] = {
		{ "Category", "Scatter" },
		{ "EditCondition", "Type == WeaponType::Scatter" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerPellet = { "DamagePerPellet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, DamagePerPellet), METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerPellet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerPellet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//Variables for projectile weapons\n" },
		{ "EditCondition", "Type == WeaponType::Projectile" },
		{ "ModuleRelativePath", "FE_WeaponDataAsset.h" },
		{ "ToolTip", "Variables for projectile weapons" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFE_WeaponDataAsset, Projectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Projectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFE_WeaponDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_IsFullAuto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DrawStowTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxLoadedAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaxAmmoReserves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentLoadedAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_CurrentAmmoReserves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_ReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MinimumSpreadAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_MaximumSpreadAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleIncreasePerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_SpreadAngleDecreasePerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_BulletRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_NumberOfProjectilesPerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_DamagePerPellet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFE_WeaponDataAsset_Statics::NewProp_Projectile,
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
	IMPLEMENT_CLASS(UFE_WeaponDataAsset, 2497227358);
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
