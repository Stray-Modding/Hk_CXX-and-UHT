#include "ConstraintBaseParams.h"

FConstraintBaseParams::FConstraintBaseParams() {
    this->Stiffness = 0.00f;
    this->Damping = 0.00f;
    this->Restitution = 0.00f;
    this->ContactDistance = 0.00f;
    this->bSoftConstraint = false;
}

