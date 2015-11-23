// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Tele.generated.h"

UCLASS()
class WMD_API ATele : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATele();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	EStateEnum currentAction;

	EStateEnum prevAction;

	void RandomVideo();
	
};
