#include "DebugFloatHistory.h"

FDebugFloatHistory::FDebugFloatHistory() {
    this->MaxSamples = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->bAutoAdjustMinMax = false;
}

