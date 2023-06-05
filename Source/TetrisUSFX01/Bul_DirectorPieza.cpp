// Fill out your copyright notice in the Description page of Project Settings.


#include "Bul_DirectorPieza.h"

// Sets default values
ABul_DirectorPieza::ABul_DirectorPieza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABul_DirectorPieza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABul_DirectorPieza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABul_DirectorPieza::SetConstructorPiezaBase(AActor* Constructor)
{
	//Cast the passed Actor and set the Builder
	ConstructorPieza = Cast<IBul_ConstructorPieza>(Constructor);
	if (!ConstructorPieza) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor is not a LodgingBuilder! Are you sure that the Actor implements that interface ? "));
	}
}

ABul_PiezaBase* ABul_DirectorPieza::GetPiezaBase()
{
	if (ConstructorPieza)
	{
		//Returns the Lodging of the Builder
		return ConstructorPieza->GetPiezaBase();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;
}

void ABul_DirectorPieza::ConstruirPiezaBase()
{
	//Log if the Builder is NULL
	if (!ConstructorPieza) {
		UE_LOG(LogTemp, Error, TEXT("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized."));
		return;
	}
	//Creates the buildings
	ConstructorPieza->ConstruirColores();
	ConstructorPieza->ConstruirTipoPieza();

}