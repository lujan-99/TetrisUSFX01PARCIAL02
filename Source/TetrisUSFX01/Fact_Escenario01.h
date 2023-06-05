// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fact_Escenario.h"
#include "Fact_Escenario01.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AFact_Escenario01 : public AFact_Escenario
{
	GENERATED_BODY()
	

public:

	AFact_Escenario01();

	virtual void SetNombreEscenario() override;
};
