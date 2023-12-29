#include "CPP_DriveSprocket.h"

#include "Engine/Engine.h"

ACPP_DriveSprocket::ACPP_DriveSprocket()
{
	TeethCount = 42;
	LinkLength = 15.0;
	Radius = LinkLength / (2.0 * sin((360.0 / TeethCount / 2.0) * PI / 180.0));
	AngularVelocity = 20.0;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DriveSprocketVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/DriveSprocket.DriveSprocket'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> DriveSprocketMaterial(TEXT("/Script/Engine.Material'/Game/Shapes/Steel.Steel'"));

	if (DriveSprocketVisualAsset.Succeeded() && DriveSprocketMaterial.Succeeded())
	{
		StaticMesh->SetStaticMesh(DriveSprocketVisualAsset.Object);
		StaticMesh->SetMaterial(0, DriveSprocketMaterial.Object);

		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0, 10.0, 10.0));
		
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Radius = %f"), Radius));
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Link length = %f"), LinkLength));
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Teeth count = %d"), TeethCount));
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Yellow, TEXT("Drive sprocket:"));
	}
}
