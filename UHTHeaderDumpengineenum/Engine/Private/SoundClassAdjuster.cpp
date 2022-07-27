#include "SoundClassAdjuster.h"

FSoundClassAdjuster::FSoundClassAdjuster() {
    this->SoundClassObject = NULL;
    this->VolumeAdjuster = 0.00f;
    this->PitchAdjuster = 0.00f;
    this->LowPassFilterFrequency = 0.00f;
    this->bApplyToChildren = false;
    this->VoiceCenterChannelVolumeAdjuster = 0.00f;
}

