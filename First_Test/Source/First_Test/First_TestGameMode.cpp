// Copyright Epic Games, Inc. All Rights Reserved.

#include "First_TestGameMode.h"
#include "First_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_TestGameMode::AFirst_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
