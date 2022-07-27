#include "ParticleModuleBeamNoise.h"

UParticleModuleBeamNoise::UParticleModuleBeamNoise() {
    this->bLowFreq_Enabled = false;
    this->Frequency = 0;
    this->Frequency_LowRange = 0;
    this->bNRScaleEmitterTime = false;
    this->bSmooth = false;
    this->NoiseLockRadius = 1.00f;
    this->bNoiseLock = false;
    this->bOscillate = false;
    this->NoiseLockTime = 0.00f;
    this->NoiseTension = 0.50f;
    this->bUseNoiseTangents = false;
    this->NoiseTessellation = 1;
    this->bTargetNoise = false;
    this->FrequencyDistance = 0.00f;
    this->bApplyNoiseScale = false;
}

