// Fill out your copyright notice in the Description page of Project Settings.


#include "Strat_Actor.h"

// Sets default values
AStrat_Actor::AStrat_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshActor = CreateDefaultSubobject<UStaticMeshComponent>("Escenario Mesh");
	RootComponent = MeshActor;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Escenarios(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	
	if (Escenarios.Succeeded())
	{
		MeshActor->SetStaticMesh(Escenarios.Object);
		MeshActor->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		MeshActor->SetWorldScale3D(FVector(0.5f));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("mesh not found"));
	}

	MaterialActor = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_5.Material_5'"));
	MeshActor->SetMaterial(0, MaterialActor);
}

// Called when the game starts or when spawned
void AStrat_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrat_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (EstrategiaActual){
		case 0:
		{
			FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, 0.0, 0.0);
			this->SetActorRelativeRotation(NewRotation);
		}
		break;
		case 1:
		{
			FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, 0.0, 10.0);
			this->SetActorRelativeRotation(NewRotation);
		}
		break;
		case 2:
		{
			FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, 10.0, 0.0);
			this->SetActorRelativeRotation(NewRotation);
		}
		break;
		case 3:
		{
			FRotator NewRotation = this->GetActorRotation() + FRotator(1.0, 0.0, 0.0);
			this->SetActorRelativeRotation(NewRotation);
		}
		break;
	}

}

void AStrat_Actor::Maniobra(AActor* _Estrategia)
{
	Estrategia = Cast<IStrat_Estrategia>(_Estrategia);

	if (!Estrategia) 
	{
		
	}
}

void AStrat_Actor::Pelear()
{
	if (!Estrategia) { UE_LOG(LogTemp, Error, TEXT("--------------------------")); return; }

	EstrategiaActual = Estrategia->Maniobra();
}

void AStrat_Actor::Invocar()
{
   
}

