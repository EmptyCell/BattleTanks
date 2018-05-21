// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankAIController.h"
#include "BattleTank/BattleTank.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Public/Tank.h"



void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());
	if (ensure(PlayerTank))
	{
		MoveToActor(PlayerTank, AcceptanceRadius);

		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		ControlledTank->Fire();
	}
}
