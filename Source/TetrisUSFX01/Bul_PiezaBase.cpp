// Fill out your copyright notice in the Description page of Project Settings.


#include "Bul_PiezaBase.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include <vector>

// Sets default values
ABul_PiezaBase::ABul_PiezaBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SceneComponent = CreateDefaultSubobject<USceneComponent>("Pieces Scene");
    RootComponent = SceneComponent;

    struct FConstructorStatics
    {
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_0;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_1;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_2;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_3;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_4;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_5;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_6;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_7;
        FConstructorStatics()
            : Color_0(TEXT("Material'/Game/Mesh/Material_0.Material_0'"))
            , Color_1(TEXT("Material'/Game/Mesh/Material_1.Material_1'"))
            , Color_2(TEXT("Material'/Game/Mesh/Material_2.Material_2'"))
            , Color_3(TEXT("Material'/Game/Mesh/Material_3.Material_3'"))
            , Color_4(TEXT("Material'/Game/Mesh/Material_4.Material_4'"))
            , Color_5(TEXT("Material'/Game/Mesh/Material_5.Material_5'"))
            , Color_6(TEXT("Material'/Game/Mesh/Material_6.Material_6'"))
            , Color_7(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"))
        {
        }
    };
    static FConstructorStatics ConstructorStatics;
    Colors.Add(ConstructorStatics.Color_0.Get());
    Colors.Add(ConstructorStatics.Color_1.Get());
    Colors.Add(ConstructorStatics.Color_2.Get());
    Colors.Add(ConstructorStatics.Color_3.Get());
    Colors.Add(ConstructorStatics.Color_4.Get());
    Colors.Add(ConstructorStatics.Color_5.Get());
    Colors.Add(ConstructorStatics.Color_6.Get());
    Colors.Add(ConstructorStatics.Color_7.Get());
}

// Called when the game starts or when spawned
void ABul_PiezaBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABul_PiezaBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABul_PiezaBase::SpawnBlocks()
{
    //std::vector<std::vector<std::pair<float, float>>> Shapes = tipoPieza;
    Index = FMath::RandRange(0, tipoPieza.size() - 1);
    UE_LOG(LogTemp, Warning, TEXT("index=%d"), Index);
    const std::vector<std::pair<float, float>>& YZs = tipoPieza[Index];
    for (auto&& YZ : YZs)
    {
        int color = Index;
        //GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Red, TEXT("El tipo color es: ") + FString::FromInt(getTipoColor()));
        if (getTipoColor() == 1) {
            color = FMath::RandRange(0, tipoPieza.size() - 1);
            //GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Yellow, TEXT("El tipo color es: ") + FString::FromInt(tipoColor));
        }
        else if (getTipoColor() == 3) {
            color = 7;
        }
        //int color = FMath::RandRange(0, Shapes.size() - 1);
        FRotator Rotation(0.0, 0.0, 0.0);
        ABlock* B = GetWorld()->SpawnActor<ABlock>(this->GetActorLocation(), Rotation);
        B->BlockMesh->SetMaterial(1, Colors[color]);
        Blocks.Add(B);
        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(0.0, YZ.first, YZ.second));
    }
}


void ABul_PiezaBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UE_LOG(LogTemp, Warning, TEXT("Piezas eliminadas"));
}

void ABul_PiezaBase::DrawDebugLines()
{
    for (ABlock* B : Blocks)
    {
        FVector V1 = B->GetActorLocation();
        FVector V2(V1.X, V1.Y, 5.0f);
        DrawDebugLine(GetWorld(), V1, V2, FColor::Green, false, 1, 0, 1);
    }
}

void ABul_PiezaBase::TestRotate()
{
    auto RotateVector = [this](FVector OldVector) {
        FVector ActorVector = this->GetActorLocation();
        FVector BlockVector = OldVector;
        FVector TempVector = BlockVector - ActorVector;
        TempVector = ActorVector + TempVector.RotateAngleAxis(90.0, FVector(1.0, 0.0, 0.0));
        return TempVector;
    };

    if (!CheckWillCollision(RotateVector))
    {
        UE_LOG(LogTemp, Warning, TEXT("now can rotate"));
        FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, 0.0, -90.0);
        this->SetActorRelativeRotation(NewRotation);
  
    }
}

void ABul_PiezaBase::Dismiss()
{
    Blocks.Empty();
}

void ABul_PiezaBase::MoveLeft()
{
    auto MoveVectorLeft = [](FVector OldVector) {
        OldVector.Y -= 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorLeft))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Y -= 10;
        SetActorLocation(NewLocation);

    }
}

void ABul_PiezaBase::MoveRight()
{
    auto MoveVectorRight = [](FVector OldVector) {
        OldVector.Y += 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorRight))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Y += 10;
        SetActorLocation(NewLocation);

    }
}

bool ABul_PiezaBase::MoveDown(bool PlaySound)
{
    auto MoveVectorDown = [](FVector OldVector) {
        OldVector.Z -= 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorDown))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Z -= 10;
        SetActorLocation(NewLocation);

        return true;
    }
    else
    {
        return false;
    }
}

bool ABul_PiezaBase::CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck)
{
    FCollisionQueryParams Params;
    for (ABlock* B : Blocks)
    {
        Params.AddIgnoredActor(B);
    }

    for (ABlock* B : Blocks)
    {
        FVector TempVector = B->GetActorLocation();
        TempVector = ChangeBeforeCheck(TempVector);

        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 4.0f, 4.0f));
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            TempVector, B->GetActorQuat(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);

        if (b)
        {
            for (auto&& Result : OutOverlaps)
            {
                UE_LOG(LogTemp, Warning, TEXT("OverLapped with actor %s, component=%s"), *Result.GetActor()->GetName(),
                    *Result.GetComponent()->GetName());
            }
            return true;
        }
    }

    return false;
}
