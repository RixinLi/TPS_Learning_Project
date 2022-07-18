// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPS_GAMEGameMode.h"
#include "TPS_GAMECharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPS_GAMEGameMode::ATPS_GAMEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
