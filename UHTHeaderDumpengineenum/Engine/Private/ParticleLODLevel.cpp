#include "ParticleLODLevel.h"

UParticleLODLevel::UParticleLODLevel() {
    this->Level = 0;
    this->bEnabled = true;
    this->RequiredModule = NULL;
    this->TypeDataModule = NULL;
    this->SpawnModule = NULL;
    this->EventGenerator = NULL;
    this->ConvertedModules = true;
    this->PeakActiveParticles = 0;
}

