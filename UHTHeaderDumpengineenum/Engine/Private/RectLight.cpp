#include "RectLight.h"
#include "RectLightComponent.h"

ARectLight::ARectLight() {
    this->RectLightComponent = CreateDefaultSubobject<URectLightComponent>(TEXT("LightComponent0"));
}

