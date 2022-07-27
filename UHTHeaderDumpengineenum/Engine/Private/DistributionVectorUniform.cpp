#include "DistributionVectorUniform.h"

UDistributionVectorUniform::UDistributionVectorUniform() {
    this->bLockAxes = false;
    this->LockedAxes = EDVLF_None;
    this->MirrorFlags[0] = EDVMF_Different;
    this->MirrorFlags[1] = EDVMF_Different;
    this->MirrorFlags[2] = EDVMF_Different;
    this->bUseExtremes = false;
}

