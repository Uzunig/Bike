#include "CPP_ChainDrive.h"

#include "Math/UnrealMathUtility.h"


ACPP_ChainDrive::ACPP_ChainDrive()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

double ACPP_ChainDrive::GetLastDeltaRotation() const
{
    return LastDeltaRotation;
}

void ACPP_ChainDrive::SetEntryVelocity(double Value)
{
    DriveSprocket->SetAngularVelocity(Value);
}

void ACPP_ChainDrive::SpawnSprockets()
{
    UWorld* CurrentLevel = GEngine->GetCurrentPlayWorld(nullptr);
    if (IsValid(CurrentLevel))
    {
        if (IsValid(ACPP_DriveSprocket::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(0.0, 0.0, 0.0); //Need to be at (0,0) //TO DO: Relative from Container class location 
            FRotator Rotation = FRotator(0.0, 0.0, 0.0);//TO DO: Relative from Container class rotation

            DriveSprocket = CurrentLevel->SpawnActor<ACPP_DriveSprocket>(Location, Rotation, SpawnInfo);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_DriveSprocket::StaticClass()"));
        }

        if (IsValid(ACPP_Pedal::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(70.0, 0.0, 0.0); //Need to be at (0,0) //TO DO: Relative from Container class location 
            FRotator Rotation = FRotator(0.0, 0.0, 0.0);//TO DO: Relative from Container class rotation

            Pedal = CurrentLevel->SpawnActor<ACPP_Pedal>(Location, Rotation, SpawnInfo);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_Pedal::StaticClass()"));
        }

        if (IsValid(ACPP_DrivenSprocket::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(0.0, -571.95, -75.0); //TO DO: Relative from Container class location 
            FRotator Rotation = FRotator(0.0, 0.0, -6.0);//TO DO: Relative from Container class rotation

            DrivenSprocket = CurrentLevel->SpawnActor<ACPP_DrivenSprocket>(Location, Rotation, SpawnInfo);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_DrivenSprocket::StaticClass()"));
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: CurrentLevel"));
    }
}

void ACPP_ChainDrive::Init()
{
    if (IsValid(UCPP_TwoCirclesCommonTangent::StaticClass()))
    {
        CommonTangent1 = NewObject<UCPP_TwoCirclesCommonTangent>(UCPP_TwoCirclesCommonTangent::StaticClass());

        CommonTangent1->Initialize(-DriveSprocket->GetRadius(), FVector2D(DriveSprocket->GetCenterLocation().Y, DriveSprocket->GetCenterLocation().Z)
            , -DrivenSprocket->GetRadius(), FVector2D(DrivenSprocket->GetCenterLocation().Y, DrivenSprocket->GetCenterLocation().Z));

        CommonTangent2 = NewObject<UCPP_TwoCirclesCommonTangent>(UCPP_TwoCirclesCommonTangent::StaticClass());

        CommonTangent2->Initialize(DriveSprocket->GetRadius(), FVector2D(DriveSprocket->GetCenterLocation().Y, DriveSprocket->GetCenterLocation().Z)
            , DrivenSprocket->GetRadius(), FVector2D(DrivenSprocket->GetCenterLocation().Y, DrivenSprocket->GetCenterLocation().Z));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: UCPP_TwoCirclesCommonTangent::StaticClass()"));
    }

    ChainLength = 2.0 * LinkLength * LinkPairCount;
    //DrivenSprocket->SetAngularVelocity(DriveSprocket->GetAngularVelocity() * DriveSprocket->GetRadius() / DrivenSprocket->GetRadius());

    TouchPointDrivenSprocket1 = CommonTangent1->GetClosestPoint(FVector2D(DrivenSprocket->GetCenterLocation().Y, DrivenSprocket->GetCenterLocation().Z));
    TouchPointDriveSprocket1 = CommonTangent1->GetClosestPoint(FVector2D(DriveSprocket->GetCenterLocation().Y, DriveSprocket->GetCenterLocation().Z));
    TouchPointDrivenSprocket2 = CommonTangent2->GetClosestPoint(FVector2D(DrivenSprocket->GetCenterLocation().Y, DrivenSprocket->GetCenterLocation().Z));
    TouchPointDriveSprocket2 = CommonTangent2->GetClosestPoint(FVector2D(DriveSprocket->GetCenterLocation().Y, DriveSprocket->GetCenterLocation().Z));
}

void ACPP_ChainDrive::SpawnLinks()
{
    UWorld* CurrentLevel = GEngine->GetCurrentPlayWorld(nullptr);
    if (IsValid(CurrentLevel))
    {
        if (IsValid(ACPP_BigLink::StaticClass()) && IsValid(ACPP_SmallLink::StaticClass()) && (CommonTangent1 != nullptr))
        {
            for (int i = 0; i < LinkPairCount; ++i)
            {
                FActorSpawnParameters SpawnInfo;
                double Y = (TouchPointDrivenSprocket1.X - LinkPairCount * 30.0) + (i * 2 + 1) * 15.0;  
                double Z = CommonTangent1->GetY(DrivenSprocket->GetCenterLocation().Y + 0.00001);

                FVector Location = FVector(0.0, Y, Z); //TO DO: Relative from Container class location 
                FRotator Rotation = FRotator(0.0, 0.0, 0);//TO DO: Relative from Container class rotation
                Chain.Add(CurrentLevel->SpawnActor<ACPP_BigLink>(Location, Rotation, SpawnInfo));

                SpawnInfo;
                Y = (TouchPointDrivenSprocket1.X - LinkPairCount * 30.0) + (i * 2) * 15.0;

                Location = FVector(0.0, Y, Z);  //TO DO: Relative from Container class location 
                Rotation = FRotator(0.0, 0.0, 0);//TO DO: Relative from Container class rotation
                Chain.Add(CurrentLevel->SpawnActor<ACPP_SmallLink>(Location, Rotation, SpawnInfo));
            }
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_BigLink::StaticClass()) or ACPP_SmallLink::StaticClass() "));
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: CurrentLevel"));
    }
}

void ACPP_ChainDrive::Update(float DeltaTime)
{
    DrivenSprocket->SetAngularVelocity(DriveSprocket->GetAngularVelocity() * DriveSprocket->GetRadius() / DrivenSprocket->GetRadius());
    Pedal->SetActorRotation(Pedal->GetActorRotation() + FRotator(0.0, 0.0, DriveSprocket->GetLastDeltaRotation()));
    for (int i = 0; i < Chain.Num(); ++i)
    {
        FVector Locaton = Chain[i]->GetActorLocation();
        //Spawning links
        if ((Locaton.Y <= TouchPointDrivenSprocket1.X) && (Locaton.Z > TouchPointDrivenSprocket1.Y))
        {
            Chain[i]->SetActorLocation(Chain[i]->GetActorLocation() + FVector(0.0, DriveSprocket->GetLastLinearBias(), 0.0));
            Chain[i]->SetActorRotation(FRotator(0.0, 0.0, 0.0));
        }
        else if (   ((Locaton.Y >= TouchPointDrivenSprocket1.X && Locaton.Y <= TouchPointDriveSprocket1.X))
            && ((Locaton.Z >= TouchPointDrivenSprocket1.Y && Locaton.Z <= TouchPointDriveSprocket1.Y)
                || (Locaton.Z <= TouchPointDrivenSprocket1.Y && Locaton.Z >= TouchPointDriveSprocket1.Y)))
        {
            FVector2D CorrectedPosition = CommonTangent1->GetClosestPoint(FVector2D(Chain[i]->GetActorLocation().Y, Chain[i]->GetActorLocation().Z));
            Chain[i]->SetActorLocation(FVector(0.0, CorrectedPosition.X, CorrectedPosition.Y) + FVector(0.0, CommonTangent1->GetDirectionalVector().X, CommonTangent1->GetDirectionalVector().Y) * DriveSprocket->GetLastLinearBias());
            Chain[i]->SetActorRotation(FRotator(0.0, 0.0, -CommonTangent1->GetAngle()));
        }
        else if ((Locaton.Y > TouchPointDriveSprocket1.X && Locaton.Z > TouchPointDriveSprocket2.Y)
            || (Locaton.Y > TouchPointDriveSprocket2.X && Locaton.Z < TouchPointDriveSprocket1.Y))
        {
            FVector PreviousRadiusVector = Chain[i]->GetActorLocation() - DriveSprocket->GetCenterLocation();
            PreviousRadiusVector.Normalize();
            PreviousRadiusVector = PreviousRadiusVector * DriveSprocket->GetRadius();
            FVector NewRadiusVector = PreviousRadiusVector.RotateAngleAxis(DriveSprocket->GetLastDeltaRotation(), FVector(-1.0, 0.0, 0.0));

            Chain[i]->SetActorLocation(DriveSprocket->GetCenterLocation() + NewRadiusVector);
            Chain[i]->SetActorRotation(Chain[i]->GetActorRotation() + FRotator(0.0, 0.0, DriveSprocket->GetLastDeltaRotation()));
        }
        else if ( ((Locaton.Y >= TouchPointDrivenSprocket2.X) && (Locaton.Y <= TouchPointDriveSprocket2.X))
            && ((Locaton.Z >= TouchPointDrivenSprocket2.Y && Locaton.Z <= TouchPointDriveSprocket2.Y)
                || (Locaton.Z <= TouchPointDrivenSprocket2.Y && Locaton.Z >= TouchPointDriveSprocket2.Y)))
        {
            FVector2D CorrectedPosition = CommonTangent2->GetClosestPoint(FVector2D(Chain[i]->GetActorLocation().Y, Chain[i]->GetActorLocation().Z));
            Chain[i]->SetActorLocation(FVector(0.0, CorrectedPosition.X, CorrectedPosition.Y) + FVector(0.0, -CommonTangent2->GetDirectionalVector().X, -CommonTangent2->GetDirectionalVector().Y) * DriveSprocket->GetLastLinearBias());
            Chain[i]->SetActorRotation(FRotator(0.0, 0.0, -CommonTangent2->GetAngle()));
        }
        else if ((Locaton.Y < TouchPointDrivenSprocket2.X   && Locaton.Z < TouchPointDrivenSprocket1.Y)
              || (Locaton.Y < TouchPointDrivenSprocket1.X   && Locaton.Z > TouchPointDrivenSprocket2.Y))
        {
            FVector PreviousRadiusVector = Chain[i]->GetActorLocation() - DrivenSprocket->GetCenterLocation();
            PreviousRadiusVector.Normalize();
            PreviousRadiusVector = PreviousRadiusVector * DrivenSprocket->GetRadius();
            FVector NewRadiusVector = PreviousRadiusVector.RotateAngleAxis(DrivenSprocket->GetLastDeltaRotation(), FVector(-1.0, 0.0, 0.0));

            Chain[i]->SetActorLocation(DrivenSprocket->GetCenterLocation() + NewRadiusVector);
            Chain[i]->SetActorRotation(Chain[i]->GetActorRotation() + FRotator(0.0, 0.0, DrivenSprocket->GetLastDeltaRotation()));
        }
    }
    LastDeltaRotation = DrivenSprocket->GetLastDeltaRotation();
}

void ACPP_ChainDrive::BeginPlay()
{
    Super::BeginPlay();

    SpawnSprockets();
    Init();
    SpawnLinks();
}


void ACPP_ChainDrive::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    Update(DeltaTime);
}
