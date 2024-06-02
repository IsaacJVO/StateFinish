#include "Galaga_USFX_LAB02GameMode.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "Reloj.h"
#include "Publicador.h"
#include "TorreEifel.h"
#include "NaveEstado.h"
#include "FacadeNaves.h"


AGalaga_USFX_LAB02GameMode::AGalaga_USFX_LAB02GameMode()
{
    DefaultPawnClass = AGalaga_USFX_LAB02Pawn::StaticClass();

}

void AGalaga_USFX_LAB02GameMode::BeginPlay()
{
    Super::BeginPlay();

    FacadeNaves = GetWorld()->SpawnActor<AFacadeNaves>(AFacadeNaves::StaticClass());

    FacadeNaves->SPAWN_NAVES_ENEMIGAS();
    FacadeNaves->SpawnPowerUpVelocidad();
    //*********************************************************************************
    FVector ubicacionReloj = FVector(-1160.0f, -1220.0f, 150.0f);
    FVector ubicacionTorreEifel = FVector(-1200.0f, 1180.0f, 600.0f);
    FRotator rotacionReloj = FRotator(0.0f, 0.0f, 0.0f);
    FRotator rotacionTorreEifel = FRotator(60.0f, -40.0f, 0.0f);


    Reloj = GetWorld()->SpawnActor<AReloj>(ubicacionReloj, rotacionReloj);
    TorreEifel = GetWorld()->SpawnActor<ATorreEifel>(ubicacionTorreEifel, rotacionTorreEifel);



    Publicador = GetWorld()->SpawnActor<APublicador>(APublicador::StaticClass());
    TorreEifel->SetPublicador(Publicador);
    Publicador->SubscriptorReloj(Reloj); 

    //******************************************STATE****************************************************
    FVector ubicacionNaveEstado = FVector(-1570.0f, 0.0f, 200.0f);
    FRotator rotacionNaveEstado = FRotator(0.0f, 0.0f, 0.0f);

    NaveEstado = GetWorld()->SpawnActor<ANaveEstado>(ubicacionNaveEstado, rotacionNaveEstado);

}




