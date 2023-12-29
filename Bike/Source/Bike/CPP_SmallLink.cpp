#include "CPP_SmallLink.h"

ACPP_SmallLink::ACPP_SmallLink()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SmallLinkVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/SmallLink.SmallLink'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> SmallLinkMaterial(TEXT("/Script/Engine.Material'/Game/Shapes/Bronze.Bronze'"));

	if (SmallLinkVisualAsset.Succeeded() && SmallLinkMaterial.Succeeded())
	{
		StaticMesh->SetStaticMesh(SmallLinkVisualAsset.Object);
		StaticMesh->SetMaterial(0, SmallLinkMaterial.Object);

		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0, 10.0, 10.0));
	}
}
