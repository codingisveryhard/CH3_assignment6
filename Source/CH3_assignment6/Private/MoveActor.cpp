// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveActor.h"

// Sets default values
AMoveActor::AMoveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/AdvancedVillagePack/Meshes/SM_Bridge_Var03.SM_Bridge_Var03"));
	if (MeshAsset.Succeeded()) {
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/AdvancedVillagePack/Materials/M_Inst_Pack_07.M_Inst_Pack_07"));
	if (MaterialAsset.Succeeded()) {
		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}

	MoveSpeed = FVector(100.0f, 0.0f, 0.0f);
	MaxDistance = 400.0f;
}

void AMoveActor::Reverse(float X, float DeltaTime)
{
	if (FVector::Dist(StartLocation, GetActorLocation()) >= MaxDistance) {
		MoveSpeed *= -1;
		StartLocation = GetActorLocation();
	}
}

// Called when the game starts or when spawned
void AMoveActor::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}
	
// Called every frame
void AMoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalOffset(MoveSpeed * DeltaTime);
	Reverse(MoveSpeed.X, DeltaTime);

}

