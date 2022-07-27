#include "InteriorSettings.h"

FInteriorSettings::FInteriorSettings() {
    this->bIsWorldSettings = false;
    this->ExteriorVolume = 0.00f;
    this->ExteriorTime = 0.00f;
    this->ExteriorLPF = 0.00f;
    this->ExteriorLPFTime = 0.00f;
    this->InteriorVolume = 0.00f;
    this->InteriorTime = 0.00f;
    this->InteriorLPF = 0.00f;
    this->InteriorLPFTime = 0.00f;
}

