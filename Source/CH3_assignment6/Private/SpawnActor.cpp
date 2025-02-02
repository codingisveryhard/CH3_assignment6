// 3주차 14강 내용을 바탕으로 만들어 보았습니다 (작동은 확인, 실제 사용X)(랜덤 위치 생성만 적용, 내부 변수 변경X)


#include "SpawnActor.h"


// Sets default values
ASpawnActor::ASpawnActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;		// 틱을 사용할 일이 없다

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	SpawningCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawningCylinder"));	// 강의에서 사용했던 박스와 다르게 원기둥 모양 사용
	SpawningCylinder->SetupAttachment(Scene);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder"));	// 원기둥 모양 메시
	if (MeshAsset.Succeeded()) {
		SpawningCylinder->SetStaticMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/Material/M_Wireframe.M_Wireframe"));	// 프레임만 보이도록 직접 생성한 머티리얼
	if (MaterialAsset.Succeeded()) {
		SpawningCylinder->SetMaterial(0, MaterialAsset.Object);
	}
	if (SpawningCylinder) {
		SpawningCylinder->SetHiddenInGame(true);		// 게임이 시작하면 보이지 않도록 숨김
	}
}

FSpawnRow* ASpawnActor::GetRandomActor() const		// 강의에서 사용된 내용 그대로 입니다
{
	if (!ActorDataTable) return nullptr;

	TArray<FSpawnRow*> AllRows;
	static const FString ContextString(TEXT("ActorSpawnContext"));
	ActorDataTable->GetAllRows(ContextString, AllRows);

	if (AllRows.IsEmpty()) return nullptr;

	float TotalChance = 0.0f;
	for (const FSpawnRow* Row : AllRows)
	{
		if (Row)
		{
			TotalChance += Row->SpawnChance;
		}
	}

	const float RandValue = FMath::FRandRange(0.0f, TotalChance);
	float AccumulateChance = 0.0f;

	for (FSpawnRow* Row : AllRows)
	{
		AccumulateChance += Row->SpawnChance;
		if (RandValue <= AccumulateChance)
		{
			return Row;
		}
	}

	return nullptr;
}


float ASpawnActor::GetCylinderRadius(UStaticMeshComponent* CylinderMesh)
{
	if (CylinderMesh)
	{
		FVector BoxExtent = CylinderMesh->Bounds.BoxExtent;		// 메시의 바운드 박스의 최대값을 측정하여 가져온다 (원기둥의 반지름)
		float Radius = FMath::Max(BoxExtent.X, BoxExtent.Y);
		return Radius;
	}
	return 0.0f;
}

void ASpawnActor::SpawnRandomActor()		// 강의에서 사용된 내용 그대로 입니다
{
	{
		if (FSpawnRow* SelectedRow = GetRandomActor())
		{
			if (UClass* ActualClass = SelectedRow->ActorClass.Get())
			{
				SpawningActor(ActualClass);
			}
		}
	}
}

FVector ASpawnActor::GetRandomSpawnLocation()
{
	if (SpawningCylinder)
	{
		float Radius = GetCylinderRadius(SpawningCylinder);
		float Height = SpawningCylinder->Bounds.BoxExtent.Z; // 원기둥의 높이

		// 원기둥 내부의 랜덤한 위치 생성 (원모양으로 생성하려면 생각이상으로 고려해야할 것이 많아 ai의 도움을 받았습니다)
		float Theta = FMath::RandRange(0.0f, 2.0f * PI);
		float R = FMath::Sqrt(FMath::RandRange(0.0f, 1.0f)) * Radius;
		float X = R * FMath::Cos(Theta);
		float Y = R * FMath::Sin(Theta);
		float Z = FMath::RandRange(0.0f, Height);

		return FVector(X, Y, Z) + GetActorLocation(); // 스폰액터의 위치 기준으로 원기둥 내부에서 생성
	}
	return GetActorLocation();
}

void ASpawnActor::SpawningActor(TSubclassOf<AActor> ActorClass)		// 강의에서 사용된 내용 그대로 입니다
{
	if (!ActorClass) return;

	GetWorld()->SpawnActor<AActor>(
		ActorClass,
		GetRandomSpawnLocation(),
		FRotator(0.0f, FMath::RandRange(0.0f, 360.0f), 0.0f)		// 생성 시 회전 방향을 Y축 기준으로 랜덤 생성
	);
}

// Called when the game starts or when spawned
void ASpawnActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

