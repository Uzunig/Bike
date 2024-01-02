#include "CPP_MainLevelScriptActor.h"


void ACPP_MainLevelScriptActor::InitLevel()
{
    UWorld* CurrentLevel = GetWorld();
    if (IsValid(CurrentLevel))
    {
        if (IsValid(ACPP_Bike::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(0.0, 0.0, 0.0); 
            FRotator Rotation = FRotator(0.0, 0.0, 0.0);

            Bike = CurrentLevel->SpawnActor<ACPP_Bike>(Location, Rotation, SpawnInfo);
        }
    }
}

void ACPP_MainLevelScriptActor::SetBikeEntryVelocity(double Value)
{
    Bike->SetEntryVelocity(Value);
}


void ACPP_MainLevelScriptActor::UpdateLevel(float DeltaTime)
{

}
