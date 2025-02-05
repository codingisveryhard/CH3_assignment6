// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlashActor.generated.h"

UCLASS()
class CH3_ASSIGNMENT6_API AFlashActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlashActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	bool IsVisible;				// 가시 상태인지 확인하는 변수 (충돌에서도 사용)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	float RepeatTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat| Properties")
	float DelayTime;

	UFUNCTION(BlueprintCallable, Category = "Plat| Event")
	void ToggleVisibility();	// 가시 충돌 상태 <=> 비가시 비충돌 상태 전환 함수

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
