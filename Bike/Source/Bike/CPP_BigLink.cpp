// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_BigLink.h"

ACPP_BigLink::ACPP_BigLink()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ChainVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/linck.linck'"));

	if (ChainVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(ChainVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		StaticMesh->SetRelativeRotation(FRotator(90.0f, 0.0f, 90.0));
	}
}
