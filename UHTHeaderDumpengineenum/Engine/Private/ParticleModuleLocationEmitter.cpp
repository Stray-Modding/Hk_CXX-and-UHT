#include "ParticleModuleLocationEmitter.h"

UParticleModuleLocationEmitter::UParticleModuleLocationEmitter() {
    this->SelectionMethod = ELESM_Random;
    this->InheritSourceVelocity = false;
    this->InheritSourceVelocityScale = 1.00f;
    this->bInheritSourceRotation = false;
    this->InheritSourceRotationScale = 1.00f;
}

