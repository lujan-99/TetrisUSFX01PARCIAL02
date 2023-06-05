// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade_Circulo.h"

// Sets default values
AFacade_Circulo::AFacade_Circulo()
{
	PrimaryActorTick.bCanEverTick = true;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
	RootComponent = BlockMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));

	if (BlockMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(BlockMeshAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		BlockMesh->SetWorldScale3D(FVector(0.2f));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}
}

// Called when the game starts or when spawned
void AFacade_Circulo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacade_Circulo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

