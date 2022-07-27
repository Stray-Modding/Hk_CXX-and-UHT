#include "RawInputDeviceAxisProperties.h"

FRawInputDeviceAxisProperties::FRawInputDeviceAxisProperties() {
    this->bEnabled = false;
    this->bInverted = false;
    this->bGamepadStick = false;
    this->Offset = 0.00f;
}

