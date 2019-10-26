// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Engine/World.h"
#include "TankBattle.h"
#include "Tank.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

}
 
// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank)
	{
		//TODO Move towards the player
		MoveToActor(PlayerTank, AcceptanceRadius); // TODO check radius is in cm

		// Aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		ControlledTank->Fire(); //TODO limit firing rate
	}
}