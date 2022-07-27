#include "ParticleSysParam.h"

FParticleSysParam::FParticleSysParam() {
    this->ParamType = PSPT_None;
    this->Scalar = 0.00f;
    this->Scalar_Low = 0.00f;
    this->Actor = NULL;
    this->Material = NULL;
}

