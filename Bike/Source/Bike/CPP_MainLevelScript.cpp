// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MainLevelScript.h"
#include "CPP_BigLink.h"
#include "CPP_SmallLink.h"

void ACPP_MainLevelScript::InitLevel()
{
    for (int i = 0; i < 100; ++i)
    {
        FVector Location(0.0f, i * 40.0f, 0.0f);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        FActorSpawnParameters SpawnInfo;
        GetWorld()->SpawnActor<ACPP_BigLink>(Location, Rotation, SpawnInfo);

        Location = FVector(0.0f, 20.0 + i * 40.0f, 0.0f);
        GetWorld()->SpawnActor<ACPP_SmallLink>(Location, Rotation, SpawnInfo);
    }
}
