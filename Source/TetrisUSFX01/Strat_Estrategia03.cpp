// Fill out your copyright notice in the Description page of Project Settings.


#include "Strat_Estrategia03.h"

// Sets default values
AStrat_Estrategia03::AStrat_Estrategia03()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrat_Estrategia03::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrat_Estrategia03::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AStrat_Estrategia03::Maniobra()
{
	return 3;
}

