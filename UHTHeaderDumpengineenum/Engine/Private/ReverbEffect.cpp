#include "ReverbEffect.h"

UReverbEffect::UReverbEffect() {
    this->bBypassEarlyReflections = true;
    this->ReflectionsDelay = 0.01f;
    this->GainHF = 0.89f;
    this->ReflectionsGain = 0.05f;
    this->bBypassLateReflections = false;
    this->LateDelay = 0.01f;
    this->DecayTime = 1.49f;
    this->Density = 1.00f;
    this->Diffusion = 1.00f;
    this->AirAbsorptionGainHF = 0.99f;
    this->DecayHFRatio = 0.83f;
    this->LateGain = 1.26f;
    this->Gain = 0.32f;
    this->RoomRolloffFactor = 0.00f;
}

