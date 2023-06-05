// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "State_EstadoEscenario.h"
#include "State_EstadoTarde.generated.h"

UCLASS()
class TETRISUSFX01_API AState_EstadoTarde : public AActor , public IState_EstadoEscenario
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AState_EstadoTarde();

	UPROPERTY()
		class AState_Escenario* Escenario;

	UMaterialInterface* materialEscenarioManana;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EstablecerEscenario(class AState_Escenario* _Escenario) override;
	virtual void SetEscenario(class AState_Escenario* _Escenario) override;
};
