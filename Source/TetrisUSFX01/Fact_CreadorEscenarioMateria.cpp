// Fill out your copyright notice in the Description page of Project Settings.


#include "Fact_CreadorEscenarioMateria.h"
#include "Fact_Escenario01.h"
#include "Fact_Escenario02.h"
#include "Fact_Escenario03.h"

AFact_CreadorEscenarioMateria::AFact_CreadorEscenarioMateria()
{

    PrimaryActorTick.bCanEverTick = true;

    SceneComponent = CreateDefaultSubobject<USceneComponent>("Escenario Scene");
    RootComponent = SceneComponent;

    struct FConstructorStatics
    {
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_0;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_1;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Material_2;
        FConstructorStatics()
            : Material_0(TEXT("Material'/Game/Mesh/Material_1.Material_1'"))
            , Material_1(TEXT("Material'/Game/Mesh/Material_2.Material_2'"))
            , Material_2(TEXT("Material'/Game/Mesh/Material_3.Material_3'"))
        {
        }
    };
    static FConstructorStatics ConstructorStatics;
    Materiales.Add(ConstructorStatics.Material_0.Get());
    Materiales.Add(ConstructorStatics.Material_1.Get());
    Materiales.Add(ConstructorStatics.Material_2.Get());
}

void AFact_CreadorEscenarioMateria::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

AFact_Escenario* AFact_CreadorEscenarioMateria::EstablecerMaterial(FString Categoria)
{
    
    if (Categoria == "Material0")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo Material Piedras"));
        FTransform SpawnLocation;
        UPROPERTY()
            AFact_Escenario* B;

        B = GetWorld()->SpawnActor<AFact_Escenario01>(AFact_Escenario01::StaticClass(), SpawnLocation);
        B->EscenarioMesh->SetMaterial(0, Materiales[0]);

        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
        B->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

        return B;
    }
    else if (Categoria == "Material1")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo Material Colores"));
        FTransform SpawnLocation;
        AFact_Escenario* B = GetWorld()->SpawnActor<AFact_Escenario02>(AFact_Escenario02::StaticClass(), SpawnLocation);
        B->EscenarioMesh->SetMaterial(0, Materiales[1]);

        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
        B->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

        return B;

    }
    else if (Categoria == "Material2")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo Material Pasto"));
        FTransform SpawnLocation;
        AFact_Escenario* B = GetWorld()->SpawnActor<AFact_Escenario03>(AFact_Escenario03::StaticClass(), SpawnLocation);
        B->EscenarioMesh->SetMaterial(0, Materiales[2]);

        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
        B->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));
        return B;
    }
    return nullptr;
}