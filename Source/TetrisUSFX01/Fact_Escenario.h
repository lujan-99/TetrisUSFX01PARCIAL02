// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fact_Escenario.generated.h"

UCLASS()
class TETRISUSFX01_API AFact_Escenario : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFact_Escenario();


protected:

	FString NombreEscenario;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	virtual void SetNombreEscenario();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* EscenarioMesh;
};
