// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveComponent.h"

// Sets default values for this component's properties
UMoveComponent::UMoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMoveComponent::BeginPlay()
{
	Super::BeginPlay();

	// set start location
	StartRealtiveLocation = GetRelativeLocation();

	MoveOffsetNorm = MoveOffset;
	MoveOffsetNorm.Normalize();
	
	MaxDistance = MoveOffset.Length();

	// Check if ticking is required
	this->SetComponentTickEnabled(MoveEnable);
}


// Assign value and set correct tick enable state
void UMoveComponent::EnableMovement(bool ShouldMove)
{
	MoveEnable = ShouldMove;
	SetComponentTickEnabled(MoveEnable);
}

void UMoveComponent::ResetMovement()
{
	// Clear Distance and reset movement
	CurrentDistance = 0.f;
	SetRelativeLocation(StartRealtiveLocation);
}

void UMoveComponent::SetMoveDirection(int Direction)
{
	MoveDirection = Direction >= 1 ? 1 : -1;
}


// Called every frame
void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// Set Current Distance
	if (MoveEnable) {
		CurrentDistance += DeltaTime * speed * MoveDirection;
		if (CurrentDistance >= MaxDistance || CurrentDistance <= 0.f) {
			// Invert direction
			MoveDirection *= -1;

			//Fire event
			OnEndPointReached.Broadcast(CurrentDistance >= MaxDistance);

			// Clamp Distance
			CurrentDistance = FMath::Clamp(CurrentDistance, 0.f, MaxDistance);
		}
	}

	// Compute and set current location
	SetRelativeLocation(StartRealtiveLocation + MoveOffsetNorm * CurrentDistance);
}

