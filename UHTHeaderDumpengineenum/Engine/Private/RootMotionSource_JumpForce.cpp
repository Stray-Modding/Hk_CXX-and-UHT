#include "RootMotionSource_JumpForce.h"

FRootMotionSource_JumpForce::FRootMotionSource_JumpForce() {
    this->Distance = 0.00f;
    this->Height = 0.00f;
    this->bDisableTimeout = false;
    this->PathOffsetCurve = NULL;
    this->TimeMappingCurve = NULL;
}

