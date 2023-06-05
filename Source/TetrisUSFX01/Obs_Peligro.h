// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obs_Advertencia.h"
#include "Obs_Peligro.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AObs_Peligro : public AObs_Advertencia
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AObs_Peligro();
private:
	//The current time of this Clock Tower
	FString Tipo;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	//Called when the time of this Clock Tower has changed
	void CambioTipo();
	//Set the time of this Clock Tower
	void SetTipo(FString _tipo);
	//Return the time of this Clock Tower
	FORCEINLINE FString GetTipo() { return Tipo; };
};
