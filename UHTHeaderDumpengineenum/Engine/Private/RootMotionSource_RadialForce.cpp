#include "RootMotionSource_RadialForce.h"

FRootMotionSource_RadialForce::FRootMotionSource_RadialForce() {
    this->LocationActor = NULL;
    this->Radius = 0.00f;
    this->Strength = 0.00f;
    this->bIsPush = false;
    this->bNoZForce = false;
    this->StrengthDistanceFalloff = NULL;
    this->StrengthOverTime = NULL;
    this->bUseFixedWorldDirection = false;
}

