// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Adap_Componente.h"
#include "Adap_Componente.h"
#include "Adap_Adaptador.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API UAdap_Adaptador : public UAdap_Componente
{
	GENERATED_BODY()

public:
	UAdap_Adaptador();
	void SetLimitesMovimiento(float _XMovimiento, float _YMovimiento, float _ZMovimiento);
};
