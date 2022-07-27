#include "SoundNodeEnveloper.h"

USoundNodeEnveloper::USoundNodeEnveloper() {
    this->LoopStart = 0.00f;
    this->LoopEnd = 0.00f;
    this->DurationAfterLoop = 0.00f;
    this->LoopCount = 0;
    this->bLoopIndefinitely = false;
    this->bLoop = false;
    this->VolumeInterpCurve = NULL;
    this->PitchInterpCurve = NULL;
    this->PitchMin = 1.00f;
    this->PitchMax = 1.00f;
    this->VolumeMin = 1.00f;
    this->VolumeMax = 1.00f;
}

