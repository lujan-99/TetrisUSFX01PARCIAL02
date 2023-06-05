// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Adap_Componente.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TETRISUSFX01_API UAdap_Componente : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY()
		float MovementRadius;
	float Alto;
	float Ancho;
	float Profundidad;

	float TiempoAcumulado;
	float TiempoTota;

public:	
	// Sets default values for this component's properties
	UAdap_Componente();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
