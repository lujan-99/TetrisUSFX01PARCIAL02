// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fact_Escenario.h"
#include "Fact_CreadorEscenario.generated.h"

UCLASS()
class TETRISUSFX01_API AFact_CreadorEscenario : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFact_CreadorEscenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AFact_Escenario* EstablecerMaterial(FString Categoria) PURE_VIRTUAL(ACreadorEscenario::EstablecerMaterial, return nullptr;)

	AFact_Escenario* CrearEscenario(FString Categoria);
};
