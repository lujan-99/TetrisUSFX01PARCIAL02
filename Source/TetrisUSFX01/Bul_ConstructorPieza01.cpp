// Fill out your copyright notice in the Description page of Project Settings.


#include "Bul_ConstructorPieza01.h"
#include "Bul_PiezaBase.h"
#include <vector>

// Sets default values
ABul_ConstructorPieza01::ABul_ConstructorPieza01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABul_ConstructorPieza01::BeginPlay()
{
	Super::BeginPlay();
	
	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<ABul_PiezaBase>(ABul_PiezaBase::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABul_ConstructorPieza01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABul_ConstructorPieza01::ConstruirColores()
{
	Pieza->setColor(1);
}

void ABul_ConstructorPieza01::ConstruirTipoPieza()
{
}

ABul_PiezaBase* ABul_ConstructorPieza01::GetPiezaBase()
{
	
	return Pieza;
}