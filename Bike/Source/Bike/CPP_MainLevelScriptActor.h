// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "CPP_ChainDrive.h"
#include "CPP_MainLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BIKE_API ACPP_MainLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ACPP_ChainDrive* ChainDrive;

protected:
	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void InitLevel();

	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void UpdateLevel(float DeltaTime);
	
};
