#include "AnimUpdateRateParameters.h"

FAnimUpdateRateParameters::FAnimUpdateRateParameters() {
    this->ShiftBucket = EUpdateRateShiftBucket::ShiftBucket0;
    this->bInterpolateSkippedFrames = false;
    this->bShouldUseLodMap = false;
    this->bShouldUseMinLod = false;
    this->bSkipUpdate = false;
    this->bSkipEvaluation = false;
    this->UpdateRate = 0;
    this->EvaluationRate = 0;
    this->TickedPoseOffestTime = 0.00f;
    this->AdditionalTime = 0.00f;
    this->BaseNonRenderedUpdateRate = 0;
    this->MaxEvalRateForInterpolation = 0;
    this->SkippedUpdateFrames = 0;
    this->SkippedEvalFrames = 0;
}

