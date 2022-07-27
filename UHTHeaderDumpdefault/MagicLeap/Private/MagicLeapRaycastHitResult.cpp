#include "MagicLeapRaycastHitResult.h"

FMagicLeapRaycastHitResult::FMagicLeapRaycastHitResult() {
    this->HitState = EMagicLeapRaycastResultState::RequestFailed;
    this->Confidence = 0.00f;
    this->UserData = 0;
}

