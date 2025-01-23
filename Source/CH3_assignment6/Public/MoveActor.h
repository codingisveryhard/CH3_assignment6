// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveActor.generated.h"

UCLASS()
class CH3_ASSIGNMENT6_API AMoveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveActor();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	FVector MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	float MaxDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	FVector StartLocation;

	UFUNCTION(BlueprintCallable, Category = "Plat| Event")
	void Reverse(float X, float DeltaTime);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
