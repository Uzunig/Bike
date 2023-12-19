// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MainLevelScript.h"
#include "CPP_ChainLink.h"
#include "CPP_BigLink.h"
#include "CPP_SmallLink.h"

void ACPP_MainLevelScript::InitLevel()
{
    for (int i = 0; i < 360; ++i)
    {
        FVector Location(0.0f, 2000.0f * cos(i * 3.14 / 180), 2000.0f * sin(i * 3.14 / 180));
        FRotator Rotation(0.0f, 0.0f, -i + 90.0);
        FActorSpawnParameters SpawnInfo;
        Chain.Add(GetWorld()->SpawnActor<ACPP_BigLink>(Location, Rotation, SpawnInfo));
        /*
        Location = FVector(0.0f, 100.0f * cos(i + 0.5), 100.0f * sin(i + 0.5));
        Chain.Add(GetWorld()->SpawnActor<ACPP_SmallLink>(Location, Rotation, SpawnInfo));*/
    }
}

void ACPP_MainLevelScript::UpdateLevel(float DeltaTime)
{
    for (int i = 0; i < Chain.Num(); ++i)
    {
        
        Chain[i]->SetActorLocation(FVector(0.0f, 2000.0f * cos((i + DeltaTime/1000) * 3.14 / 180), 2000.0f * sin((i + DeltaTime/1000) * 3.14 / 180)));
        
    }
}

void ACPP_MainLevelScript::Tick(float DeltaTime)
{
    UpdateLevel(DeltaTime);
}
