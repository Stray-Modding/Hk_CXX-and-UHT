#include "ParticleModuleVectorFieldLocal.h"

UParticleModuleVectorFieldLocal::UParticleModuleVectorFieldLocal() {
    this->VectorField = NULL;
    this->Intensity = 1.00f;
    this->Tightness = 0.00f;
    this->bIgnoreComponentTransform = false;
    this->bTileX = false;
    this->bTileY = false;
    this->bTileZ = false;
    this->bUseFixDT = true;
}

