// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Platformer.h"
#include "PlatformerGameMode.h"
#include "PlatformerCharacter.h"

APlatformerGameMode::APlatformerGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = APlatformerCharacter::StaticClass();	
}
