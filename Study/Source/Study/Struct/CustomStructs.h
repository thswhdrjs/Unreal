// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomStructs.generated.h"

class TEST_API CustomStructs
{
public:
	CustomStructs();
	~CustomStructs();
};

USTRUCT(Atomic, BlueprintType)
struct FCustomStruct
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 i;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float f;
};