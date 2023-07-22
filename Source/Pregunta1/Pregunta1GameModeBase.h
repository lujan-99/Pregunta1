// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Pregunta1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PREGUNTA1_API APregunta1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	APregunta1GameModeBase();
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	class AGatoBasalto* GatoBasalto=nullptr;
	class AGatoAgua* GatoAgua=nullptr;
	int cont1;
	int cont2;
	int tipo;
	float Tiempo;
	float ControlTiempo;
};
