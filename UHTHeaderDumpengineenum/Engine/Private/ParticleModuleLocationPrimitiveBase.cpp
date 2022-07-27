#include "ParticleModuleLocationPrimitiveBase.h"

UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase() {
    this->Positive_X = true;
    this->Positive_Y = true;
    this->Positive_Z = true;
    this->Negative_X = true;
    this->Negative_Y = true;
    this->Negative_Z = true;
    this->SurfaceOnly = false;
    this->Velocity = false;
}

