// Fill out your copyright notice in the Description page of Project Settings.


#include "Bul_ConstructorPieza02.h"
#include "Bul_PiezaBase.h"
#include <vector>

// Sets default values
ABul_ConstructorPieza02::ABul_ConstructorPieza02()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABul_ConstructorPieza02::BeginPlay()
{
	Super::BeginPlay();

	
	Pieza = GetWorld()->SpawnActor<ABul_PiezaBase>(ABul_PiezaBase::StaticClass());
	
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABul_ConstructorPieza02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABul_ConstructorPieza02::ConstruirColores()
{
	Pieza->setColor(2);
}

void ABul_ConstructorPieza02::ConstruirTipoPieza()
{
	std::vector<std::vector<std::pair<float, float>>> Shapes =
	{
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}, {30.0, 0.0}},
		{{-10.0, 0.0}, {-20.0, 10.0}, {-10.0, 10.0}, {0.0, 10.0}, {-10.0, 20.0}},
		{{-10.0, 0.0}, {0.0, 10.0}, {0.0, 20.0}, {10.0, 10.0}, {10.0, 20.0}},
		{{0.0, -10.0}, {0.0, 0.0}, {0.0, 10.0}, {0.0, 20.0}, {10.0, 10.0}, {-10.0, 10.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}, {10.0, 10.0}, {10.0, 20.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}, {-10.0, 10.0}, {20.0, 10.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}, {0.0, 10.0}, {20.0, 10.0}},
	};
	Pieza->SetTipoPieza(Shapes);
}

ABul_PiezaBase* ABul_ConstructorPieza02::GetPiezaBase()
{

	return Pieza;
}
