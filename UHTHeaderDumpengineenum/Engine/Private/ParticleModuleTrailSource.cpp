#include "ParticleModuleTrailSource.h"

UParticleModuleTrailSource::UParticleModuleTrailSource() {
    this->SourceMethod = PET2SRCM_Default;
    this->bLockSourceStength = false;
    this->SourceOffsetCount = 0;
    this->SelectionMethod = EPSSM_Sequential;
    this->bInheritRotation = false;
}

