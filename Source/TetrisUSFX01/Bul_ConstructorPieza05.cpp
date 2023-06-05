// Fill out your copyright notice in the Description page of Project Settings.


#include "Bul_ConstructorPieza05.h"
#include "Bul_PiezaBase.h"
#include <vector>

// Sets default values
ABul_ConstructorPieza05::ABul_ConstructorPieza05()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABul_ConstructorPieza05::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<ABul_PiezaBase>(ABul_PiezaBase::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABul_ConstructorPieza05::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABul_ConstructorPieza05::ConstruirColores()
{
	Pieza->setColor(2);
}

void ABul_ConstructorPieza05::ConstruirTipoPieza()
{

}

ABul_PiezaBase* ABul_ConstructorPieza05::GetPiezaBase()
{

	return Pieza;
}

