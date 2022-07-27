#include "VectorFieldVolume.h"
#include "VectorFieldComponent.h"

AVectorFieldVolume::AVectorFieldVolume() {
    this->VectorFieldComponent = CreateDefaultSubobject<UVectorFieldComponent>(TEXT("VectorFieldComponent0"));
}

