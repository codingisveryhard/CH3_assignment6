// 3주차 14강 내용을 바탕으로 만들어 보았습니다

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpawnRow.generated.h"


USTRUCT(BlueprintType)
struct FSpawnRow : public FTableRowBase
{ 
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ActorName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnChance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor")
	float MaxMoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor")
	float MinMoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor")
	float MaxDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveActor")
	float MinDistance;
};