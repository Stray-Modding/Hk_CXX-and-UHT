#include "DistributionFloatParameterBase.h"

UDistributionFloatParameterBase::UDistributionFloatParameterBase() {
    this->MinInput = 0.00f;
    this->MaxInput = 1.00f;
    this->MinOutput = 0.00f;
    this->MaxOutput = 1.00f;
    this->ParamMode = DPM_Normal;
}

