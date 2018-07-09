// Fill out your copyright notice in the Description page of Project Settings.

#include "CBA_Pawn.h"


// Sets default values
ACBA_Pawn::ACBA_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACBA_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACBA_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACBA_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

