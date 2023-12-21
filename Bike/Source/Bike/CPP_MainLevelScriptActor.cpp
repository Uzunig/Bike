#include "CPP_MainLevelScriptActor.h"

#include "CPP_BigLink.h"
#include "CPP_SmallLink.h"
#include "CPP_BigSprocket.h"


void ACPP_MainLevelScriptActor::InitLevel()
{
    FActorSpawnParameters SpawnInfo;

    FVector Location = FVector(0.0f, 0.0f, 0.0f);
    FRotator Rotation = FRotator(0.0f, 0.0f, 360.0f / 42.0f / 2.0f);
    BigSprocket = GetWorld()->SpawnActor<ACPP_BigSprocket>(Location, Rotation, SpawnInfo);

    for (int i = 0; i < 21; ++i)
    {
        Location = FVector(0.0f, 100 * cos((i * 2) * (360.0f / 42.0f) * 3.14 / 180), 100 * sin((i * 2) * (360.0f / 42.0f) * 3.14 / 180));
        Rotation = FRotator(0.0f, 0.0f, (-(i * 2) * (360.0f / 42.0f)) + 90.0f);

        Chain.Add(GetWorld()->SpawnActor<ACPP_SmallLink>(Location, Rotation, SpawnInfo));

        
        Location = FVector(0.0f, 100.0f * cos((i * 2 + 1) * (360.0f / 42.0f) * 3.14 / 180), 100.0f * sin((i * 2 + 1) * (360.0f / 42.0f) * 3.14 / 180));
        Rotation = FRotator(0.0f, 0.0f, (-(i * 2 + 1) * (360.0f / 42.0f)) + 90.0f);
        Chain.Add(GetWorld()->SpawnActor<ACPP_BigLink>(Location, Rotation, SpawnInfo));
    }
}

void ACPP_MainLevelScriptActor::UpdateLevel(float DeltaTime)
{
    FRotator DeltaRotation;

    for (int i = 0; i < Chain.Num(); ++i)
    {
        FVector PreviousDirection = FVector::CrossProduct(Chain[i]->GetActorLocation(), FVector(1.0f, 0.0f, 0.0f));
        PreviousDirection.Normalize();

        Chain[i]->SetActorLocation(Chain[i]->GetActorLocation() + PreviousDirection * DeltaTime * 10);

        FVector NewDirection = FVector::CrossProduct(Chain[i]->GetActorLocation(), FVector(1.0f, 0.0f, 0.0f));
        NewDirection.Normalize();

        DeltaRotation = FRotator(0.0f, 0.0f, (acos(FVector::DotProduct(PreviousDirection, NewDirection))) * 180 / 3.14); //TO DO: To calculate only once for all links
        Chain[i]->SetActorRotation(Chain[i]->GetActorRotation() + DeltaRotation);
    }

    BigSprocket->SetActorRotation(BigSprocket->GetActorRotation() + DeltaRotation);
}

void ACPP_MainLevelScriptActor::Tick(float DeltaTime)
{
    UpdateLevel(DeltaTime);
}
