// Fill out your copyright notice in the Description page of Project Settings.


#include "State_EstadoTarde.h"
#include "State_Escenario.h"

// Sets default values
AState_EstadoTarde::AState_EstadoTarde()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_6.Material_6'"));
}

// Called when the game starts or when spawned
void AState_EstadoTarde::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AState_EstadoTarde::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AState_EstadoTarde::EstablecerEscenario(AState_Escenario* _Escenario)
{

	FTransform SpawnLocation;

	//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado tarde"));


	_Escenario->MeshEscenario->SetMaterial(0, materialEscenarioManana);


	Escenario->cambiarEstado(Escenario->getEstadoNoche());
}

void AState_EstadoTarde::SetEscenario(AState_Escenario* _Escenario)
{
	Escenario = _Escenario;
}

