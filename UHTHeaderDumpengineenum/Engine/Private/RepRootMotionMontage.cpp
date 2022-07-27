#include "RepRootMotionMontage.h"

FRepRootMotionMontage::FRepRootMotionMontage() {
    this->bIsActive = false;
    this->AnimMontage = NULL;
    this->Position = 0.00f;
    this->MovementBase = NULL;
    this->bRelativePosition = false;
    this->bRelativeRotation = false;
}

