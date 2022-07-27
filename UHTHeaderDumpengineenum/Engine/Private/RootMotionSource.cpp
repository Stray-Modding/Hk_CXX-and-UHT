#include "RootMotionSource.h"

FRootMotionSource::FRootMotionSource() {
    this->Priority = 0;
    this->LocalID = 0;
    this->AccumulateMode = ERootMotionAccumulateMode::Override;
    this->StartTime = 0.00f;
    this->CurrentTime = 0.00f;
    this->PreviousTime = 0.00f;
    this->Duration = 0.00f;
    this->bInLocalSpace = false;
}

