// 3주차 14강 내용을 바탕으로 만들어 보았습니다 (작동은 확인, 실제 사용X)(랜덤 위치 생성만 적용, 내부 변수 변경X)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnRow.h"
#include "SpawnActor.generated.h"

class UBoxComponent;

UCLASS()
class CH3_ASSIGNMENT6_API ASpawnActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	USceneComponent* Scene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	UStaticMeshComponent* SpawningCylinder;			// 원통형 모양으로 만들어보고자 한다

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	UDataTable* ActorDataTable;

	FSpawnRow* GetRandomActor() const;

	float GetCylinderRadius(UStaticMeshComponent* CylinderMesh);

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SpawnRandomActor();
	FVector GetRandomSpawnLocation();
	void SpawningActor(TSubclassOf<AActor> ActorClass);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	int32 CreateNumber;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
