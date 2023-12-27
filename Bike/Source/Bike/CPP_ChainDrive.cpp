#include "CPP_ChainDrive.h"

#include "Math/UnrealMathUtility.h"


ACPP_ChainDrive::ACPP_ChainDrive()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

void ACPP_ChainDrive::SpawnSprockets()
{
    UWorld* CurrentLevel = GEngine->GetCurrentPlayWorld(nullptr);
    if (IsValid(CurrentLevel))
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("CurrentLevel is faund"));
        if (IsValid(ACPP_DriveSprocket::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(0.0, 0.0, 0.0); //TO DO: Relative from Container class location 
            FRotator Rotation = FRotator(0.0, 0.0, 0.0);//TO DO: Relative from Container class rotation

            DriveSprocket = CurrentLevel->SpawnActor<ACPP_DriveSprocket>(Location, Rotation, SpawnInfo);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_DriveSprocket::StaticClass()"));
        }

        if (IsValid(ACPP_DrivenSprocket::StaticClass()))
        {
            FActorSpawnParameters SpawnInfo;
            FVector Location = FVector(0.0, -1 * SprocketDistance, 0.0); //TO DO: Relative from Container class location 
            FRotator Rotation = FRotator(0.0, 0.0, 0.0);//TO DO: Relative from Container class rotation

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
        CommonTangent = NewObject<UCPP_TwoCirclesCommonTangent>(UCPP_TwoCirclesCommonTangent::StaticClass());

        CommonTangent->Initialize(-DriveSprocket->GetRadius(), FVector2D(DriveSprocket->GetCenterLocation().Y, DriveSprocket->GetCenterLocation().Z)
            , -DrivenSprocket->GetRadius(), FVector2D(DrivenSprocket->GetCenterLocation().Y, DrivenSprocket->GetCenterLocation().Z));

        DirectionalVectorTo = CommonTangent->GetDirectionalVector();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: UCPP_TwoCirclesCommonTangent::StaticClass()"));
    }

}

void ACPP_ChainDrive::SpawnLinks()
{
    UWorld* CurrentLevel = GEngine->GetCurrentPlayWorld(nullptr);
    if (IsValid(CurrentLevel))
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("CurrentLevel is faund"));
        for (int i = 0; i < LinkPairCount / 2; ++i)
        {
            if (IsValid(ACPP_BigLink::StaticClass()) && (CommonTangent != nullptr))
            {
                FActorSpawnParameters SpawnInfo;
                double Y = -1000.0 + (i * 2 + 1) * 15.0;
                double Z = CommonTangent->GetY(Y);
                
                FVector Location = FVector(0.0, Y, Z); //TO DO: Relative from Container class location 
                FRotator Rotation = FRotator(0.0, 0.0, 0.0);//TO DO: Relative from Container class rotation
                Chain.Add(CurrentLevel->SpawnActor<ACPP_BigLink>(Location, Rotation, SpawnInfo));
            }
            else
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_BigLink::StaticClass())"));
            }
            if (IsValid(ACPP_SmallLink::StaticClass()) && (CommonTangent != nullptr))
            {
                FActorSpawnParameters SpawnInfo;
                double Y = -1000.0 + (i * 2) * 15.0;
                double Z = CommonTangent->GetY(Y);
                
                FVector Location = FVector(0.0, Y, Z);  //TO DO: Relative from Container class location 
                FRotator Rotation = FRotator(0.0, 0.0, 0.0);//TO DO: Relative from Container class rotation
                Chain.Add(CurrentLevel->SpawnActor<ACPP_SmallLink>(Location, Rotation, SpawnInfo));
            }
            else
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: ACPP_SmallLink::StaticClass()"));
            }
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Is not valid: CurrentLevel"));
    }
}

void ACPP_ChainDrive::Update(float DeltaTime)
{
    for (int i = 0; i < Chain.Num(); ++i)
    {
        Chain[i]->SetActorLocation(Chain[i]->GetActorLocation() + FVector(0.0, DirectionalVectorTo.X, DirectionalVectorTo.Y) * DriveSprocket->GetLastLinearBias());
        Chain[i]->SetActorRotation(Chain[i]->GetActorRotation() + FRotator(0.0, 0.0, 0.0));
        /*
        if (Chain[i]->GetActorLocation().Y > DriveSprocket->GetCenterLocation().Y)
        {
            FVector PreviousRadiusVector = Chain[i]->GetActorLocation() - DriveSprocket->GetCenterLocation();
            FVector NewRadiusVector = PreviousRadiusVector.RotateAngleAxis(DriveSprocket->GetLastDeltaRotation(), FVector(1.0, 0.0, 0.0));
            DeltaLocation = PreviousRadiusVector - NewRadiusVector;

            Chain[i]->SetActorLocation(Chain[i]->GetActorLocation() + FVector(0.0, DriveSprocket->GetLastLinearBias(), 0.0));
            Chain[i]->SetActorRotation(Chain[i]->GetActorRotation() + FRotator(0.0, 0.0, DriveSprocket->GetLastDeltaRotation()));
        }
        else if (Chain[i]->GetActorLocation().Y <= DrivenSprocket->GetCenterLocation().Y)
        {
            FVector PreviousRadiusVector = Chain[i]->GetActorLocation() - DrivenSprocket->GetCenterLocation();
            FVector NewRadiusVector = PreviousRadiusVector.RotateAngleAxis(DrivenSprocket->GetLastDeltaRotation(), FVector(1.0, 0.0, 0.0));
            DeltaLocation = PreviousRadiusVector - NewRadiusVector;
            Chain[i]->SetActorLocation(Chain[i]->GetActorLocation() + DeltaLocation);
            Chain[i]->SetActorRotation(Chain[i]->GetActorRotation() + FRotator(0.0, 0.0, DrivenSprocket->GetLastDeltaRotation()));
        }
        else
        {
            DeltaLocation = FVector(0.0, DeltaLocation.Length(), 0.0);

            if (Chain[i]->GetActorLocation().Z > DrivenSprocket->GetCenterLocation().Z)
            {
                Chain[i]->SetActorLocation(Chain[i]->GetActorLocation() + DeltaLocation);
                Chain[i]->SetActorRotation(FRotator(0.0, 0.0, 0.0));
            }
            else
            {
                Chain[i]->SetActorLocation(Chain[i]->GetActorLocation() - DeltaLocation);
                Chain[i]->SetActorRotation(FRotator(0.0, 0.0, 180.0));
            }
        }*/
    }
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
