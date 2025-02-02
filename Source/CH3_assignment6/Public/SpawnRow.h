// 3주차 14강 내용을 바탕으로 만들어 보았습니다 (작동은 확인, 실제 사용X)(랜덤 위치 생성만 적용, 내부 변수 변경X)

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

};