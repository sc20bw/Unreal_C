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
}


// Called every frame
void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// Set Current Distance
	CurrentDistance += DeltaTime * speed * MoveDirection;
	if (CurrentDistance >= MaxDistance || CurrentDistance <= 0.f) {
		MoveDirection *= -1;
	}

	// Compute and set current location
	SetRelativeLocation(StartRealtiveLocation + MoveOffsetNorm * CurrentDistance);
}

