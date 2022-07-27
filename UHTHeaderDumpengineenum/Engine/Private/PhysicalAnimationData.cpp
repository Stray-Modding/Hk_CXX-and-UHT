#include "PhysicalAnimationData.h"

FPhysicalAnimationData::FPhysicalAnimationData() {
    this->bIsLocalSimulation = false;
    this->OrientationStrength = 0.00f;
    this->AngularVelocityStrength = 0.00f;
    this->PositionStrength = 0.00f;
    this->VelocityStrength = 0.00f;
    this->MaxLinearForce = 0.00f;
    this->MaxAngularForce = 0.00f;
}

