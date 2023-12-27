#include "CPP_TwoCirclesCommonTangent.h"



void UCPP_TwoCirclesCommonTangent::Initialize(double Radius1, FVector2D Center1, double Radius2, FVector2D Center2)
{

    A = ((Radius2 - Radius1) * Center2.X + Center2.Y * pow(pow(Center2.X, 2.0) + pow(Center2.Y, 2.0) - pow(Radius2 - Radius1, 2.0), 0.5)) / (pow(Center2.X, 2.0) + pow(Center2.Y, 2.0));
    B = ((Radius2 - Radius1) * Center2.Y - Center2.X * pow(pow(Center2.X, 2.0) + pow(Center2.Y, 2.0) - pow(Radius2 - Radius1, 2.0), 0.5)) / (pow(Center2.X, 2.0) + pow(Center2.Y, 2.0));
    C = Radius1; //- (A * Center1.X + B * Center1.Y);

    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("C = %f"), C));
    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("B = %f"), B));
    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Cyan, FString::Printf(TEXT("A = %f"), A));
    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 20.0f, FColor::Yellow, TEXT("Common tangent line Ax + By + C = 0:"));

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

double UCPP_TwoCirclesCommonTangent::GetAngle() const
{
    double Result = atan(-A / B) * 180.0 / PI;
    return Result;
}

FVector2D UCPP_TwoCirclesCommonTangent::GetDirectionalVector() const
{
    FVector2D Result = FVector2D(B, -A);
    Result.Normalize();
    return Result;
}

FVector2D UCPP_TwoCirclesCommonTangent::GetClosestPoint(FVector2D Point) const
{
    double X = (B * (B * Point.X - A * Point.Y) - A * C) / (pow(A, 2.0) + pow(B, 2.0));
    double Y = (A * (-B * Point.X + A * Point.Y) - B * C) / (pow(A, 2.0) + pow(B, 2.0));

    return FVector2D(X, Y);
}

