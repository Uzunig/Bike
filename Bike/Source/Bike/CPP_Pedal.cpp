#include "CPP_Pedal.h"


// Sets default values
ACPP_Pedal::ACPP_Pedal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PedalVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/BmxPedal.BmxPedal'"));

	if (PedalVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(PedalVisualAsset.Object);

		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(5.0, 5.0, 5.0));
	}
}


void ACPP_Pedal::BeginPlay()
{
	Super::BeginPlay();
	
}


void ACPP_Pedal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

