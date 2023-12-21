#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_SmallLink.generated.h"

UCLASS()
class BIKE_API ACPP_SmallLink : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;
	
public:	
	
	ACPP_SmallLink();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

};
