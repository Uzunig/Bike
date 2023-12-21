// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_BigLink.h"

// Sets default values
ACPP_BigLink::ACPP_BigLink()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BigLinkVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/Big_Link.Big_Link'"));

	if (BigLinkVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(BigLinkVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		StaticMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(10.0f, 10.0f, 10.0f));
	}
}

// Called when the game starts or when spawned 
void ACPP_BigLink::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_BigLink::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

