// Fill out your copyright notice in the Description page of Project Settings.


#include "Fact_CreadorEscenario.h"

// Sets default values
AFact_CreadorEscenario::AFact_CreadorEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFact_CreadorEscenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFact_CreadorEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AFact_Escenario* AFact_CreadorEscenario::CrearEscenario(FString Categoria)
{
	AFact_Escenario* Escenario = EstablecerMaterial(Categoria);
	Escenario->SetNombreEscenario();//////////
	return Escenario;
}