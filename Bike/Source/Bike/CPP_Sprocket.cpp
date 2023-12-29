#include "CPP_Sprocket.h"


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

	//LastLinearBias = 2 * Radius * sin((LastDeltaRotation * PI / 180.0) / 2.0);
	LastLinearBias = 2 * PI * Radius / 360.0 * LastDeltaRotation; //Arc length

	AddActorWorldRotation(FRotator(0.0, 0.0, LastDeltaRotation * (1 + 2.8 * PI / pow(Radius,2.0))));
}

double ACPP_Sprocket::GetLastDeltaRotation() const
{
	return LastDeltaRotation;
}

double ACPP_Sprocket::GetLastLinearBias() const
{
	return LastLinearBias;
}

double ACPP_Sprocket::GetRadius() const
{
	return Radius;
}

FVector ACPP_Sprocket::GetCenterLocation() const
{
	return GetActorLocation();
}

int ACPP_Sprocket::GetTeethCount() const
{
	return TeethCount;
}

double ACPP_Sprocket::GetAngularVelocity() const
{
	return AngularVelocity;
}


void ACPP_Sprocket::SetAngularVelocity(double Value) 
{
	AngularVelocity = Value;
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

