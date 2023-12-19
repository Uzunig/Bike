// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_SmallLink.h"

ACPP_SmallLink::ACPP_SmallLink()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ChainVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/Shapes/linck.linck'"));

	if (ChainVisualAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(ChainVisualAsset.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		StaticMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 90.0));
	}
}
