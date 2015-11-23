// Fill out your copyright notice in the Description page of Project Settings.

#include "WMD.h"
#include "GameMaster.h"


// Sets default values
AGameMaster::AGameMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameMaster::BeginPlay()
{
	Super::BeginPlay();

	InitActions();
}

// Called every frame
void AGameMaster::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AGameMaster::InitActions()
{
	AAction* Room1Gardien = GetWorld()->SpawnActor<AAction>(AAction::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	Room1Gardien->Init("ROOM1GARDIEN", teles[0], EStateEnum::SE_Room1, EStateEnum::SE_Idle, teles[1]);
	listAction.Add(Room1Gardien);
}

void AGameMaster::CreerAction(EStateEnum theState)
{
	if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("cree une action !")); }
	AAction* theAction = RecupererAction(theState);
	if (theAction != nullptr)
	{
		if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("ACTION AJOUTEE !")); }
		stack.Add(theAction);
	}
	else
	{
		if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PROBLEME RECUPERATION ACTION !!")); }
	}
}

AAction* AGameMaster::RecupererAction(EStateEnum theState)
{
	FString nom = "null";
	switch (theState)
	{
	case EStateEnum::SE_Idle:
		nom = "IDLE";
		break;
	
	case EStateEnum::SE_Room1:
		nom = "ROOM1GARDIEN";
		break;
	}

	if (!nom.Equals("null"))
	{
		for (int32 i = 0; i < listAction.Num(); ++i)
		{
			if (listAction[i]->nom.Equals(nom))
			{
				return listAction[i];
			}
		}
	}
	return nullptr;
}