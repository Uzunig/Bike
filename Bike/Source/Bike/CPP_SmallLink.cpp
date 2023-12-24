#include "CPP_SmallLink.h"

ACPP_SmallLink::ACPP_SmallLink()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SmallLinkVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/Small_Link.Small_Link'"));

	if (SmallLinkVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(SmallLinkVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0, 10.0, 10.0));
	}
}
