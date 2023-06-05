// Fill out your copyright notice in the Description page of Project Settings.


#include "Strat_Estrategia02.h"

// Sets default values
AStrat_Estrategia02::AStrat_Estrategia02()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrat_Estrategia02::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrat_Estrategia02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AStrat_Estrategia02::Maniobra()
{
	return 2;
}

