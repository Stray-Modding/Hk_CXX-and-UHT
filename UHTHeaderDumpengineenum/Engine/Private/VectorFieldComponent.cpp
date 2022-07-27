#include "VectorFieldComponent.h"

void UVectorFieldComponent::SetIntensity(float NewIntensity) {
}

UVectorFieldComponent::UVectorFieldComponent() {
    this->VectorField = NULL;
    this->Intensity = 1.00f;
    this->Tightness = 0.00f;
    this->bPreviewVectorField = false;
}

