#include "TimeStretchCurve.h"

FTimeStretchCurve::FTimeStretchCurve() {
    this->SamplingRate = 0.00f;
    this->CurveValueMinPrecision = 0.00f;
    this->Sum_dT_i_by_C_i[0] = 0.00f;
    this->Sum_dT_i_by_C_i[1] = 0.00f;
    this->Sum_dT_i_by_C_i[2] = 0.00f;
}

