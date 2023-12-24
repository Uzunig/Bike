#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CPP_DriveSprocket.h"
#include "CPP_DrivenSprocket.h"
#include "CPP_BigLink.h"
#include "CPP_SmallLink.h"
#include "CPP_ChainDrive.generated.h"

/**
 * 
 */
UCLASS()
class BIKE_API ACPP_ChainDrive : public AActor
{
	GENERATED_BODY()
	
public:

	ACPP_ChainDrive();

protected:
	UPROPERTY(VisibleAnywhere)
	ACPP_DriveSprocket* DriveSprocket = nullptr;

	UPROPERTY(VisibleAnywhere)
	ACPP_DrivenSprocket* DrivenSprocket = nullptr;

	UPROPERTY(VisibleAnywhere)
	double SprocketDistance = 500.0;

	UPROPERTY(VisibleAnywhere)
	TArray<ACPP_Link*> Chain;

	UPROPERTY(VisibleAnywhere)
	int LinkPairCount = 100;

protected:
	UFUNCTION(BlueprintCallable)
	void Init();

	UFUNCTION(BlueprintCallable)
	void Update(float DeltaTime);

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
};
