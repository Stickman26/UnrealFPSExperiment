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

/**
 * 
 */
UCLASS()
class FPSEXPERIMENT_API UFE_WeaponDataAsset : public UDataAsset
{
	GENERATED_BODY()

	//General Variables regarding weapons

	UPROPERTY(EditAnywhere)
	FString WeaponName;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<WeaponType> weaponType;

	UPROPERTY(EditAnywhere)
	bool WeaponIsFullAuto;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "!WeaponIsFullAuto"))
	float WeaponShotDelay;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "WeaponIsFullAuto"))
	float WeaponFireRate;

	UPROPERTY(EditAnywhere)
	float WeaponDrawStowTime;

	//Variables regarding ammuntion and reloading

	UPROPERTY(Category = "Ammuntion/Reloading", EditAnywhere)
	uint16 WeaponMaxAmmoReserves;

	UPROPERTY(Category = "Ammuntion/Reloading", EditAnywhere)
	uint16 WeaponMaxLoadedAmmo;

	UPROPERTY(Category = "Ammuntion/Reloading", EditAnywhere)
	float WeaponReloadTime;

	//Variable regarding bullet scatter values

	UPROPERTY(Category = "Weapon Bullet Scatter", EditAnywhere)
	float WeaponMinimumScatterValue;

	UPROPERTY(Category = "Weapon Bullet Scatter", EditAnywhere)
	float WeaponMaximumScatterValue;

	UPROPERTY(Category = "Weapon Bullet Scatter", EditAnywhere)
	float WeaponScatterValueIncreasePerShot;

	UPROPERTY(Category = "Weapon Bullet Scatter", EditAnywhere)
	float WeaponScatterValueDecreasePerTick;
	
	//Variables for hit scan weapons

	UPROPERTY(Category = "Hit Scan", EditAnywhere, meta = (EditCondition = "weaponType == WeaponType::HitScan"))
	float WeaponDamagePerShot;

	//Variables for scatter weapons

	UPROPERTY(Category = "Scatter", EditAnywhere, meta=(EditCondition = "weaponType == WeaponType::Scatter"))
	uint16 WeaponNumberOfProjectilesPerShot = 5;
	
	UPROPERTY(Category = "Scatter", EditAnywhere, meta = (EditCondition = "weaponType == WeaponType::Scatter"))
	float WeaponDamagePerPellet;

	//Variables for projectile weapons

	UPROPERTY(Category = "Projectile", EditAnywhere, meta = (EditCondition = "weaponType == WeaponType::Projectile"))
	TAssetSubclassOf<AActor> WeaponProjectile;
};
