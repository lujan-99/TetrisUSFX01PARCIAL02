// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "State_EstadoEscenario.h"
#include "State_Escenario.generated.h"

UCLASS()
class TETRISUSFX01_API AState_Escenario : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AState_Escenario();
private:

	IState_EstadoEscenario* EstadoManana;
	IState_EstadoEscenario* EstadoTarde;
	IState_EstadoEscenario* EstadoNoche;
	IState_EstadoEscenario* Estado;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshEscenario;

	UMaterialInterface* materialEscenarioManana;

	AState_Escenario* iniciar();
	void cambiarEscenario(AState_Escenario* _Escenario);
	void cambiarEstado(IState_EstadoEscenario* _Estado);

	IState_EstadoEscenario* getEstadoManana();
	IState_EstadoEscenario* getEstadoTarde();
	IState_EstadoEscenario* getEstadoNoche();
	IState_EstadoEscenario* getEstado();

};
