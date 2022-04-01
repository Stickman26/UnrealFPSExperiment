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
public:
	UPROPERTY(EditAnywhere)
	FString Name;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<WeaponType> Type = WeaponType::HitScan;

	UPROPERTY(EditAnywhere)
	bool IsFullAuto;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "!IsFullAuto"))
	float ShotDelay;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "IsFullAuto"))
	float FireRate;

	UPROPERTY(EditAnywhere)
	float DrawStowTime;

	//Variables regarding ammuntion and reloading

	UPROPERTY(Category = "Ammuntion/Reloading", EditAnywhere)
	int MaxAmmoReserves;

	UPROPERTY(Category = "Ammuntion/Reloading", EditAnywhere)
	int MaxLoadedAmmo;

	UPROPERTY(Category = "Ammuntion/Reloading", EditAnywhere)
	int CurrentLoadedAmmo;

	UPROPERTY(Category = "Ammuntion/Reloading", EditAnywhere)
	int CurrentAmmoReserves;

	UPROPERTY(Category = "Ammuntion/Reloading", EditAnywhere)
	float ReloadTime;

	//Variable regarding bullet spread values

	UPROPERTY(Category = "Weapon Bullet Spread", EditAnywhere)
	float MinimumSpreadAngle;

	UPROPERTY(Category = "Weapon Bullet Spread", EditAnywhere)
	float MaximumSpreadAngle;

	UPROPERTY(Category = "Weapon Bullet Spread", EditAnywhere)
	float SpreadAngleIncreasePerShot;

	UPROPERTY(Category = "Weapon Bullet Spread", EditAnywhere)
	float SpreadAngleDecreasePerTick;

	UPROPERTY(Category = "Weapon Bullet Spread", EditAnywhere)
	float BulletRange = 10000.0f;
	
	//Variables for hit scan weapons

	UPROPERTY(Category = "Hit Scan", EditAnywhere, meta = (EditCondition = "Type == WeaponType::HitScan"))
	float DamagePerShot;

	//Variables for scatter weapons

	UPROPERTY(Category = "Scatter", EditAnywhere, meta = (EditCondition = "Type == WeaponType::Scatter"))
	int NumberOfProjectilesPerShot = 5;
	
	UPROPERTY(Category = "Scatter", EditAnywhere, meta = (EditCondition = "Type == WeaponType::Scatter"))
	float DamagePerPellet;

	//Variables for projectile weapons

	UPROPERTY(Category = "Projectile", EditAnywhere, meta = (EditCondition = "Type == WeaponType::Projectile"))
	TAssetSubclassOf<AActor> Projectile;
};
