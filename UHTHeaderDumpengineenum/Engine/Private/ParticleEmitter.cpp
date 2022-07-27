#include "ParticleEmitter.h"

UParticleEmitter::UParticleEmitter() {
    this->EmitterName = TEXT("Particle Emitter");
    this->SubUVDataOffset = 0;
    this->EmitterRenderMode = ERM_Normal;
    this->SignificanceLevel = EParticleSignificanceLevel::Critical;
    this->bUseLegacySpawningBehavior = false;
    this->ConvertedModules = true;
    this->bIsSoloing = false;
    this->bCookedOut = false;
    this->bDisabledLODsKeepEmitterAlive = false;
    this->bDisableWhenInsignficant = false;
    this->PeakActiveParticles = 0;
    this->InitialAllocationCount = 0;
    this->QualityLevelSpawnRateScale = 1.00f;
    this->DetailModeBitmask = 65535;
}

