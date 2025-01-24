// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveActor.h"
#include "RotateActor.h"
#include "SpawnManager.generated.h"

UCLASS()
class CH3_ASSIGNMENT6_API ASpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();

protected:
	UPROPERTY(EditAnywhere, Category = "Spawn| Actors")
	TSubclassOf<AMoveActor> MoveActor;
	UPROPERTY(EditAnywhere, Category = "Spawn| Actors")
	TSubclassOf<ARotateActor> RotateActor;

	UPROPERTY(EditAnywhere, Category = "Spawn| Properties")
	int32 CreateNumber;										// 액터가 생성될 숫자
	UPROPERTY(EditAnywhere, Category = "Spawn| Properties")
	float SpawnRange;										// 액터의 생성 범위

	UFUNCTION(BlueprintCallable, Category = "Spawn| Event")
	void RandomSpawn(TSubclassOf<AActor> ActorClass);		// 액터의 클래스를 입력받아 액터를 랜덤으로 생성

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
