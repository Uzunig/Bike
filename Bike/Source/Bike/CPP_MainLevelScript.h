// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "CPP_MainLevelScript.generated.h"

/**
 * 
 */
UCLASS()
class BIKE_API ACPP_MainLevelScript : public ALevelScriptActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void InitLevel();
};
