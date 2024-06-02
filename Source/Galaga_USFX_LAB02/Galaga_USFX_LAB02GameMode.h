// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_LAB02GameMode.generated.h"

UCLASS(MinimalAPI)
class AGalaga_USFX_LAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	class AReloj* Reloj;
	class ATorreEifel* TorreEifel;
	class APublicador* Publicador;
	class ANaveEstado* NaveEstado;

public:
	AGalaga_USFX_LAB02GameMode();

protected:
	virtual void BeginPlay() override;


public:

	UPROPERTY(VisibleAnywhere, Category = "FacadeNaves")
	class AFacadeNaves* FacadeNaves;

};