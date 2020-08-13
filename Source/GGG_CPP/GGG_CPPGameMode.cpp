// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GGG_CPPGameMode.h"
#include "GGG_CPPPlayerController.h"
#include "GGG_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGGG_CPPGameMode::AGGG_CPPGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGGG_CPPPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}