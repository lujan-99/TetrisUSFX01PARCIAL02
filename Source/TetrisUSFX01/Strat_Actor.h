// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Strat_Estrategia.h"
#include "Strat_Actor.generated.h"

UCLASS()
class TETRISUSFX01_API AStrat_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStrat_Actor();
private:

	IStrat_Estrategia* Estrategia;
	int EstrategiaActual = 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshActor;

	UMaterialInterface* MaterialActor;
	void Maniobra(AActor* _Estrategia);
	void Pelear();
	void Invocar();
	void CambiarEstrategia(int _Estrategia) { EstrategiaActual = _Estrategia; }

};
