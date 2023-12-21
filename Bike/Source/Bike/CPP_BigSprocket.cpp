#include "CPP_BigSprocket.h"


ACPP_BigSprocket::ACPP_BigSprocket()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BigSprocketVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/Big_Spocket.Big_Spocket'"));

	if (BigSprocketVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(BigSprocketVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		StaticMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0));
		//StaticMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

float ACPP_BigSprocket::GetRadius() const
{
	return Radius;
}


void ACPP_BigSprocket::BeginPlay()
{
	Super::BeginPlay();
	
}


void ACPP_BigSprocket::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

