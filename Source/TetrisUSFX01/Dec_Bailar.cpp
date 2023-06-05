// Fill out your copyright notice in the Description page of Project Settings.


#include "Dec_Bailar.h"

// Sets default values for this component's properties
UDec_Bailar::UDec_Bailar()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDec_Bailar::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDec_Bailar::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDec_Bailar::Girar(float valor)
{
	//FVector NewLocation = Personita->GetActorLocation() + FVector(0.0, 10.0, 0.0);
	FRotator NewRotation = Personita->GetActorRotation() + FRotator(0.0, 4.0, 0.0);
	Personita->SetActorRelativeRotation(NewRotation);
	//Personita->SetActorLocation(NewLocation);
}

void UDec_Bailar::Conectar(AActor* objeto)
{
		Personita = objeto;

		Girar(1);

}

