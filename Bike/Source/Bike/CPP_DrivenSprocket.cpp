#include "CPP_DrivenSprocket.h"

ACPP_DrivenSprocket::ACPP_DrivenSprocket()
{
	Radius = 50.0;
	AngularVelocity = 20.0;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DrivenSprocketVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/Small_Spocket.Small_Spocket'"));

	if (DrivenSprocketVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(DrivenSprocketVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0, 10.0, 10.0));
	}
}

void ACPP_DrivenSprocket::Update(float DeltaTime)
{
}
