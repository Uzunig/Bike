#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CPP_DriveSprocket.h"
#include "CPP_DrivenSprocket.h"
#include "CPP_BigLink.h"
#include "CPP_SmallLink.h"
#include "CPP_TwoCirclesCommonTangent.h"
#include "CPP_ChainDrive.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BIKE_API ACPP_ChainDrive : public AActor
{
	GENERATED_BODY()
	
public:

	ACPP_ChainDrive();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ACPP_DriveSprocket* DriveSprocket = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ACPP_DrivenSprocket* DrivenSprocket = nullptr;

	UPROPERTY(VisibleAnywhere)
	double LinkLength = 15.0;

	UPROPERTY(VisibleAnywhere)
	int LinkPairCount = 50;

	UPROPERTY(VisibleAnywhere)
	double ChainLength;

	UPROPERTY(VisibleAnywhere)
	double SprocketDistance;

	UPROPERTY(VisibleAnywhere)
	UCPP_TwoCirclesCommonTangent* CommonTangent1 = nullptr;

	UPROPERTY(VisibleAnywhere)
	UCPP_TwoCirclesCommonTangent* CommonTangent2 = nullptr;

	UPROPERTY(VisibleAnywhere)
	FVector2D TouchPointDrivenSprocket1;

	UPROPERTY(VisibleAnywhere)
	FVector2D TouchPointDriveSprocket1;

	UPROPERTY(VisibleAnywhere)
	FVector2D TouchPointDrivenSprocket2;

	UPROPERTY(VisibleAnywhere)
	FVector2D TouchPointDriveSprocket2;

	UPROPERTY(VisibleANywhere)
	FVector2D DirectionalVectorFrom;


	UPROPERTY(VisibleAnywhere)
	TArray<ACPP_Link*> Chain;

protected:
	UFUNCTION(BlueprintCallable)
	void SpawnSprockets();

	UFUNCTION(BlueprintCallable)
	void Init();

	UFUNCTION(BlueprintCallable)
	void SpawnLinks();

	UFUNCTION(BlueprintCallable)
	void Update(float DeltaTime);

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
};
