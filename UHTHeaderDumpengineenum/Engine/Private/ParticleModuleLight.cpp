#include "ParticleModuleLight.h"

UParticleModuleLight::UParticleModuleLight() {
    this->bUseInverseSquaredFalloff = true;
    this->bAffectsTranslucency = false;
    this->bPreviewLightRadius = false;
    this->SpawnFraction = 1.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->bHighQualityLights = false;
    this->bShadowCastingLights = false;
}

