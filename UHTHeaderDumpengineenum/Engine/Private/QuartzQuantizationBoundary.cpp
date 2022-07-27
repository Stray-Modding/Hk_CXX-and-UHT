#include "QuartzQuantizationBoundary.h"

FQuartzQuantizationBoundary::FQuartzQuantizationBoundary() {
    this->Quantization = EQuartzCommandQuantization::Bar;
    this->Multiplier = 0.00f;
    this->CountingReferencePoint = EQuarztQuantizationReference::BarRelative;
    this->bFireOnClockStart = false;
}

