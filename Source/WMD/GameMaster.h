// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GameMaster.generated.h"

UCLASS()
class WMD_API AGameMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameMaster();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	TArray<AAction*> listAction;

	TArray<AAction*> stack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	TArray<ATele*> teles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
	EStateEnum StateEnum;

	UFUNCTION(BlueprintCallable, Category = Gameplay)
	void CreerAction(EStateEnum theState);

	AAction* RecupererAction(EStateEnum theState);

	void InitActions();
};
