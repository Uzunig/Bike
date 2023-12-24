#pragma once

#include "CoreMinimal.h"
#include "CPP_Sprocket.h"
#include "CPP_DrivenSprocket.generated.h"

/**
 * 
 */
UCLASS()
class BIKE_API ACPP_DrivenSprocket : public ACPP_Sprocket
{
	GENERATED_BODY()

public:
	ACPP_DrivenSprocket();

	virtual void Update(float DeltaTime) override;
	
};
