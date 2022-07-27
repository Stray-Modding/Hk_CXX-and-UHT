#include "LuminAROrigin.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MRMesh -ObjectName=MRMeshComponent -FallbackName=MRMeshComponent

ALuminAROrigin::ALuminAROrigin() {
    this->MRMeshComponent = CreateDefaultSubobject<UMRMeshComponent>(TEXT("MRMesh"));
}

