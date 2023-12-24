#include "CPP_Link.h"


ACPP_Link::ACPP_Link()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

}

void ACPP_Link::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACPP_Link::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

