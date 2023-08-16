// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewPortLogActor.h"
#include <Kismet/KismetSystemLibrary.h>

// Sets default values
AViewPortLogActor::AViewPortLogActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AViewPortLogActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AViewPortLogActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Hello 2"));
	UKismetSystemLibrary::PrintString(GetWorld(), TEXT("Hello 3"), true, true, FLinearColor::Green, 2.0f);
}

