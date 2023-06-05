// Fill out your copyright notice in the Description page of Project Settings.


#include "Obs_Advertencia.h"

// Sets default values
AObs_Advertencia::AObs_Advertencia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObs_Advertencia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObs_Advertencia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObs_Advertencia::Suscribirse(AActor* Subscriptor)
{
	Suscriptores.Add(Subscriptor);
}

void AObs_Advertencia::DesSubscribirse(AActor* SubscriptorEliminado)
{
	Suscriptores.Remove(SubscriptorEliminado);
}

void AObs_Advertencia::NotificasionSubscripcion()
{
	for (AActor* Actor : Suscriptores)
	{
		IObs_Subscriptor* Sub = Cast<IObs_Subscriptor>(Actor);
		if (Sub)
		{
			Sub->Update(this);
		}
	}
}

