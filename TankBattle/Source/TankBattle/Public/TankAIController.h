// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "AIController.h"
#include "TankAIController.generated.h"

// Forward declarations
class UTankAimingComponent;

/**
 * 
 */
UCLASS()
class TANKBATTLE_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(BlueprintReadOnly)
	UTankAimingComponent* TankAimingComponent = nullptr;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	// How close the AI tank will get to the player
	float AcceptanceRadius = 3000; 
};