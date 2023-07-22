// Fill out your copyright notice in the Description page of Project Settings.
#include "GatoBasalto.h"

AGatoBasalto::AGatoBasalto()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/cat.cat'"));
	MeshCat->SetStaticMesh(Mesh.Object);
	MaterialCat= LoadObject<UMaterial>(nullptr , TEXT("Material'/Game/StarterContent/Materials/M_Basic_Wall.M_Basic_Wall'"));
	MeshCat->SetMaterial(0,MaterialCat);

}

void AGatoBasalto::BeginPlay()
{
	Super::BeginPlay();
	Location = FVector(0.0f, 10.0f, 100.0f);
	Rotation = FRotator(0.0f, 0.0f, 0.0f);
	Scale = FVector(0.1f, 0.1f, 0.1f);
	MeshCat->SetRelativeLocation(Location);
	MeshCat->SetRelativeRotation(Rotation);
	MeshCat->SetRelativeScale3D(Scale);
}

void AGatoBasalto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGatoBasalto::Accion()
{
	auto Locacion = this-> GetActorLocation();
	Locacion += FVector(0.0f,1.0f,0.0f);
	this->SetActorLocation(Locacion);
}
