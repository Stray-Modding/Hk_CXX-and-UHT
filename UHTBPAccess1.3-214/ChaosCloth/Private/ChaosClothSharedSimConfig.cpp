#include "ChaosClothSharedSimConfig.h"

UChaosClothSharedSimConfig::UChaosClothSharedSimConfig() {
    this->IterationCount = 2;
    this->SubdivisionCount = 1;
    this->bUseLocalSpaceSimulation = true;
    this->bUseXPBDConstraints = false;
}

