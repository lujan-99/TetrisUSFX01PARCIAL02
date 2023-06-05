// Fill out your copyright notice in the Description page of Project Settings.


#include "Obs_Peligro.h"

// Sets default values
AObs_Peligro::AObs_Peligro()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void AObs_Peligro::BeginPlay()
{
	Super::BeginPlay();
}
// Called every frame
void AObs_Peligro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AObs_Peligro::CambioTipo()
{
	//When the time has changed, this Clock Tower (that is a Publisher) notifies to all the subscribers that the time has changed
	NotificasionSubscripcion();
}
void AObs_Peligro::SetTipo(FString myTime)
{
	//Set the time using the passed parameter and warn that it's changed
	Tipo = myTime;
	CambioTipo();	
}