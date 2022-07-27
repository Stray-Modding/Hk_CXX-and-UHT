#include "SoundNodeDoppler.h"

USoundNodeDoppler::USoundNodeDoppler() {
    this->DopplerIntensity = 1.00f;
    this->bUseSmoothing = false;
    this->SmoothingInterpSpeed = 5.00f;
}

