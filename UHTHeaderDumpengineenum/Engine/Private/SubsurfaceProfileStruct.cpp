#include "SubsurfaceProfileStruct.h"

FSubsurfaceProfileStruct::FSubsurfaceProfileStruct() {
    this->MeanFreePathDistance = 0.00f;
    this->WorldUnitScale = 0.00f;
    this->bEnableBurley = false;
    this->ScatterRadius = 0.00f;
    this->ExtinctionScale = 0.00f;
    this->NormalScale = 0.00f;
    this->ScatteringDistribution = 0.00f;
    this->IOR = 0.00f;
    this->Roughness0 = 0.00f;
    this->Roughness1 = 0.00f;
    this->LobeMix = 0.00f;
}

