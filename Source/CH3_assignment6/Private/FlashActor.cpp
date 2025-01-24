// Fill out your copyright notice in the Description page of Project Settings.


#include "FlashActor.h"

// Sets default values
AFlashActor::AFlashActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/AdvancedVillagePack/Meshes/SM_StoneFlat_Var03.SM_StoneFlat_Var03"));
	if (MeshAsset.Succeeded()) {
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/AdvancedVillagePack/Materials/M_Inst_Pack_02.M_Inst_Pack_02"));
	if (MaterialAsset.Succeeded()) {
		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}

	IsVisible = true;
	RepeatTime = 2.0f;
}

void AFlashActor::ToggleVisibility() {
	IsVisible = !IsVisible;						// 함수 작동 시 토글
	StaticMeshComp->SetVisibility(IsVisible);	// 스테틱 메시의 가시, 비가시 적용
	SetActorEnableCollision(IsVisible);			// 액터의 충돌, 충돌 적용
}

// Called when the game starts or when spawned
void AFlashActor::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(		// 일정시간마다 주기적으로 실행 
		TimerHandle,
		this,
		&AFlashActor::ToggleVisibility,			// 실행될 함수
		RepeatTime,									// 2초 간격으로 실행
		true									// 반복적으로 실행
	);
}

// Called every frame
void AFlashActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

