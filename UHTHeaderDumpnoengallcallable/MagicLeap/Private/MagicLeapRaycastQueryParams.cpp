#include "MagicLeapRaycastQueryParams.h"

FMagicLeapRaycastQueryParams::FMagicLeapRaycastQueryParams() {
    this->Width = 0;
    this->Height = 0;
    this->HorizontalFovDegrees = 0.00f;
    this->CollideWithUnobserved = false;
    this->UserData = 0;
}

