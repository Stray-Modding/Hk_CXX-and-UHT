#include "ParticleRandomSeedInfo.h"

FParticleRandomSeedInfo::FParticleRandomSeedInfo() {
    this->bGetSeedFromInstance = false;
    this->bInstanceSeedIsIndex = false;
    this->bResetSeedOnEmitterLooping = false;
    this->bRandomlySelectSeedArray = false;
}

