// Copyright Epic Games, Inc. All Rights Reserved.


#include "Pregunta1GameModeBase.h"
#include "GatoClasico.h"
#include "GatoBasalto.h"
#include "GatoAgua.h"
#include "Components/TextRenderComponent.h"

APregunta1GameModeBase::APregunta1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	Tiempo=0.0f;
	ControlTiempo=3.0f;

}

void APregunta1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Crear gatos"));

	GatoBasalto = GetWorld()->SpawnActor<AGatoBasalto>(FVector(0.0f,0.0f,0.0f),FRotator(0.0f,0.0f,0.0f));
	GatoAgua = GetWorld()->SpawnActor<AGatoAgua>(FVector(0.0f,0.0f,0.0f),FRotator(0.0f,0.0f,0.0f));

}

void APregunta1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Tiempo+=DeltaTime;
	Tiempo += DeltaTime;
	switch (tipo)
	{
	case 0:
		if (cont1 == 0)
		{
			GEngine->AddOnScreenDebugMessage(10, 10.0f, FColor::Red, TEXT("El Gato de Basalto se movera constantemente a la derecha"));
		}
		GatoBasalto->Accion();
		tipo = 1;
		cont1++;
		break;
	case 1:
		if (cont2 == 0)
		{
			GEngine->AddOnScreenDebugMessage(5, 10.0f, FColor::Red, TEXT("El Gato de agua estara creciendo"));
		}
		GatoAgua->Accion();
		tipo = 2;
		cont1++;
		break;
	default:
		if (cont1 == 0 && cont2 == 0)
		{
			GEngine->AddOnScreenDebugMessage(5, 40.0f, FColor::Red, TEXT("Ningun gato realiza una accion "));
		}
		tipo = 0;
		break;
	}
}

