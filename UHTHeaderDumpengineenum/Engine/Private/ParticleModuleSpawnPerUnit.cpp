#include "ParticleModuleSpawnPerUnit.h"

UParticleModuleSpawnPerUnit::UParticleModuleSpawnPerUnit() {
    this->UnitScalar = 50.00f;
    this->MovementTolerance = 0.10f;
    this->MaxFrameDistance = 0.00f;
    this->bIgnoreSpawnRateWhenMoving = false;
    this->bIgnoreMovementAlongX = false;
    this->bIgnoreMovementAlongY = false;
    this->bIgnoreMovementAlongZ = false;
}

