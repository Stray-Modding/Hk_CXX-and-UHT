#include "LightmassPrimitiveSettings.h"

FLightmassPrimitiveSettings::FLightmassPrimitiveSettings() {
    this->bUseTwoSidedLighting = false;
    this->bShadowIndirectOnly = false;
    this->bUseEmissiveForStaticLighting = false;
    this->bUseVertexNormalForHemisphereGather = false;
    this->EmissiveLightFalloffExponent = 0.00f;
    this->EmissiveLightExplicitInfluenceRadius = 0.00f;
    this->EmissiveBoost = 0.00f;
    this->DiffuseBoost = 0.00f;
    this->FullyOccludedSamplesFraction = 0.00f;
}

