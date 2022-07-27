#include "RealCurve.h"

FRealCurve::FRealCurve() {
    this->DefaultValue = 0.00f;
    this->PreInfinityExtrap = RCCE_Cycle;
    this->PostInfinityExtrap = RCCE_Cycle;
}

