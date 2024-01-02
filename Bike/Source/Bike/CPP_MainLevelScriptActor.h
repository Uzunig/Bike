// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "CPP_Bike.h"
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
	ACPP_Bike* Bike;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	double BikerVelocity = 10;

protected:
	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void InitLevel();

	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void SetBikeEntryVelocity(double Value);

	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void UpdateLevel(float DeltaTime);
	
};
