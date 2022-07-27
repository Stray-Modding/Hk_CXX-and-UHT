#include "LODActor.h"
#include "StaticMeshComponent.h"

ALODActor::ALODActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->Proxy = NULL;
    this->LODDrawDistance = 5000.00f;
    this->LODLevel = 0;
    this->CachedNumHLODLevels = 1;
}

