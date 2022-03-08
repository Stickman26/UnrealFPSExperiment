// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSExperimentHUD.generated.h"

UCLASS()
class AFPSExperimentHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPSExperimentHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

