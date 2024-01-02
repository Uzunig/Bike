// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Tire.h"

// Sets default values
ACPP_Tire::ACPP_Tire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> TireVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/BmxTire.BmxTire'"));

	if (TireVisualAsset.Succeeded() )
	{
		StaticMesh->SetStaticMesh(TireVisualAsset.Object);
		
		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeScale3D(FVector(5.0, 5.0, 5.0));
	}
	
}

// Called when the game starts or when spawned
void ACPP_Tire::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Tire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

