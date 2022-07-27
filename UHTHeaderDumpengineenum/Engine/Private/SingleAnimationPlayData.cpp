#include "SingleAnimationPlayData.h"

FSingleAnimationPlayData::FSingleAnimationPlayData() {
    this->AnimToPlay = NULL;
    this->bSavedLooping = false;
    this->bSavedPlaying = false;
    this->SavedPosition = 0.00f;
    this->SavedPlayRate = 0.00f;
}

