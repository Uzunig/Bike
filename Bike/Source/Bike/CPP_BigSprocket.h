#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_BigSprocket.generated.h"

UCLASS()
class BIKE_API ACPP_BigSprocket : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;
	
public:	

	ACPP_BigSprocket();

	float GetRadius() const;

protected:

	virtual void BeginPlay() override;

	float Radius = 1500.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
