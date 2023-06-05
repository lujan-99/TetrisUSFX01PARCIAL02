// Fill out your copyright notice in the Description page of Project Settings.


#include "Obs_Jugador.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include <vector>

// Sets default values
AObs_Jugador::AObs_Jugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void AObs_Jugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObs_Jugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObs_Jugador::Destroyed()
{
}

void AObs_Jugador::Update(AObs_Advertencia* Advertencia)
{			
	Morph();
}

void AObs_Jugador::Morph()
{
	if (!Peligro) {
		UE_LOG(LogTemp, Error, TEXT("Morph():ClockTower is NULL, make sure it's initialized."));
		return;
	}
	//Get the current time of the Clock Tower
	FString Time = Peligro->GetTipo();
	if (!Time.Compare("Epilepticas"))
	{
		//Execute the Morning routine
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red,FString::Printf(TEXT("Esta es %s, ten cuidado"), *Time));
	}
	else if (!Time.Compare("Grandes"))
	{
		//Execute the Midday routine
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red,FString::Printf(TEXT("Esta es %s, ten cuidado"), *Time));
	}
	else if (!Time.Compare("Huecas"))
	{
		//Execute the Evening routine
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red,FString::Printf(TEXT("Esta es %s, ten cuidado"), *Time));
	}
}

void AObs_Jugador::SetPeligro(AObs_Peligro* _peligro)
{
	//Log Error if the passed Clock Tower is NULL
	if (!_peligro)
	{
		UE_LOG(LogTemp, Error, TEXT("SetClockTower(): myClockTower is NULL, make sure it'sinitialized.")); return;
	}
	//Set the Clock Tower and Subscribe to that
	Peligro= _peligro;
	Peligro->Suscribirse(this);
}



