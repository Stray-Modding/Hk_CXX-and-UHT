#include "SpotLightComponent.h"

void USpotLightComponent::SetOuterConeAngle(float NewOuterConeAngle) {
}

void USpotLightComponent::SetInnerConeAngle(float NewInnerConeAngle) {
}

USpotLightComponent::USpotLightComponent() {
    this->InnerConeAngle = 0.00f;
    this->OuterConeAngle = 44.00f;
}

