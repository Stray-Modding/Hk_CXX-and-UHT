#include "ConstraintDrive.h"

FConstraintDrive::FConstraintDrive() {
    this->Stiffness = 0.00f;
    this->Damping = 0.00f;
    this->MaxForce = 0.00f;
    this->bEnablePositionDrive = false;
    this->bEnableVelocityDrive = false;
}

