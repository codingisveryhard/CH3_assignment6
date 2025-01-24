// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WarpActor.generated.h"

UCLASS()
class CH3_ASSIGNMENT6_API AWarpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWarpActor();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	FVector StartLocation;		// 초기 위치값 저장
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	FVector MaxWarp;			// 최대 이동거리 설정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	float RepeatTime;

	UFUNCTION(BlueprintCallable, Category = "Plat| Event")
	void Warp();				// 액터의 위치 이동 함수

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
