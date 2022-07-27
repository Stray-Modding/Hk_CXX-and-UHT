#include "ParticleModuleTypeDataAnimTrail.h"

UParticleModuleTypeDataAnimTrail::UParticleModuleTypeDataAnimTrail() {
    this->bDeadTrailsOnDeactivate = true;
    this->bEnablePreviousTangentRecalculation = true;
    this->bTangentRecalculationEveryFrame = false;
    this->TilingDistance = 0.00f;
    this->DistanceTessellationStepSize = 10.00f;
    this->TangentTessellationStepSize = 0.00f;
    this->WidthTessellationStepSize = 0.00f;
}

