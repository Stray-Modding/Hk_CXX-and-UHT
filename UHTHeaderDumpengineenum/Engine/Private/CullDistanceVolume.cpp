#include "CullDistanceVolume.h"

ACullDistanceVolume::ACullDistanceVolume() {
    this->CullDistances.AddDefaulted(2);
    this->bEnabled = true;
}

