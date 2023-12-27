#include "CPP_DriveSprocket.h"

ACPP_DriveSprocket::ACPP_DriveSprocket()
{
	TeethCount = 42;
	LinkLength = 15.0;
	Radius = LinkLength / (2.0 * sin((360.0 / TeethCount / 2.0) * PI / 180.0));
	AngularVelocity = 100.0;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DriveSprocketVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/Big_Spocket_Body1.Big_Spocket_Body1'"));

	if (DriveSprocketVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(DriveSprocketVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
	}

	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Radius = %f"), Radius));
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Link length = %f"), LinkLength));
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Teeth count = %d"), TeethCount));
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Yellow, TEXT("Drive sprocket:"));
}
