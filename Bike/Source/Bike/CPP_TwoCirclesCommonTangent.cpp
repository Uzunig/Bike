#include "CPP_TwoCirclesCommonTangent.h"



void UCPP_TwoCirclesCommonTangent::Initialize(double Radius1, FVector2D Center1, double Radius2, FVector2D Center2)
{
    double R = Radius2 - Radius1;
    double Z = pow(Center2.X, 2.0) + pow(Center2.Y, 2.0);
    double D = Z - pow(R, 2.0);
    D = sqrt(abs(D));
    /*
    A = R * Center2.X + Center2.Y * D / Z;
    B = R * Center2.Y - Center2.X * D / Z;
    */
    A = ((Radius2 - Radius1) * Center2.X + Center2.Y * pow(pow(Center2.X, 2.0) + pow(Center2.Y, 2.0) - pow(Radius2 - Radius1, 2.0), 0.5)) / pow(Center2.X, 2.0) + pow(Center2.Y, 2.0);
    B = ((Radius2 - Radius1) * Center2.Y - Center2.X * pow(pow(Center2.X, 2.0) + pow(Center2.Y, 2.0) - pow(Radius2 - Radius1, 2.0), 0.5)) / pow(Center2.X, 2.0) + pow(Center2.Y, 2.0);
    C = Radius1 - (A * Center1.X + B * Center1.Y);

    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10.0f, FColor::Cyan, FString::Printf(TEXT("A = %f"), A));
    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10.0f, FColor::Cyan, FString::Printf(TEXT("B = %f"), B));
    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10.0f, FColor::Cyan, FString::Printf(TEXT("C = %f"), C));
}

double UCPP_TwoCirclesCommonTangent::GetA() const
{
    return A;
}

double UCPP_TwoCirclesCommonTangent::GetB() const
{
    return B;
}

double UCPP_TwoCirclesCommonTangent::GetC() const
{
    return C;
}

double UCPP_TwoCirclesCommonTangent::GetY(double X) const
{
    double Result = -A / B * X - C / B;
    return Result;
}

FVector2D UCPP_TwoCirclesCommonTangent::GetDirectionalVector() const
{
    FVector2D Result = FVector2D(B, -A);
    Result.Normalize();
    return Result;
}

