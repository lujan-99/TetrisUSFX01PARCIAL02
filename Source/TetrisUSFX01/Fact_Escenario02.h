// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fact_Escenario.h"
#include "Fact_Escenario02.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AFact_Escenario02 : public AFact_Escenario
{
	GENERATED_BODY()

public:
	AFact_Escenario02();

	virtual void SetNombreEscenario() override;
};
