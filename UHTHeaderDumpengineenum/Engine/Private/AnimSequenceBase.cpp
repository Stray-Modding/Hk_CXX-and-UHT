#include "AnimSequenceBase.h"

float UAnimSequenceBase::GetPlayLength() {
    return 0.0f;
}

UAnimSequenceBase::UAnimSequenceBase() {
    this->SequenceLength = 0.00f;
    this->RateScale = 1.00f;
}

