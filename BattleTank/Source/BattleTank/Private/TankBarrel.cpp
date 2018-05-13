// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank/BattleTank.h"
#include "Public/TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Volam funkci Elevate v rychlost: %f"), DegreesPerSecond);
}


