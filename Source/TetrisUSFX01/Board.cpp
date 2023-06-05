// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "Bul_ConstructorPieza01.h"
#include "Bul_ConstructorPieza02.h"
#include "Bul_ConstructorPieza03.h"
#include "Bul_ConstructorPieza04.h"
#include "Bul_ConstructorPieza05.h"
#include "Bul_DirectorPieza.h"
#include "Bul_PiezaBase.h"
#include "Obs_Jugador.h"
#include "Strat_Actor.h"
#include "State_Escenario.h"
#include "Strat_Estrategia01.h"
#include "Strat_Estrategia02.h"
#include "Strat_Estrategia03.h"
#include "Fact_CreadorEscenario.h"
#include "Fact_CreadorEscenarioMateria.h"
#include "Fact_Escenario.h"
#include "Fact_Escenario01.h"
#include "Fact_Escenario02.h"
#include "Fact_Escenario03.h"

#include "Kismet/GameplayStatics.h"
// Sets default values

ABoard::ABoard()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    //SINGLETON
    // SpawnedBoard = GetWorld()->SpawnActor<ABoard>(ABoard::StaticClass());
    //=======================================================================================
    //En esta parte del codigo andamos buscando si ya existe una instancia de la clase Board
    TArray<AActor*> Instancias;
    //esta funcion busaca todos los actores de la clase Board y los guarda en el TArray
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABoard::StaticClass(), Instancias);

    if (Instancias.Num() > 1)
    {
        // Si ya existe una instancia de la clase Board, entonces destruimos esta instancia
        Instancia = Cast<ABoard>(Instancias[0]);
        // Por si acaso convertimos los actores del TArray en actores de la clase Board con el Cast
        //Cast: Esto se hace utilizando el operador "cast", que verifica si el objeto en cuestión es una instancia de la clase de destino. 
        //Si es así, se devuelve un puntero a ese objeto en su nueva forma de clase. Si no es así, se devuelve un puntero nulo.
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s ya existe"), *Instancia->GetName()));
        //Y lo destruimos
        Destroy();
    }
}

// Called when the game starts or when spawned
void ABoard::BeginPlay()
{
	Super::BeginPlay();
    //Strategi

    AStrat_Actor* Actor = GetWorld()->SpawnActor<AStrat_Actor>(AStrat_Actor::StaticClass());
    AStrat_Estrategia01* Estrategia01 = NewObject<AStrat_Estrategia01>(AStrat_Estrategia01::StaticClass());
    AStrat_Estrategia02* Estrategia02 = NewObject<AStrat_Estrategia02>(AStrat_Estrategia02::StaticClass());
    AStrat_Estrategia03* Estrategia03 = NewObject<AStrat_Estrategia03>(AStrat_Estrategia03::StaticClass());
    Actor->Maniobra(Estrategia01);
    Actor->Pelear();
    //Adap
    Componente = NewObject<UAdap_Adaptador>(Actor);
    Componente->SetLimitesMovimiento(10.0f, 20.0f, 20.0f);
    Componente->RegisterComponent();
    //Factori 
    AFact_CreadorEscenario* CreadorEscenarioMaterial = GetWorld()->SpawnActor<AFact_CreadorEscenarioMateria>(AFact_CreadorEscenarioMateria::StaticClass());
    int opc = FMath::RandRange(1, 3);
    //int opc = 3;
    AFact_Escenario* Escenario;
    switch (opc) {
        case 1: 
            Escenario = CreadorEscenarioMaterial->CrearEscenario(TEXT("Material1")); break;
        case 2:
            Escenario = CreadorEscenarioMaterial->CrearEscenario(TEXT("Material2")); break;
        case 3:
            Escenario = CreadorEscenarioMaterial->CrearEscenario(TEXT("Material0")); break;

    }
    //State
    //////////////////////////////
    Escenario01 = GetWorld()->SpawnActor<AState_Escenario>(AState_Escenario::StaticClass());
    Escen01 = Escenario01->iniciar();
    ///////////////////////////////
	
    for (TActorIterator<APiece> it(GetWorld()); it; ++it)
    {
        if (it->GetFName() == TEXT("DissmissPieces"))
        {
            it->Dismiss();
            it->Destroy();
        }
    }
    //observer
    Peligro = GetWorld()->SpawnActor<AObs_Peligro>(AObs_Peligro::StaticClass());
    Jugador = GetWorld()->SpawnActor<AObs_Jugador>(AObs_Jugador::StaticClass());
    Jugador->SetPeligro(Peligro);
    
    //Bulider
    DirectorPieza = GetWorld()->SpawnActor<ABul_DirectorPieza>(ABul_DirectorPieza::StaticClass());
    //Facade
    FVector Location(0.0, 100.0, 195.0);
    FRotator Rotation(0.0, 0.0, 0.0);
    Personita = GetWorld()->SpawnActor<AFacade_Fachada>(AFacade_Fachada::StaticClass());
    Personita->SetActorRelativeLocation(FVector(Location));
    Personita->SetActorRelativeRotation(FRotator(Rotation));
    Personita->Spaw();
    //Decorater
    //Bailar = GetWorld()->SpawnActor<UDec_Bailar>(UDec_Bailar::StaticClass());
    //Bailar->Conectar(Personita);

}

// Called every frame
void ABoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    Escenario01->cambiarEscenario(Escen01);
    if (bGameOver)
    {
        return;
    }

    switch (Status)
    {
    case PS_NOT_INITED:
        NewPiece();
        CoolLeft = CoolDown;
        Status = PS_MOVING;
        break;
    case PS_MOVING:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            MoveDown();
        }
        break;
    case PS_GOT_BOTTOM:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            if (CurrentPiece)
            {
                CurrentPiece->Dismiss();
                CurrentPiece->Destroy();
            }
            CurrentPiece = nullptr;
            NewPiece();
            CoolLeft = CoolDown;
            Status = PS_MOVING;
        }
        break;
    default:
        break;
    }
}

// Called to bind functionality to input
void ABoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Rotate", IE_Pressed, this, &ABoard::Rotate);
    PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABoard::MoveLeft);
    PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ABoard::MoveRight);
    PlayerInputComponent->BindAction("MoveDownToEnd", IE_Pressed, this, &ABoard::MoveDownToEnd);
    PlayerInputComponent->BindAction("NewPiece", IE_Pressed, this, &ABoard::NewPiece);
    //PlayerInputComponent->BindAction("CheckLine", IE_Pressed, this, &ABoard::CheckLine);

}

void ABoard::Rotate()
{
    if (CurrentPiece && Status != PS_GOT_BOTTOM)
    {
        CurrentPiece->TestRotate();
    }
}

void ABoard::MoveLeft()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveLeft();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveRight()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveRight();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveDown()
{
    if (CurrentPiece)
    {
        if (!CurrentPiece->MoveDown())
        {
            Status = PS_GOT_BOTTOM;
        }
        CoolLeft = CoolDown;
    }
}

void ABoard::NewPiece()
{
  
    CheckLine();
    if (CurrentPiece)
    {
        CurrentPiece->Dismiss();
        CurrentPiece->Destroy();
    }


    FVector Location(0.0, 5.0, 195.0);
    FRotator Rotation(0.0, 0.0, 0.0);

    /*  FORMA DE SPAWN DE LOS DISTINTOS TIPOS DE PIEZAS
    --Primeramente instancia un constructor del tipo de pieza que queramos, esto es hija de la construccion padre
    ConstructorPiezaColorida = GetWorld()->SpawnActor<AConstructorPiezaColorida>(AConstructorPiezaColorida::StaticClass());
    --Luego se le pasa al director de piezas el constructor de la pieza que queremos
    DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaColorida);
    --Luego imprimimos el mensaje de el tipo de pieza
    GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA COLORIDA "));*/

    int Random = FMath::RandRange(0, 4);
    //int Random = 3;
    switch (Random)
    {
    case 0://COLORIDAS
        ConstructorPieza01 = GetWorld()->SpawnActor<ABul_ConstructorPieza01>(ABul_ConstructorPieza01::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPieza01);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA COLORIDA "));
        Peligro->SetTipo("Epilepticas");
        
        break;
    case 1://GRANDES
        ConstructorPieza02 = GetWorld()->SpawnActor<ABul_ConstructorPieza02>(ABul_ConstructorPieza02::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPieza02);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA GRANDE "));
        Peligro->SetTipo("Grandes");
        
        break;
    case 2://METALICAS
        ConstructorPieza03 = GetWorld()->SpawnActor<ABul_ConstructorPieza03>(ABul_ConstructorPieza03::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPieza03);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA METALICA "));
        
        break;
    case 3://HUECAS
        ConstructorPieza04 = GetWorld()->SpawnActor<ABul_ConstructorPieza04>(ABul_ConstructorPieza04::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPieza04);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA HUECAS "));
        Peligro->SetTipo("Huecas");
        break;
    case 4://TETROMINO O NORMALES
        ConstructorPieza05 = GetWorld()->SpawnActor<ABul_ConstructorPieza05>(ABul_ConstructorPieza05::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPieza05);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA TETROMINO "));
        break;
    }
    //  Una vez le pasamos el constructor al director de piezas, este se encarga de construir la pieza
    DirectorPieza->ConstruirPiezaBase();
    //instanciamos la pieza base y obtenemos un puntero a la pieza creada
    ABul_PiezaBase* PiezaBase = DirectorPieza->GetPiezaBase();
    //la igualamos a la pieza que baja en el tablero
    CurrentPiece = PiezaBase;
    //metemos las coordenadas de aparicion y llamamos a la funcion que dibuja spawnea
    CurrentPiece->SetActorRelativeLocation(FVector(Location));
    CurrentPiece->SetActorRelativeRotation(FRotator(Rotation));
    CurrentPiece->SpawnBlocks();
    bGameOver = CheckGameOver();
    if (bGameOver)
    {
        UE_LOG(LogTemp, Warning, TEXT("Game Over!!!!!!!!"));

    }
}

void ABoard::CheckLine()
{
    auto MoveDownFromLine = [this](int z) {
        FVector Location(0.0f, 0.0f, 5.0 * z + 100.0);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        FVector Extent(4.5f, 49.5f, 95.0 + 4.5 - 5.0 * z);
        CollisionShape.SetBox(Extent);
        DrawDebugBox(GetWorld(), Location, Extent, FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        if (GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam))
        {
            for (auto&& Result : OutOverlaps)
            {
                FVector NewLocation = Result.GetActor()->GetActorLocation();
                NewLocation.Z -= 10.0f;
                Result.GetActor()->SetActorLocation(NewLocation);
            }
        }
    };

    int z = 0;
    while (z < 20)
    {
        FVector Location(0.0f, 0.0f, 10.0f * z + 5.0f);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 49.0f, 4.0f));
        //DrawDebugBox(GetWorld(), Location, FVector(4.5f, 49.5f, 4.5f), FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);
        if (!b || OutOverlaps.Num() < 10)
        {
            ++z;
            continue;
        }
        else // this line is full, remove the line
        {
            UE_LOG(LogTemp, Warning, TEXT("Find FULL LINE at z=%d"), z);
            for (auto&& Result : OutOverlaps)
            {
                Result.GetActor()->Destroy();
            }
            MoveDownFromLine(z);

            /*if (LineRemoveSoundCue)
            {
                UGameplayStatics::PlaySoundAtLocation(GetWorld(), LineRemoveSoundCue, GetActorLocation(), GetActorRotation());
            }*/
        }
    }
}

void ABoard::MoveDownToEnd()
{
    if (!CurrentPiece)
    {
        return;
    }

    while (CurrentPiece->MoveDown())
    {
    }

    /*if (MoveToEndSoundCue)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), MoveToEndSoundCue, GetActorLocation(), GetActorRotation());
    }*/

    switch (Status)
    {
    case PS_MOVING:
        Status = PS_GOT_BOTTOM;
        CoolLeft = CoolDown;
        break;
    case PS_GOT_BOTTOM:
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Wrong status for MoveDownToEnd"));
        break;
    }
}

bool ABoard::CheckGameOver()
{
    if (!CurrentPiece)
    {
        UE_LOG(LogTemp, Warning, TEXT("NoPieces"));
        return true;
    }

    return CurrentPiece->CheckWillCollision([](FVector OldVector) { return OldVector; });
}
