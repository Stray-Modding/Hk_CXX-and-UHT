#include "PhysicsCollisionHandler.h"

UPhysicsCollisionHandler::UPhysicsCollisionHandler() {
    this->ImpactThreshold = 0.00f;
    this->ImpactReFireDelay = 0.10f;
    this->DefaultImpactSound = NULL;
    this->LastImpactSoundTime = 0.00f;
}

