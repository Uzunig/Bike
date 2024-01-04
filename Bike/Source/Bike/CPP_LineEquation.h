// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CPP_LineEquation.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BIKE_API UCPP_LineEquation : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void InitializeTwoPoints(FVector2D Point1, FVector2D Point2);

	UFUNCTION(BlueprintCallable)
	void InitializeTangentTwoCircles(double Radius1, FVector2D Center1, double Radius2, FVector2D Center2);

	UFUNCTION(BlueprintCallable)
	double GetA() const;

	UFUNCTION(BlueprintCallable)
	double GetB() const;

	UFUNCTION(BlueprintCallable)
	double GetC() const;

	UFUNCTION(BlueprintCallable)
	double GetY(double X) const;


	UFUNCTION(Blueprintable)
	double GetAngle() const; //Degrees

	UFUNCTION(Blueprintable)
	FVector2D GetDirectionalVector() const;

	UFUNCTION(Blueprintable)
	FVector2D GetClosestPoint(FVector2D Point) const;

	UFUNCTION(Blueprintable)
	bool IsOnRight(FVector2D Point) const;

protected:
	UPROPERTY(VisibleAnywhere)
	double A = 0.0;

	UPROPERTY(VisibleAnywhere)
	double B = 0.0;

	UPROPERTY(VisibleAnywhere)
	double C = 0.0;

	
};
