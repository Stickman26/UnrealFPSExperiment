// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSExperimentCharacter.h"
#include "FPSExperimentProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "DrawDebugHelpers.h"
#include "Math/UnrealMathUtility.h"
#include "FE_WeaponDataAsset.h"
#include "TargetReticleUI.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

AFPSExperimentCharacter::AFPSExperimentCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	//Intialize additional variables
	CurrentWeaponSpread = 0.f;

	CurrentLoadedAmmo = 0;
	CurrentReserveAmmo = 0;
}

void AFPSExperimentCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	Mesh1P->SetHiddenInGame(false, true);

	//Give weapon initial ammo
	if (ActiveWeapon != nullptr)
	{
		CurrentLoadedAmmo = ActiveWeapon->MaxLoadedAmmo;
		CurrentReserveAmmo = ActiveWeapon->MaxAmmoReserves;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No weapon active"));
	}

	//Start bullet spread decrease timer
	GetWorldTimerManager().SetTimer(BulletSpreadTimerHandler, this, &AFPSExperimentCharacter::BulletSpreadDecrease, 0.1f, true, 0.1f);
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFPSExperimentCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSExperimentCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AFPSExperimentCharacter::StopFire);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSExperimentCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSExperimentCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFPSExperimentCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFPSExperimentCharacter::LookUpAtRate);
}

void AFPSExperimentCharacter::StartFire()
{
	if (ActiveWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No weapon active"));
		return;
	}

	if (!GetWorldTimerManager().IsTimerActive(FireDelayTimer) && !GetWorldTimerManager().IsTimerActive(ReloadTimer)) //add variables for swapping timers to also be checked
	{
		CanFire = true;
	}

	if (CanFire)
	{
		CanFire = false;

		FireWeapon();

		GetWorldTimerManager().SetTimer(FireDelayTimer, ActiveWeapon->FireRate, false);

		if (ActiveWeapon->IsFullAuto)
			GetWorldTimerManager().SetTimer(AutomaticFireTimer, this, &AFPSExperimentCharacter::FireWeapon, ActiveWeapon->FireRate, true);
	}
}

void AFPSExperimentCharacter::StopFire()
{
	if (ActiveWeapon->IsFullAuto)
		GetWorldTimerManager().ClearTimer(AutomaticFireTimer);
}

void AFPSExperimentCharacter::FireWeapon()
{
	//Automatically reload if attempting to fire with no ammo
	if (CurrentLoadedAmmo == 0)
	{
		CallReload();
		return;
	}
	else
	{
		--CurrentLoadedAmmo;
	}

	if (ActiveWeapon->Type == WeaponType::HitScan)
	{
		FHitResult Hit;
		FVector StartLocation = FirstPersonCameraComponent->GetComponentLocation();

		BulletSpreadIncrease();
		FVector EndPoint = BulletSpreadModifier(FirstPersonCameraComponent->GetForwardVector(), FirstPersonCameraComponent->GetUpVector(), FirstPersonCameraComponent->GetRightVector());

		FVector EndLocation = StartLocation + (EndPoint);
		FCollisionQueryParams CollisionParameters;
		ActorLineTraceSingle(Hit, StartLocation, EndLocation, ECollisionChannel::ECC_WorldDynamic, CollisionParameters);
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, true, 0.5f, 0, 1.f);
	}

	else if (ActiveWeapon->Type == WeaponType::Scatter)
	{
		FHitResult Hit;
		FVector StartLocation = FirstPersonCameraComponent->GetComponentLocation();

		BulletSpreadIncrease();
		for (int i = 0; i < ActiveWeapon->NumberOfProjectilesPerShot; ++i)
		{
			FVector EndPoint = BulletSpreadModifier(FirstPersonCameraComponent->GetForwardVector(), FirstPersonCameraComponent->GetUpVector(), FirstPersonCameraComponent->GetRightVector());

			FVector EndLocation = StartLocation + (EndPoint);
			FCollisionQueryParams CollisionParameters;
			ActorLineTraceSingle(Hit, StartLocation, EndLocation, ECollisionChannel::ECC_WorldDynamic, CollisionParameters);
			DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, true, 0.5f, 0, 1.f);
		}
	}

	else if (ActiveWeapon->Type == WeaponType::Projectile)
	{
		// try and fire a projectile
		if (ProjectileClass != nullptr)
		{
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AFPSExperimentProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			}
		}
	}

	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AFPSExperimentCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFPSExperimentCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFPSExperimentCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFPSExperimentCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

//Additional Functions

FVector AFPSExperimentCharacter::BulletSpreadModifier(FVector Forward, FVector Up, FVector Right)
{
	//Initial variables
	FVector ModifiedEndPoint = FVector::ZeroVector;
	float spreadModifier = CurrentWeaponSpread;
	float BulletDistance = ActiveWeapon->BulletRange;
	
	//Find modified trajectory
	float Angle = FMath::FRandRange(0.f, 360.f);
	float Radius = BulletDistance * FMath::Tan(FMath::DegreesToRadians(CurrentWeaponSpread));
	float DistanceFromCenter = FMath::FRandRange(0.f, Radius);

	float X = DistanceFromCenter * FMath::Cos(FMath::DegreesToRadians(Angle));
	float Y = DistanceFromCenter * FMath::Sin(FMath::DegreesToRadians(Angle));

	//Apply change in X and Y to Find End Point
	ModifiedEndPoint = Forward * BulletDistance;
	ModifiedEndPoint += Right * X;
	ModifiedEndPoint += Up * Y;

	return ModifiedEndPoint;
}

void AFPSExperimentCharacter::BulletSpreadIncrease()
{
	if (ActiveWeapon != nullptr)
	{
		CurrentWeaponSpread += ActiveWeapon->SpreadAngleIncreasePerShot;

		if (CurrentWeaponSpread >= ActiveWeapon->MaximumSpreadAngle)
		{
			CurrentWeaponSpread = ActiveWeapon->MaximumSpreadAngle;
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No weapon active"));
	}
}

void AFPSExperimentCharacter::BulletSpreadDecrease()
{
	if (ActiveWeapon != nullptr)
	{
		if (CurrentWeaponSpread <= ActiveWeapon->MinimumSpreadAngle)
		{
			CurrentWeaponSpread = ActiveWeapon->MinimumSpreadAngle;
		}
		else
		{
			CurrentWeaponSpread -= ActiveWeapon->SpreadAngleDecreasePerTick;
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No weapon active"));
	}
}

void AFPSExperimentCharacter::CallReload()
{
	if (ActiveWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No weapon active"));
		return;
	}

	if (CurrentLoadedAmmo == (ActiveWeapon->MaxAmmoReserves) || GetWorldTimerManager().IsTimerActive(ReloadTimer))
		return;

	CanFire = false;

	GetWorldTimerManager().SetTimer(ReloadTimer, this, &AFPSExperimentCharacter::Reload, ActiveWeapon->ReloadTime, false);
}

void AFPSExperimentCharacter::Reload()
{
	CurrentReserveAmmo -= (ActiveWeapon->MaxLoadedAmmo - CurrentLoadedAmmo);
	CurrentLoadedAmmo = ActiveWeapon->MaxLoadedAmmo;
}

void AFPSExperimentCharacter::SwapWeapon(UFE_WeaponDataAsset SwapWeapon)
{
	if (ActiveWeapon != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No weapon active"));
	}
	else
	{
		//Save Old Weapon

		//New weapon profile
		CurrentLoadedAmmo = ActiveWeapon->CurrentLoadedAmmo;
		CurrentReserveAmmo = ActiveWeapon->CurrentAmmoReserves;
	}
}
