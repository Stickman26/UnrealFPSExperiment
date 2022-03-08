// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSExperimentGameMode.h"
#include "FPSExperimentHUD.h"
#include "FPSExperimentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSExperimentGameMode::AFPSExperimentGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSExperimentHUD::StaticClass();
}
