#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "Containers/Array.h"
#include "CPP_MainLevelScriptActor.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class BIKE_API ACPP_MainLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	float StepLength = 20;

	UPROPERTY(VisibleAnywhere)
	AActor* BigSprocket;

	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> Chain;

	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void InitLevel();

	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void UpdateLevel(float DeltaTime);

public:
	virtual void Tick(float DeltaTime) override;

};
