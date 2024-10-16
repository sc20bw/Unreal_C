// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MoveComponent.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveComponentReachEndPointSignature, bool, IsTopEndPoint);


UCLASS( ClassGroup=(newCppTut), meta=(BlueprintSpawnableComponent) )
class CPPTUT_API UMoveComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoveComponent();

	UFUNCTION(BlueprintCallable)
	void EnableMovement(bool ShouldMove);

	UFUNCTION(BlueprintCallable)
	void ResetMovement();

	UFUNCTION(BlueprintCallable)
	void SetMoveDirection(int Direction);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	friend class FMoveComponentVisualizer;

	// Offset
	UPROPERTY(EditAnywhere)
	FVector MoveOffset;

	// Speed
	UPROPERTY(EditAnywhere)
	float speed = 1.f;

	// Enables component movement
	UPROPERTY(EditAnywhere)
	bool MoveEnable = true;

	// On Extreme reached event
	UPROPERTY(BlueprintAssignable)
	FOnMoveComponentReachEndPointSignature OnEndPointReached;

	// Computed Locations
	FVector StartRealtiveLocation;
	FVector MoveOffsetNorm;
	float MaxDistance;
	float CurrentDistance;
	int MoveDirection = 1.f;

		
};
