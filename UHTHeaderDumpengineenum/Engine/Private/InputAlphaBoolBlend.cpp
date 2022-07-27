#include "InputAlphaBoolBlend.h"

FInputAlphaBoolBlend::FInputAlphaBoolBlend() {
    this->blendInTime = 0.00f;
    this->blendOutTime = 0.00f;
    this->BlendOption = EAlphaBlendOption::Linear;
    this->bInitialized = false;
    this->CustomCurve = NULL;
}

