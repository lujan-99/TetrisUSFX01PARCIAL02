// Fill out your copyright notice in the Description page of Project Settings.


#include "Fact_Escenario.h"

// Sets default values
AFact_Escenario::AFact_Escenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	EscenarioMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscenarioMesh"));
	RootComponent = EscenarioMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EscenarioMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));

	if (EscenarioMeshAsset.Succeeded())
	{
		EscenarioMesh->SetStaticMesh(EscenarioMeshAsset.Object);
		EscenarioMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		EscenarioMesh->SetWorldScale3D(FVector(5.0f, 3.0f, 2.5f));

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Escenario"));
	}
}

// Called when the game starts or when spawned
void AFact_Escenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFact_Escenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFact_Escenario::SetNombreEscenario()
{
	NombreEscenario = "Nombre Predeterminado";
}