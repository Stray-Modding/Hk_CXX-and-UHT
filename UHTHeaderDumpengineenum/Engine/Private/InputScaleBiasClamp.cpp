#include "InputScaleBiasClamp.h"

FInputScaleBiasClamp::FInputScaleBiasClamp() {
    this->bMapRange = false;
    this->bClampResult = false;
    this->bInterpResult = false;
    this->Scale = 0.00f;
    this->Bias = 0.00f;
    this->ClampMin = 0.00f;
    this->ClampMax = 0.00f;
    this->InterpSpeedIncreasing = 0.00f;
    this->InterpSpeedDecreasing = 0.00f;
}

