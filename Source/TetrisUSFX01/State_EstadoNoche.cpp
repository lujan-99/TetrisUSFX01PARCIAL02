// Fill out your copyright notice in the Description page of Project Settings.


#include "State_EstadoNoche.h"
#include "State_Escenario.h"

// Sets default values
AState_EstadoNoche::AState_EstadoNoche()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialEscenarioManana1 = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_3.Material_3'"));
}

// Called when the game starts or when spawned
void AState_EstadoNoche::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AState_EstadoNoche::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AState_EstadoNoche::EstablecerEscenario(AState_Escenario* _Escenario)
{
    FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    //GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado noche"));
    //Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    //B->MeshEscenario->SetMaterial(0, Materiales[0]);
    _Escenario->MeshEscenario->SetMaterial(0, materialEscenarioManana1);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    //Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    //Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

    Escenario->cambiarEstado(Escenario->getEstadoManana());
}

void AState_EstadoNoche::SetEscenario(AState_Escenario* _Escenario)
{
    Escenario = _Escenario;
}

