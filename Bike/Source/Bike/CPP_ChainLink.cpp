// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ChainLink.h"

// Sets default values
ACPP_ChainLink::ACPP_ChainLink()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ChainVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/linck.linck'"));

	if (ChainVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(ChainVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		StaticMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 90.0));
	}
}

// Called when the game starts or when spawned
void ACPP_ChainLink::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_ChainLink::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

