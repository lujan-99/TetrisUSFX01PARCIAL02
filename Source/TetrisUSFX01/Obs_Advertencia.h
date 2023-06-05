// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obs_Subscriptor.h"

#include "Obs_Advertencia.generated.h"

UCLASS()
class TETRISUSFX01_API AObs_Advertencia : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObs_Advertencia();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY()
		TArray<AActor*> Suscriptores = TArray<AActor*>();
public:

	//Add the pased Subscriber to the list
	virtual void Suscribirse(AActor* Subscriptor);
	//Remove the passed Subscriber from the list
	virtual void DesSubscribirse(AActor* SubscriptorEliminado);
	//Notify all the Subscribers that something has changed
	virtual void NotificasionSubscripcion();

};
