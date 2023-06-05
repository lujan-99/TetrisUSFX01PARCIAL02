
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obs_Subscriptor.h"
#include "Obs_Morph.h"
#include "Block.h"
#include "Obs_Peligro.h"
#include <functional>
#include "Obs_Jugador.generated.h"

UCLASS()
class TETRISUSFX01_API AObs_Jugador : public AActor, public IObs_Subscriptor, public IObs_Morph
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObs_Jugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
		AObs_Peligro* Peligro;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;

public:
	virtual void Update(class AObs_Advertencia* Advertencia) override;
	//Execute this Subscriber routine
	virtual void Morph();
	//Set the Clock Tower of this Subscriber
	void SetPeligro(AObs_Peligro* _peligro);


};
