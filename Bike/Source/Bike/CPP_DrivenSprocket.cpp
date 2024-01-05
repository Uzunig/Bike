#include "CPP_DrivenSprocket.h"

#include "Engine/Engine.h"

ACPP_DrivenSprocket::ACPP_DrivenSprocket()
{	
	TeethCount = 22;
	LinkLength = 15.0;
	Radius = LinkLength / (2.0 * sin((360.0 / TeethCount / 2.0) * PI / 180.0));
	AngularVelocity = 0.0;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DrivenSprocketVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/DrivenSprocket.DrivenSprocket'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> DrivenSprocketMaterial(TEXT("/Script/Engine.Material'/Game/Shapes/Highlight2.Highlight2'"));

	if (DrivenSprocketVisualAsset.Succeeded() && DrivenSprocketMaterial.Succeeded())
	{
		StaticMesh->SetStaticMesh(DrivenSprocketVisualAsset.Object);
		StaticMesh->SetMaterial(0, DrivenSprocketMaterial.Object);

		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, -3.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0, 10.0, 10.0));
		/*
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Radius = %f"), Radius));
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Link length = %f"), LinkLength));
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("Teeth count = %d"), TeethCount));
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Yellow, TEXT("Driven sprocket:"));*/
	}
}