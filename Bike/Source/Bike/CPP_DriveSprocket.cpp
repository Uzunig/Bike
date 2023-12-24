// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_DriveSprocket.h"

ACPP_DriveSprocket::ACPP_DriveSprocket()
{
	Radius = 100.0f;
	AngularVelocity = 10.0;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DriveSprocketVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/Big_Spocket_Body1.Big_Spocket_Body1'"));

	if (DriveSprocketVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(DriveSprocketVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
		StaticMesh->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
	}
}
