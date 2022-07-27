#include "DistributionVectorUniformCurve.h"

UDistributionVectorUniformCurve::UDistributionVectorUniformCurve() {
    this->bLockAxes1 = false;
    this->bLockAxes2 = false;
    this->LockedAxes[0] = EDVLF_None;
    this->LockedAxes[1] = EDVLF_None;
    this->MirrorFlags[0] = EDVMF_Different;
    this->MirrorFlags[1] = EDVMF_Different;
    this->MirrorFlags[2] = EDVMF_Different;
    this->bUseExtremes = false;
}

