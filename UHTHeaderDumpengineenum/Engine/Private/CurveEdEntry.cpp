#include "CurveEdEntry.h"

FCurveEdEntry::FCurveEdEntry() {
    this->CurveObject = NULL;
    this->bHideCurve = 0;
    this->bColorCurve = 0;
    this->bFloatingPointColorCurve = 0;
    this->bClamp = 0;
    this->ClampLow = 0.00f;
    this->ClampHigh = 0.00f;
}

