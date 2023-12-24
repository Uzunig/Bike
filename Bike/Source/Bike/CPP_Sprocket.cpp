#include "CPP_Sprocket.h"

#include "Math/UnrealMathUtility.h"

ACPP_Sprocket::ACPP_Sprocket()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

}

void ACPP_Sprocket::Update(float DeltaTime)
{
	LastDeltaRotation = AngularVelocity * DeltaTime;
	AddActorWorldRotation(FRotator(0.0, 0.0, LastDeltaRotation));

	LastLinearBias = 2 * Radius * sin((LastDeltaRotation * PI / 180.0) / 2.0);
	//LastLinearBias = 2 * PI * Radius / 360.0 * LastDeltaRotation;
}

double ACPP_Sprocket::GetLastDeltaRotation()
{
	return LastDeltaRotation;
}

double ACPP_Sprocket::GetLastLinearBias()
{
	return LastLinearBias;
}

double ACPP_Sprocket::GetRadius() const
{
	return Radius;
}

FVector ACPP_Sprocket::GetCenterLocation()
{
	return GetActorLocation();
}

double ACPP_Sprocket::GetAngularVelocity() const
{
	return AngularVelocity;
}


void ACPP_Sprocket::BeginPlay()
{
	Super::BeginPlay();
	
}


void ACPP_Sprocket::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Update(DeltaTime);
}

