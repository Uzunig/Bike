#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Pedal.generated.h"

UCLASS(Blueprintable)
class BIKE_API ACPP_Pedal : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;
	
public:	
	// Sets default values for this actor's properties
	ACPP_Pedal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
