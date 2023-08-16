// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Test.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TotalDamage = 200;
	DamageTimeInSeconds = 1.0f;

	str = TEXT("Test");
}

void AMyActor::CallFromCpp_Implementation()
{
	str.Append(TEXT("_Implementation"));
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	CallFromCpp();

	UE_LOG(LogTemp, Error, TEXT("Log Message"));
	UE_LOG(LogTemp, Warning, TEXT("Warning Message"));
	UE_LOG(LogTemp, Display, TEXT("Display Message"));

	UE_LOG(LogTemp, Display, TEXT("dd"));

	UE_LOG(MyLogCategory, Log, TEXT("My Category Log"));

	FString CharacterName = TEXT("Hiwer");
	UE_LOG(LogTemp, Log, TEXT("Character name = %s"), *CharacterName);

	bool isAttacable = true;
	UE_LOG(LogTemp, Log, TEXT("Is Attackable = %s"), isAttacable ? TEXT("true") : TEXT("false"));

	int hp = 100;
	UE_LOG(LogTemp, Log, TEXT("HP = %d"), hp);

	float AttackSpped = 1.0f;
	UE_LOG(LogTemp, Log, TEXT("Attack Spped = %f"), AttackSpped);

	FVector CharacterPosition = GetActorLocation();
	UE_LOG(LogTemp, Log, TEXT("Position = %s"), *CharacterPosition.ToString());
	UE_LOG(LogTemp, Log, TEXT("Character Name = %s, HP = %d, Attack Speed = %f"), *CharacterName, hp, AttackSpped);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::FunctionName()
{
	//µø¿€


}

void AMyActor::CalculateDPS()
{
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}

void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();
	CalculateDPS();
}

void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	CalculateDPS();
	Super::PostEditChangeProperty(PropertyChangedEvent);
}

