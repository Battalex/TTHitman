// Copyright Epic Games, Inc. All Rights Reserved.

#include "TTHitmanGameMode.h"
#include "TTHitmanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATTHitmanGameMode::ATTHitmanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
