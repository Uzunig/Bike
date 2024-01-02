// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_ChainDrive.h"
#include "CPP_Tire.h"
#include "CPP_Pedal.h"
#include "CPP_Bike.generated.h"

UCLASS(Blueprintable)
class BIKE_API ACPP_Bike : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Bike();

public:

	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void SetEntryVelocity(double Value);

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ACPP_ChainDrive* ChainDrive;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ACPP_Tire* RearTire = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ACPP_Tire* FrontTire = nullptr;

protected:
	UFUNCTION(BlueprintCallable)
	void SpawnParts();

	UFUNCTION(BlueprintCallable)
	void Update(float DeltaTime);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
