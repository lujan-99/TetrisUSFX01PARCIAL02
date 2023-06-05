// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Dec_Interface.h"
#include "Facade_Fachada.h"

#include "Dec_Bailar.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TETRISUSFX01_API UDec_Bailar : public UActorComponent , public IDec_Interface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDec_Bailar();
	UPROPERTY()
		AActor* Personita;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void Girar(float valor) override;
	virtual void Conectar(AActor* objeto) override;
};
