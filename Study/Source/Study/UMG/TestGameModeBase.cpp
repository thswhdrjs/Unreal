// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestGameModeBase.h"
#include <Blueprint/UserWidget.h>

void ATestGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	ChangeMenuWidget(StartingWidgetClass);
}

void ATestGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}

	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget(GetWorld(), NewWidgetClass);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}