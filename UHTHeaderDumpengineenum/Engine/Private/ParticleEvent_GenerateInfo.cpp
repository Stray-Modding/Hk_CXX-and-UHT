#include "ParticleEvent_GenerateInfo.h"

FParticleEvent_GenerateInfo::FParticleEvent_GenerateInfo() {
    this->Type = EPET_Any;
    this->Frequency = 0;
    this->ParticleFrequency = 0;
    this->FirstTimeOnly = false;
    this->LastTimeOnly = false;
    this->UseReflectedImpactVector = false;
    this->bUseOrbitOffset = false;
}

