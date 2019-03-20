// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "TankBattle.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Possesed tank: %s"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("It works fam: %s"), *(ControlledTank->GetName()));
	}
}

ATank*ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}