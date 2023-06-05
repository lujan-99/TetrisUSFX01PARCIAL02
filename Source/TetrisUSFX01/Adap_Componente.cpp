// Fill out your copyright notice in the Description page of Project Settings.


#include "Adap_Componente.h"

// Sets default values for this component's properties
UAdap_Componente::UAdap_Componente()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	MovementRadius = 5.0;
	Alto = 15.0;
	Ancho = 0, 0;
	Profundidad = 5, 0;

	TiempoAcumulado = 0, 0;
	TiempoTota = 0.2;
}


// Called when the game starts
void UAdap_Componente::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAdap_Componente::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	TiempoAcumulado = TiempoAcumulado + DeltaTime;
	if (TiempoAcumulado >= TiempoTota)
	{
		TiempoAcumulado = 0;
		AActor* Parent = GetOwner();
		if (Parent)
		{
			// Find a new position for the object to go to
			auto NewPos = Parent->GetActorLocation() +
				FVector
				(
					FMath::FRandRange(-1, 1) *
					Profundidad,
					FMath::FRandRange(-1, 1) *
					Alto,
					FMath::FRandRange(-1, 1) *
					Ancho
				);
			// Update the object's position
			Parent->SetActorLocation(NewPos);
		}
	}
}

