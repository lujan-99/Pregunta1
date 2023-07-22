// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GatoClasico.generated.h"

//se convierte en una clase abstracta
UCLASS(Abstract)
class PREGUNTA1_API AGatoClasico : public AActor
{
	GENERATED_BODY()
	
public:	
	AGatoClasico();

protected:
	UPROPERTY()
		UStaticMeshComponent* MeshCat;
	UPROPERTY()
		UMaterial *MaterialCat;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Funcion que realiza una accion
	virtual void Accion() PURE_VIRTUAL(AGatoClasico::Accion, ;);
	FVector Location;
	FRotator Rotation;
	FVector Scale;
};
