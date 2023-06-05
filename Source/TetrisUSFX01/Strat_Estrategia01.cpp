// Fill out your copyright notice in the Description page of Project Settings.


#include "Strat_Estrategia01.h"

// Sets default values
AStrat_Estrategia01::AStrat_Estrategia01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrat_Estrategia01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrat_Estrategia01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AStrat_Estrategia01::Maniobra()
{
	return 1;
}

