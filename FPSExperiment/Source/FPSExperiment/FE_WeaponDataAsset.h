// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FE_WeaponDataAsset.generated.h"

UENUM()
enum WeaponType
{
	HitScan UMETA(Display = "HitScan"),
	Projectile UMETA(Display = "Projectile"),
	Scatter UMETA(Display = "Scatter"),
};

USTRUCT()
struct FWeaponProfile
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	FString WeaponName;

	UPROPERTY(EditAnywhere, Category = WeaponType)
	TEnumAsByte<WeaponType> weaponType;

	UPROPERTY(EditAnywhere)
	bool WeaponIsFullAuto;

	UPROPERTY(EditAnywhere)
	uint16 WeaponMaxAmmoReserves;

	UPROPERTY(EditAnywhere)
	uint16 WeaponMaxLoadedAmmo;

	UPROPERTY(EditAnywhere)
	float WeaponReloadTime;

	UPROPERTY(EditAnywhere)
	float WeaponDrawStowTime;

	UPROPERTY(EditAnywhere)
	float WeaponMinimumScatterValue;

	UPROPERTY(EditAnywhere)
	float WeaponMaximumScatterValue;

	UPROPERTY(EditAnywhere)
	float WeaponScatterValueIncreasePerShot;

	UPROPERTY(EditAnywhere)
	float WweaponScatterValueDecreasePerTick;
};

/**
 * 
 */
UCLASS()
class FPSEXPERIMENT_API UFE_WeaponDataAsset : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<FWeaponProfile> Items;
};
