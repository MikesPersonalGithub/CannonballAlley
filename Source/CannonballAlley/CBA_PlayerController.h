// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CBA_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CANNONBALLALLEY_API ACBA_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
	// Constructors
	ACBA_PlayerController(const FObjectInitializer& ObjectInitializer);

public:

	// Function Overrides
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	
	
};
