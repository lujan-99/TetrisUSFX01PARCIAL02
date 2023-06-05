// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include <vector>
#include "Facade_Fachada.h"

// Sets default values
AFacade_Fachada::AFacade_Fachada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacade_Fachada::BeginPlay()
{
	Super::BeginPlay();
    //Spaw();
	
}

// Called every frame
void AFacade_Fachada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacade_Fachada::Spaw()
{
    std::vector<std::vector<std::pair<float, float>>> Shapes =
    {
        {{-20.0, 10.0}, {-10.0, 10.0}, {0.0, 10.0}, {10.0, 10.0}, {-20.0, 10.0}, {-30.0, 10.0}, {0.0, 0.0}, {0.0, -10.0}, {-10.0, -20.0}, {10.0, -20.0}, {-10.0, -30.0}, {10.0, -30.0}, {-10.0, -40.0}, {10.0, -40.0}},
        { {0.0, 20.0}}
    };
    const int Index = 0;
    UE_LOG(LogTemp, Warning, TEXT("index=%d"), Index);
    const std::vector<std::pair<float, float>>& YZs = Shapes[Index];
    for (auto&& YZ : YZs)
    {
        FRotator Rotation(0.0, 0.0, 0.0);
        ABlock* B = GetWorld()->SpawnActor<ABlock>(this->GetActorLocation(), Rotation);
        Blocks.Add(B);
        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(0.0, YZ.first, YZ.second));
    }
   
    FRotator Rotation(0.0, 0.0, 0.0);
    FVector Location = { 0.0, 0.0, 20.0 };
    AFacade_Circulo* C = GetWorld()->SpawnActor<AFacade_Circulo>(this->GetActorLocation(), Rotation);
    Blocks.Add(C);
    C->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    C->SetActorRelativeLocation(Location);
    
}

