#include "SpotLight.h"
#include "SpotLightComponent.h"

void ASpotLight::SetOuterConeAngle(float NewOuterConeAngle) {
}

void ASpotLight::SetInnerConeAngle(float NewInnerConeAngle) {
}

ASpotLight::ASpotLight() {
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightComponent0"));
}

