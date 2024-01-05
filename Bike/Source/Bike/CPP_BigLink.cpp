#include "CPP_BigLink.h"

ACPP_BigLink::ACPP_BigLink()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BigLinkVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/BigLink.BigLink'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> BigLinkMaterial(TEXT("/Script/Engine.Material'/Game/Shapes/Highlight3.Highlight3'"));
	  
	if (BigLinkVisualAsset.Succeeded() && BigLinkMaterial.Succeeded())
	{
		StaticMesh->SetStaticMesh(BigLinkVisualAsset.Object);
		StaticMesh->SetMaterial(0, BigLinkMaterial.Object);

		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0, 10.0, 10.0));
	}
}
