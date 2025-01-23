// Copyright Epic Games, Inc. All Rights Reserved.

#include "CommonUITutorialGameMode.h"
#include "CommonUITutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACommonUITutorialGameMode::ACommonUITutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
