// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Obs_Subscriptor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UObs_Subscriptor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IObs_Subscriptor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Update(class AObs_Advertencia* Advertencia) = 0;
};
