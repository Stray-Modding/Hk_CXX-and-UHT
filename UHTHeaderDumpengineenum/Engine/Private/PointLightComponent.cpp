#include "PointLightComponent.h"

void UPointLightComponent::SetSourceRadius(float bNewValue) {
}

void UPointLightComponent::SetSourceLength(float newValue) {
}

void UPointLightComponent::SetSoftSourceRadius(float bNewValue) {
}

void UPointLightComponent::SetLightFalloffExponent(float NewLightFalloffExponent) {
}

UPointLightComponent::UPointLightComponent() {
    this->bUseInverseSquaredFalloff = true;
    this->LightFalloffExponent = 8.00f;
    this->SourceRadius = 0.00f;
    this->SoftSourceRadius = 0.00f;
    this->SourceLength = 0.00f;
}

