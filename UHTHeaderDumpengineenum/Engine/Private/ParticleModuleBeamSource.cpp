#include "ParticleModuleBeamSource.h"

UParticleModuleBeamSource::UParticleModuleBeamSource() {
    this->SourceMethod = PEB2STM_Default;
    this->bSourceAbsolute = false;
    this->bLockSource = false;
    this->SourceTangentMethod = PEB2STTM_Direct;
    this->bLockSourceTangent = false;
    this->bLockSourceStength = false;
}

