#include "RootMotionSource_MoveToDynamicForce.h"

FRootMotionSource_MoveToDynamicForce::FRootMotionSource_MoveToDynamicForce() {
    this->bRestrictSpeedToExpected = false;
    this->PathOffsetCurve = NULL;
    this->TimeMappingCurve = NULL;
}

