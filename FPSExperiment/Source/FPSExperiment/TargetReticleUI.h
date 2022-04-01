// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TargetReticleUI.generated.h"

/**
 * 
 */
UCLASS()
class FPSEXPERIMENT_API UTargetReticleUI : public UUserWidget
{
	GENERATED_BODY()
	
private:
	//Dynamic material
	//Player reference
	void placeholder() { return; };

protected:
	virtual bool Initialize() override;

	/*
	On Tick will need to implemented for dynamic circle
	
	Helper function to modify circle dynamic material
	*/
};
