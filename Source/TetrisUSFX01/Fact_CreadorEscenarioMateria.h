// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fact_CreadorEscenario.h"
#include "Fact_CreadorEscenarioMateria.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AFact_CreadorEscenarioMateria : public AFact_CreadorEscenario
{
	GENERATED_BODY()

public:

	AFact_CreadorEscenarioMateria();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Brew the potion
	virtual AFact_Escenario* EstablecerMaterial(FString Categoria) override;

	UPROPERTY()
		class USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere)
		TArray<class UMaterial*> Materiales;

};
