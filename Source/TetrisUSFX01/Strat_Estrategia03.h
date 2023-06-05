// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Strat_Estrategia.h"
#include "Strat_Estrategia03.generated.h"

UCLASS()
class TETRISUSFX01_API AStrat_Estrategia03 : public AActor, public IStrat_Estrategia
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStrat_Estrategia03();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual int Maniobra() override;
};
