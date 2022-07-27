#include "ParticleModuleBeamTarget.h"

UParticleModuleBeamTarget::UParticleModuleBeamTarget() {
    this->TargetMethod = PEB2STM_Default;
    this->bTargetAbsolute = false;
    this->bLockTarget = false;
    this->TargetTangentMethod = PEB2STTM_Direct;
    this->bLockTargetTangent = false;
    this->bLockTargetStength = false;
    this->LockRadius = 10.00f;
}

