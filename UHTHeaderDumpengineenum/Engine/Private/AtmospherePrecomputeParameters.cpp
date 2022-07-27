#include "AtmospherePrecomputeParameters.h"

FAtmospherePrecomputeParameters::FAtmospherePrecomputeParameters() {
    this->DensityHeight = 0.00f;
    this->DecayHeight = 0.00f;
    this->MaxScatteringOrder = 0;
    this->TransmittanceTexWidth = 0;
    this->TransmittanceTexHeight = 0;
    this->IrradianceTexWidth = 0;
    this->IrradianceTexHeight = 0;
    this->InscatterAltitudeSampleNum = 0;
    this->InscatterMuNum = 0;
    this->InscatterMuSNum = 0;
    this->InscatterNuNum = 0;
}

