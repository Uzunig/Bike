// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_SmallLink.h"

// Sets default values
ACPP_SmallLink::ACPP_SmallLink()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SmallLinkVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/Small_Link.Small_Link'"));

	if (SmallLinkVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(SmallLinkVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		StaticMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0f, 10.0f, 10.0f));
	}
}

// Called when the game starts or when spawned
void ACPP_SmallLink::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_SmallLink::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

