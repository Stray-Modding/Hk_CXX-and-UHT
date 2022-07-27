#include "EmitterDynamicParameter.h"

FEmitterDynamicParameter::FEmitterDynamicParameter() {
    this->bUseEmitterTime = false;
    this->bSpawnTimeOnly = false;
    this->ValueMethod = EDPV_UserSet;
    this->bScaleVelocityByParamValue = false;
}

