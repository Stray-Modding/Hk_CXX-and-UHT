#include "BasedMovementInfo.h"

FBasedMovementInfo::FBasedMovementInfo() {
    this->MovementBase = NULL;
    this->bServerHasBaseComponent = false;
    this->bRelativeRotation = false;
    this->bServerHasVelocity = false;
}

