// Copyright Epic Games, Inc. All Rights Reserved.

#include "PathfindingGameMode.h"
#include "PathfindingCharacter.h"
#include "UObject/ConstructorHelpers.h"

APathfindingGameMode::APathfindingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
