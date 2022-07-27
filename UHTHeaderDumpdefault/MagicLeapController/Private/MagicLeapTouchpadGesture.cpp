#include "MagicLeapTouchpadGesture.h"

FMagicLeapTouchpadGesture::FMagicLeapTouchpadGesture() {
    this->Hand = EControllerHand::Left;
    this->Type = EMagicLeapTouchpadGestureType::None;
    this->Direction = EMagicLeapTouchpadGestureDirection::None;
    this->Speed = 0.00f;
    this->Distance = 0.00f;
    this->FingerGap = 0.00f;
    this->Radius = 0.00f;
    this->Angle = 0.00f;
}

