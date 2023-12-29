#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "CPP_Sprocket.generated.h"

UCLASS(Blueprintable)
class BIKE_API ACPP_Sprocket : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;
	
	UPROPERTY(VisibleAnywhere)
	double Radius;

	UPROPERTY(VisibleAnywhere)
	int TeethCount;

	UPROPERTY(VisibleAnywhere)
	double LinkLength;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	double AngularVelocity;

	UPROPERTY(VisibleAnywhere)
	double LastDeltaRotation; //Degrees

	UPROPERTY(VisibleAnywhere)
	double LastLinearBias; //linear bias of radius-vector

public:	

	ACPP_Sprocket();

	UFUNCTION(BlueprintCallable)
	virtual void Update(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	double GetLastDeltaRotation() const;

	UFUNCTION(BlueprintCallable)
	double GetLastLinearBias() const;

	UFUNCTION(BlueprintCallable)
	double GetRadius() const;

	UFUNCTION(Blueprintable)
	int GetTeethCount() const;

	UFUNCTION(BlueprintCallable)
	FVector GetCenterLocation() const;

	UFUNCTION(BlueprintCallable)
	double GetAngularVelocity() const;

	UFUNCTION(BlueprintCallable)
	void SetAngularVelocity(double Value);
	

protected:

	virtual void BeginPlay() override;
		
public:	

	virtual void Tick(float DeltaTime) override;

};
