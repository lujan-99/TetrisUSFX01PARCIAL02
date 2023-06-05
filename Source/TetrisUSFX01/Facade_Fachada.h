// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "Facade_Circulo.h"
#include <functional>
#include "Facade_Fachada.generated.h"

UCLASS()
class TETRISUSFX01_API AFacade_Fachada : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacade_Fachada();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Spaw();
private:


	TArray<AActor*> Blocks;
};
