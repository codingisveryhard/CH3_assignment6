// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"

// Sets default values
ASpawnManager::ASpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	CreateNumber = 10;
	SpawnRange = 1000.0f;
}

void ASpawnManager::RandomSpawn(TSubclassOf<AActor> ActorClass) {
	UWorld* World = GetWorld();
	for (int32 i = 0; i < CreateNumber; i++) {
		FVector RandomRange{ FMath::FRandRange(-SpawnRange, SpawnRange), FMath::FRandRange(-SpawnRange, SpawnRange), FMath::FRandRange(0.0f, SpawnRange) };
		FRotator RandomRotate{ 0.0f, FMath::FRandRange(0.0f, 360.0f), 0.0f };
		AActor* SpawnActor = World->SpawnActor<AActor>(ActorClass, RandomRange, RandomRotate);

		if (SpawnActor) {
			AMoveActor* MoveActorInstance = Cast<AMoveActor>(SpawnActor);
			if (MoveActorInstance) {
				MoveActorInstance->MoveSpeed = FVector{ FMath::FRandRange(50.0f, 200.0f), 0.0f, 0.0f };
				MoveActorInstance->MaxDistance = static_cast<float>(FMath::FRandRange(MoveActorInstance->MoveSpeed.X, 400.0f));
			}
			ARotateActor* RotateActorInstance = Cast<ARotateActor>(SpawnActor);
			if (RotateActorInstance) {
				RotateActorInstance->RotationSpeed = FMath::FRandRange(100.0f, 400.0f);
			}
		}
	}
}

// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();
	if (MoveActor) {				// 액터가 배치되어 있으면 작동
		RandomSpawn(MoveActor);		// 움직이는 액터 생성
	}
	if (RotateActor) {				// 액터가 배치되어 있으면 작동
		RandomSpawn(RotateActor);	// 회전하는 액터 생성
	}
	if (MovingActor) {				// 액터가 배치되어 있으면 작동
		RandomSpawn(MovingActor);	// 공전하는 액터 생성
	}
	if (WarpActor) {				// 액터가 배치되어 있으면 작동
		RandomSpawn(WarpActor);		// 위치가 바뀌는 액터 생성
	}
	if (FlashActor) {				// 액터가 배치되어 있으면 작동
		RandomSpawn(FlashActor);	// 나타났다 사라지는 액터 생성
	}
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

