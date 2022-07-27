#include "AnimNotify_PlaySound.h"

UAnimNotify_PlaySound::UAnimNotify_PlaySound() {
    this->Sound = NULL;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bFollow = false;
}

