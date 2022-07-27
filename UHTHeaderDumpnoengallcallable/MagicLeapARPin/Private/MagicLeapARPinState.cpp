#include "MagicLeapARPinState.h"

FMagicLeapARPinState::FMagicLeapARPinState() {
    this->Confidence = 0.00f;
    this->ValidRadius = 0.00f;
    this->RotationError = 0.00f;
    this->TranslationError = 0.00f;
    this->PinType = EMagicLeapARPinType::SingleUserSingleSession;
}

