// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MainLevelScript.h"
#include "CPP_ChainLink.h"
#include "CPP_BigLink.h"
#include "CPP_SmallLink.h"


void ACPP_MainLevelScript::InitLevel()
{
    for (int i = 0; i < 180; ++i)
    {
        FVector Location(0.0f, 1300.0f * cos(i * 2 * 3.14 / 180), 1300.0f * sin(i * 2 * 3.14 / 180));
        FRotator Rotation(0.0f, 0.0f, -i * 2 + 90.0);
        FActorSpawnParameters SpawnInfo;
        Chain.Add(GetWorld()->SpawnActor<ACPP_SmallLink>(Location, Rotation, SpawnInfo));
        /*
        Location = FVector(0.0f, 1300.0f * cos((i * 2 + 1) * 3.14 / 180), 1300.0f * sin((i * 2 + 1) * 3.14 / 180));
        Rotation = FRotator(0.0f, 0.0f, (-i * 2 + 1) + 90.0);
        Chain.Add(GetWorld()->SpawnActor<ACPP_BigLink>(Location, Rotation, SpawnInfo));*/
    }
}

void ACPP_MainLevelScript::UpdateLevel(float DeltaTime)
{
    for (int i = 0; i < Chain.Num(); ++i)
    {
        FVector Direction = FVector::CrossProduct(Chain[i]->GetActorLocation(), FVector(1.0f, 0.0f, 0.0f));
        Direction.Normalize();
        Chain[i]->SetActorLocation(Chain[i]->GetActorLocation() + Direction * DeltaTime * 100);
        FVector Cross = FVector::CrossProduct(Chain[i]->GetActorLocation(), FVector(1.0f, 0.0f, 0.0f));
        Cross.Normalize();
        FRotator DeltaRotation = FRotator(0.0f, 0.0f, (acos(FVector::DotProduct(Direction, Cross))) * 180 / 3.14);
        Chain[i]->SetActorRelativeRotation(Chain[i]->GetActorRotation() + DeltaRotation);
     
    }
}

void ACPP_MainLevelScript::Tick(float DeltaTime)
{
    UpdateLevel(DeltaTime);
}
