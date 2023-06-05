// Fill out your copyright notice in the Description page of Project Settings.


#include "Bul_ConstructorPieza03.h"
#include "Bul_PiezaBase.h"
#include <vector>

// Sets default values
ABul_ConstructorPieza03::ABul_ConstructorPieza03()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABul_ConstructorPieza03::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<ABul_PiezaBase>(ABul_PiezaBase::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void ABul_ConstructorPieza03::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABul_ConstructorPieza03::ConstruirColores()
{
	Pieza->setColor(3);
}

void ABul_ConstructorPieza03::ConstruirTipoPieza()
{
	/*std::vector<std::vector<std::pair<float, float>>> Shapes =
	{

		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},
		{{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},
		{{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		{{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		//{{-20.0, 10.0}, {-10.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
	};
	Pieza->SetTipoPieza(Shapes);*/
}

ABul_PiezaBase* ABul_ConstructorPieza03::GetPiezaBase()
{
	//Returns the Lodging Actor of the Builder (this)
	return Pieza;
}