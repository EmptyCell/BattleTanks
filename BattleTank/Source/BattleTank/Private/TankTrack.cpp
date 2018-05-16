// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankTrack.h"
#include "BattleTank/BattleTank.h"
#include "Engine/World.h"

void UTankTrack::SetThrottle(float Throttle)
{
	// TODO Clamp actual throttle value se player can't overdrive
	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}

