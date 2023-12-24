#include "CPP_BigLink.h"

ACPP_BigLink::ACPP_BigLink()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BigLinkVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/Big_Link.Big_Link'"));

	if (BigLinkVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(BigLinkVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0, 10.0, 10.0));
	}
}
