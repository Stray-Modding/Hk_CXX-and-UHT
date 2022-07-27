#include "PointLight.h"
#include "PointLightComponent.h"

void APointLight::SetRadius(float NewRadius) {
}

void APointLight::SetLightFalloffExponent(float NewLightFalloffExponent) {
}

APointLight::APointLight() {
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent0"));
}

