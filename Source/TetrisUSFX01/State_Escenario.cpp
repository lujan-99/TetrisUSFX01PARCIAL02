// Fill out your copyright notice in the Description page of Project Settings.


#include "State_Escenario.h"
#include "State_EstadoEscenario.h"
#include "State_EstadoManana.h"
#include "State_EstadoTarde.h"
#include "State_EstadoNoche.h"

// Sets default values
AState_Escenario::AState_Escenario()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    MeshEscenario = CreateDefaultSubobject<UStaticMeshComponent>("Escenario Mesh");
    RootComponent = MeshEscenario;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> Escenarios(TEXT("StaticMesh'/Game/Mesh/frame.frame'"));
    //StaticMesh'/Game/Mesh/block.block'
    if (Escenarios.Succeeded())
    {
        MeshEscenario->SetStaticMesh(Escenarios.Object);
        MeshEscenario->SetRelativeLocation(FVector(0.0f, 1000.0f, 0.0f));
        MeshEscenario->SetWorldScale3D(FVector(1.0f));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("mesh not found"));
    }

    materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_5.Material_5'"));
}

// Called when the game starts or when spawned
void AState_Escenario::BeginPlay()
{
    Super::BeginPlay();
    //iniciar();
}

// Called every frame
void AState_Escenario::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

AState_Escenario* AState_Escenario::iniciar()
{
    EstadoManana = GetWorld()->SpawnActor<AState_EstadoManana>(AState_EstadoManana::StaticClass());
    EstadoManana->SetEscenario(this);

    //Spanw the No Coin State and set this Slot Machine to it
    EstadoTarde = GetWorld()->SpawnActor<AState_EstadoTarde>(AState_EstadoTarde::StaticClass());
    EstadoTarde->SetEscenario(this);

    //Spanw the Coin Inserted State and set this Slot Machine to it
    EstadoNoche = GetWorld()->SpawnActor<AState_EstadoNoche>(AState_EstadoNoche::StaticClass());
    EstadoNoche->SetEscenario(this);

    //Estado = EstadoManana;

    FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    //GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Estado escenario manana apareciendo"));
    AState_Escenario* Escenario = GetWorld()->SpawnActor<AState_Escenario>(AState_Escenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    Escenario->MeshEscenario->SetMaterial(0, materialEscenarioManana);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    Escenario->SetActorRelativeLocation(FVector(0.0, 0.0, 0.0));
    Escenario->SetActorRelativeRotation(FRotator(0.0, 0.0, 0.0));

    Estado = EstadoManana;
    return Escenario;
}

void AState_Escenario::cambiarEscenario(AState_Escenario* _Escenario)
{
    //GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo escenario"));
    Estado->EstablecerEscenario(_Escenario);
}

void AState_Escenario::cambiarEstado(IState_EstadoEscenario* _Estado)
{
    Estado = _Estado;
}

IState_EstadoEscenario* AState_Escenario::getEstadoManana()
{
    return EstadoManana;
}

IState_EstadoEscenario* AState_Escenario::getEstadoTarde()
{
    return EstadoTarde;
}

IState_EstadoEscenario* AState_Escenario::getEstadoNoche()
{
    return EstadoNoche;
}

IState_EstadoEscenario* AState_Escenario::getEstado()
{
    return Estado;
}

