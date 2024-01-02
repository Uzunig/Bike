// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Tire.generated.h"

UCLASS(Blueprintable)
class BIKE_API ACPP_Tire : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;
	
public:	
	// Sets default values for this actor's properties
	ACPP_Tire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
