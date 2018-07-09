// Fill out your copyright notice in the Description page of Project Settings.

#include "CBA_PlayerController.h"
#include "EngineUtils.h"
#include "PaperSpriteActor.h"

ACBA_PlayerController::ACBA_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	// Both peers should use same camera
	bAutoManageActiveCameraTarget = false;

	// Ticking
	PrimaryActorTick.bCanEverTick = true;
}

void ACBA_PlayerController::BeginPlay() {
	// Parent call
	Super::BeginPlay();

	// This is for the main game! -- note it is FInputModeGameOnly
	FInputModeGameOnly InputModeData;
	InputModeData.SetConsumeCaptureMouseDown(false);
	SetInputMode(InputModeData);
	bShowMouseCursor = true;
}

void ACBA_PlayerController::Tick(float DeltaSeconds) {
	// Parent call
	Super::Tick(DeltaSeconds);
}


