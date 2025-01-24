// Fill out your copyright notice in the Description page of Project Settings.


#include "WarpActor.h"

// Sets default values
AWarpActor::AWarpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/AdvancedVillagePack/Meshes/SM_Barrel.SM_Barrel"));
	if (MeshAsset.Succeeded()) {
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/AdvancedVillagePack/Materials/M_Inst_Pack_01.M_Inst_Pack_01"));
	if (MaterialAsset.Succeeded()) {
		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}
	StartLocation = FVector{0.0f};
	MaxWarp = FVector{ 500.0f, 500.0f, 0.0f };
	RepeatTime = 2.0f;
}

void AWarpActor::Warp()
{
	float RandomLocationX{ static_cast<float>(FMath::FRandRange(-MaxWarp.X, MaxWarp.X)) };	// 랜덤 변수를 생성하여 이동할 좌표를 생성
	float RandomLocationY{ static_cast<float>(FMath::FRandRange(-MaxWarp.Y, MaxWarp.Y)) };	// 그대로 기입시 축소변환이 필요하다는 오류 발생 static_cast를 사용해서 해결
	FVector RandomLocation{ FVector(RandomLocationX, RandomLocationY, 0.0f) };
	SetActorLocation(StartLocation + RandomLocation);										// 초기 생성된 위치 기반으로 이동
}

// Called when the game starts or when spawned
void AWarpActor::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();	// 초기 위치 저장;
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(	// 일정시간마다 주기적으로 작동
		TimerHandle,
		this,
		&AWarpActor::Warp,					// 실행할 함수
		RepeatTime,								// 2초 간격으로 실행
		true								// 반복 실행
	);
}



// Called every frame
void AWarpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

