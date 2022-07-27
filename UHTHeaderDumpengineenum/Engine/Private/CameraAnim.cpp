#include "CameraAnim.h"

UCameraAnim::UCameraAnim() {
    this->CameraInterpGroup = NULL;
    this->AnimLength = 3.00f;
    this->bRelativeToInitialTransform = true;
    this->bRelativeToInitialFOV = true;
    this->BaseFOV = 90.00f;
    this->BasePostProcessBlendWeight = 0.00f;
}

