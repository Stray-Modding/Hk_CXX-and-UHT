#include "MagicLeapHeadTrackingState.h"

FMagicLeapHeadTrackingState::FMagicLeapHeadTrackingState() {
    this->Mode = EMagicLeapHeadTrackingMode::PositionAndOrientation;
    this->Error = EMagicLeapHeadTrackingError::None;
    this->Confidence = 0.00f;
}

