// Fill out your copyright notice in the Description page of Project Settings.


#include "State_EstadoManana.h"
#include "State_Escenario.h"

// Sets default values
AState_EstadoManana::AState_EstadoManana()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_0.Material_0'"));
}

// Called when the game starts or when spawned
void AState_EstadoManana::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AState_EstadoManana::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AState_EstadoManana::EstablecerEscenario(AState_Escenario* _Escenario)
{
    //Escenario->Destroy();
    //FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    //GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado escenario manana apareciendo"));
    //Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    _Escenario->MeshEscenario->SetMaterial(0, materialEscenarioManana);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    //Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    //Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));*/

    Escenario->cambiarEstado(Escenario->getEstadoTarde());

}

void AState_EstadoManana::SetEscenario(AState_Escenario* _Escenario)
{
    Escenario = _Escenario;
}
