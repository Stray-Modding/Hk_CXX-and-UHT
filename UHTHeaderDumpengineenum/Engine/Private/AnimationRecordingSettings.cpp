#include "AnimationRecordingSettings.h"

FAnimationRecordingSettings::FAnimationRecordingSettings() {
    this->bRecordInWorldSpace = false;
    this->bRemoveRootAnimation = false;
    this->bAutoSaveAsset = false;
    this->SampleRate = 0.00f;
    this->Length = 0.00f;
    this->InterpMode = RCIM_Linear;
    this->TangentMode = RCTM_Auto;
    this->bRecordTransforms = false;
    this->bRecordCurves = false;
}

