// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/BoxComponent.h"
#include "GameFramework/DefaultPawn.h"

#include "MyCollectableActor.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJumpTriggerSignature, AActor*, OtherActor, UPrimitiveComponent*, OtherComp);

UCLASS()
class CPPTUT_API AMyCollectableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCollectableActor();

	UFUNCTION(BlueprintCallable)
	void Jump();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when actor hits the collider
	UFUNCTION()
	void onComponentBeginOverlap(class UBoxComponent* Component, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LiveTime = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* TriggerClass = ADefaultPawn::StaticClass();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Static mesh for rendering
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* BoxCollision;

	UPROPERTY(BlueprintAssignable)
	FOnJumpTriggerSignature OnJumpTrigger;

	bool IsLaunched = false;

};
