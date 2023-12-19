// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "Containers/Array.h"
#include "CPP_MainLevelScript.generated.h"

/**
 * 
 */
UCLASS()
class BIKE_API ACPP_MainLevelScript : public ALevelScriptActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> Chain;
protected:

	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void InitLevel();

	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void UpdateLevel(float DeltaTime);
	
public:
	virtual void Tick(float DeltaTime) override;
};
