#include "CPP_Bike.h"



ACPP_Bike::ACPP_Bike()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACPP_Bike::SetEntryVelocity(double Value)
{
    ChainDrive->SetEntryVelocity(Value);
}

void ACPP_Bike::SpawnParts()
{
    UWorld* CurrentLevel = GEngine->GetCurrentPlayWorld(nullptr);
    if (IsValid(CurrentLevel))
    {
        if (IsValid(ACPP_ChainDrive::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(0.0, 0.0, 0.0); //Need to be at (0,0) //TO DO: Relative from Container class location 
            FRotator Rotation = FRotator(0.0, 0.0, 0.0);//TO DO: Relative from Container class rotation

            ChainDrive = CurrentLevel->SpawnActor<ACPP_ChainDrive>(Location, Rotation, SpawnInfo);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_ChainDrive::StaticClass()"));
        }

        if (IsValid(ACPP_Tire::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(70.0, -572.0, -78.0); //Need to be at (0,0) //TO DO: Relative from Container class location 
            FRotator Rotation = FRotator(0.0, 0.0, 0.0);//TO DO: Relative from Container class rotation

            RearTire = CurrentLevel->SpawnActor<ACPP_Tire>(Location, Rotation, SpawnInfo);
            //RearTire->SetActorHiddenInGame(true);

            Location = FVector(70.0, 909.0, -78.0); //Need to be at (0,0) //TO DO: Relative from Container class location 
            FrontTire = CurrentLevel->SpawnActor<ACPP_Tire>(Location, Rotation, SpawnInfo);
            //FrontTire->SetActorHiddenInGame(true);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_Tire::StaticClass()"));
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: CurrentLevel"));
    }
}

void ACPP_Bike::Update(float DeltaTime)
{
    RearTire->SetActorRotation(RearTire->GetActorRotation() + FRotator(0.0, 0.0, ChainDrive->GetLastDeltaRotation()));
    FrontTire->SetActorRotation(RearTire->GetActorRotation() + FRotator(0.0, 0.0, ChainDrive->GetLastDeltaRotation()));
}


void ACPP_Bike::BeginPlay()
{
	Super::BeginPlay();

    SpawnParts();
	
}

void ACPP_Bike::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    Update(DeltaTime);
}

