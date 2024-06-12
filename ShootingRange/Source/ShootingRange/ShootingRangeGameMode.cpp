// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingRangeGameMode.h"
#include "ShootingRangeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingRangeGameMode::AShootingRangeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
