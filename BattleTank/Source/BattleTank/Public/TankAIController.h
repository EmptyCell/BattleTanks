// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Classes/AIController.h"
#include "TankAIController.generated.h"

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	// How close can the AI tank get
	UPROPERTY(EditDefaultsOnly, Category = "Navigation")
	float AcceptanceRadius = 7000;

private:
	void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
};
