// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MainLevelScript.h"
#include "CPP_ChainLink.h"

void ACPP_MainLevelScript::InitLevel()
{
    for (int i = 0; i < 100; ++i)
    {
        FVector Location(0.0f, i * 20.0f, 0.0f);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        FActorSpawnParameters SpawnInfo;
        GetWorld()->SpawnActor<ACPP_ChainLink>(Location, Rotation, SpawnInfo);
    }
}
