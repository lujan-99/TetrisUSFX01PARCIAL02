// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bul_ConstructorPieza.h"
#include "Bul_ConstructorPieza05.generated.h"

UCLASS()
class TETRISUSFX01_API ABul_ConstructorPieza05 : public AActor, public IBul_ConstructorPieza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABul_ConstructorPieza05();
private:

	UPROPERTY()
		class ABul_PiezaBase* Pieza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirColores() override;
	virtual void ConstruirTipoPieza() override;
	virtual class ABul_PiezaBase* GetPiezaBase() override;


};
