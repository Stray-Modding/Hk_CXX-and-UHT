#include "VisibilityTrackKey.h"

FVisibilityTrackKey::FVisibilityTrackKey() {
    this->Time = 0.00f;
    this->Action = EVTA_Hide;
    this->ActiveCondition = EVTC_Always;
}

