#include "SoundNodeOscillator.h"

USoundNodeOscillator::USoundNodeOscillator() {
    this->bModulateVolume = false;
    this->bModulatePitch = false;
    this->AmplitudeMin = 0.00f;
    this->AmplitudeMax = 0.00f;
    this->FrequencyMin = 0.00f;
    this->FrequencyMax = 0.00f;
    this->OffsetMin = 0.00f;
    this->OffsetMax = 0.00f;
    this->CenterMin = 0.00f;
    this->CenterMax = 0.00f;
}

