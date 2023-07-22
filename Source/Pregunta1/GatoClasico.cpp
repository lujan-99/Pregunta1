

#include "GatoClasico.h"

// Sets default values
AGatoClasico::AGatoClasico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	MeshCat= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCat"));
	RootComponent= MeshCat;
}

// Called when the game starts or when spawned
void AGatoClasico::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGatoClasico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

