// Fill out your copyright notice in the Description page of Project Settings.

#include "WMD.h"
#include "Action.h"


// Sets default values
AAction::AAction()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAction::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAction::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AAction::Init(FString theNom, ATele* theTele, EStateEnum type, EStateEnum next, ATele* theNextTele)
{
	nom = theNom;
	tele = theTele;
	nextTele = theNextTele;
	actionType = type;
	nextActionType = next;
}