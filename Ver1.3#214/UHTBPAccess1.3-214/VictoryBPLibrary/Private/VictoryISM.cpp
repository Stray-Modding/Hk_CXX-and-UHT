#include "VictoryISM.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent

AVictoryISM::AVictoryISM() {
    this->Mesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("VictoryInstancedMesh"));
}

