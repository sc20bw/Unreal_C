// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCollectableActor.h"

// Sets default values
AMyCollectableActor::AMyCollectableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the (root) component for rendering
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;

	//Create Collision box
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(StaticMesh);
}

void AMyCollectableActor::Jump()
{
	//Make sure jump happens once
	if (!IsLaunched) {
		// Execute jump using the physics system
		StaticMesh->AddImpulse({ 0.f, 0.f, Velocity * 500.f });

		//Initiate object destruction
		SetActorTickEnabled(true);
		IsLaunched = true;
	}
}

// Called when the game starts or when spawned
void AMyCollectableActor::BeginPlay()
{
	Super::BeginPlay();

	//Setup per instance OnComponentOverlap event
	FScriptDelegate DelegateSubcriber;
	DelegateSubcriber.BindUFunction(this, "onComponentBeginOverlap");
	BoxCollision->OnComponentBeginOverlap.Add(DelegateSubcriber);
	
	// Only Tick when necessary
	SetActorTickEnabled(false);
}

void AMyCollectableActor::onComponentBeginOverlap(UBoxComponent* Component, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsLaunched && OtherActor->IsA(ADefaultPawn::StaticClass()))
	{
		Jump();
	}
}

// Called every frame
void AMyCollectableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsLaunched)
	{
		// Decrement livetime
		LiveTime -= DeltaTime;

		if (LiveTime <= 0.f)
		{
			Destroy();
		}
	}
}

