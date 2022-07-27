#include "PhysicsVolume.h"

APhysicsVolume::APhysicsVolume() {
    this->TerminalVelocity = 4000.00f;
    this->Priority = 0;
    this->FluidFriction = 0.30f;
    this->bWaterVolume = false;
    this->bPhysicsOnContact = false;
}

