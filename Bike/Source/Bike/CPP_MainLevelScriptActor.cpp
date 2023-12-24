#include "CPP_MainLevelScriptActor.h"


void ACPP_MainLevelScriptActor::InitLevel()
{
    UWorld* CurrentLevel = GetWorld();
    if (IsValid(CurrentLevel))
    {
        if (IsValid(ACPP_ChainDrive::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(0.0, 0.0, 0.0); 
            FRotator Rotation = FRotator(0.0, 0.0, 0.0);

            ChainDrive = CurrentLevel->SpawnActor<ACPP_ChainDrive>(Location, Rotation, SpawnInfo);
        }
    }
}

void ACPP_MainLevelScriptActor::UpdateLevel(float DeltaTime)
{

}
