// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Action.generated.h"

UCLASS()
class WMD_API AAction : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAction();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	ATele* tele;

	ATele* nextTele;

	EStateEnum actionType;

	EStateEnum nextActionType;

	void Init(FString theNom, ATele* theTele, EStateEnum type, EStateEnum next, ATele* theNextTele);

	FString nom;
	
};
