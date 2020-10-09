// Copyright Epic Games, Inc. All Rights Reserved.

#include "planeGameMode.h"
#include "planeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AplaneGameMode::AplaneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
