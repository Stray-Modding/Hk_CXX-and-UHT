#include "SoundMix.h"

USoundMix::USoundMix() {
    this->bApplyEQ = false;
    this->EQPriority = 0.00f;
    this->InitialDelay = 0.00f;
    this->FadeInTime = 0.20f;
    this->Duration = -1.00f;
    this->FadeOutTime = 0.20f;
}

