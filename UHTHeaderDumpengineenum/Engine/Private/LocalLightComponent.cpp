#include "LocalLightComponent.h"

void ULocalLightComponent::SetIntensityUnits(ELightUnits NewIntensityUnits) {
}

void ULocalLightComponent::SetAttenuationRadius(float NewRadius) {
}

float ULocalLightComponent::GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle) {
    return 0.0f;
}

ULocalLightComponent::ULocalLightComponent() {
    this->IntensityUnits = ELightUnits::Unitless;
    this->Radius = 1024.00f;
    this->AttenuationRadius = 1000.00f;
}

