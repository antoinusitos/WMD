// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Data.generated.h"

UENUM(BlueprintType)
enum class EStateEnum : uint8
{
	SE_Room1 	UMETA(DisplayName = "Room1"),
	SE_Room2	UMETA(DisplayName = "Room2"),
	SE_Room3	UMETA(DisplayName = "Room3"),
	SE_Sommeil	UMETA(DisplayName = "Sommeil"),
	SE_Calme	UMETA(DisplayName = "Calme"),
	SE_Idle		UMETA(DisplayName = "Idle"),
};

UCLASS()
class WMD_API AData : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AData();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
