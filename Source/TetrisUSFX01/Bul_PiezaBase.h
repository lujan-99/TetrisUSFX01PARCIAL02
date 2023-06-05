// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <functional>
#include "Block.h"
#include "Bul_PiezaInterface.h"
#include <vector>
#include "Bul_PiezaBase.generated.h"

UCLASS()
class TETRISUSFX01_API ABul_PiezaBase : public AActor, public IBul_PiezaInterface	
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABul_PiezaBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;//revisar

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY()
		class USceneComponent* SceneComponent;

	void DrawDebugLines();
	void TestRotate();
	void MoveLeft();
	void MoveRight();
	bool MoveDown(bool PlaySound = true);
	void Dismiss();
	bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck);

	UPROPERTY(EditAnywhere)
		TArray<class UMaterial*> Colors;

private:

	TArray<ABlock*> Blocks;
	int Index;
	int tipoColor;

	std::vector<std::vector<std::pair<float, float>>> tipoPieza =
	{

		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},
		{{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},
		{{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		{{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		
	};

public:
	void SpawnBlocks();
	
	int GetIndex() const { return Index; }
	void setColor(int _color) {
		tipoColor = _color;
		
	}
	int getTipoColor() {
		return tipoColor;
	}

	void SetTipoPieza(std::vector<std::vector<std::pair<float, float>>> _tipoPieza) {
		tipoPieza = _tipoPieza;
	}
};
