// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Bul_PiezaBase.h"
#include "Obs_Jugador.h"
#include "State_Escenario.h"
#include "Adap_Adaptador.h"
#include "Facade_Fachada.h"
#include "Dec_Bailar.h"
#include "Piece.h"
#include "Board.generated.h"

UCLASS()
class TETRISUSFX01_API ABoard : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoard();
//Decorator
	UPROPERTY()
		UDec_Bailar* Bailar;
//Singleton
 	   	UPROPERTY()
	ABoard* Instancia;
//Adaptador,Adapter
	UPROPERTY()
		UAdap_Adaptador* Componente;

	UPROPERTY()
		AFacade_Fachada* Personita;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//State
	//////////////////////////////////////////
	UPROPERTY()
		AState_Escenario* Escenario01;

	UPROPERTY()
		AState_Escenario* Escen01;
	////////////////////////////////
	UPROPERTY()
	ABul_PiezaBase* CurrentPiece;

	void Rotate(); 
	void MoveLeft(); 
	void MoveRight();
	void MoveDown(); 
	void NewPiece();
	void CheckLine();
	void MoveDownToEnd();

private:
	enum PieceStatus { PS_NOT_INITED, PS_MOVING, PS_GOT_BOTTOM };
	PieceStatus Status = PS_NOT_INITED;

	const float CoolDown = 0.5f;
	float CoolLeft = 0.5f;
	bool bGameOver = false;

	bool CheckGameOver();
//Los punteros del Observer
	UPROPERTY(VisibleAnywhere, Category = "Main")
		AObs_Peligro* Peligro;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		AObs_Jugador* Jugador;
//Los punteros del Builder
private:

	//CONSTRUCTORES

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABul_ConstructorPieza01* ConstructorPieza01;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABul_ConstructorPieza02* ConstructorPieza02;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABul_ConstructorPieza03* ConstructorPieza03;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABul_ConstructorPieza04* ConstructorPieza04;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABul_ConstructorPieza05* ConstructorPieza05;

	//DIRECTOR

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABul_DirectorPieza* DirectorPieza;

};
