#include "DirectionalLightComponent.h"

void UDirectionalLightComponent::SetShadowDistanceFadeoutFraction(float newValue) {
}

void UDirectionalLightComponent::SetShadowAmount(float newValue) {
}

void UDirectionalLightComponent::SetOcclusionMaskDarkness(float newValue) {
}

void UDirectionalLightComponent::SetLightShaftOverrideDirection(FVector newValue) {
}

void UDirectionalLightComponent::SetEnableLightShaftOcclusion(bool bNewValue) {
}

void UDirectionalLightComponent::SetDynamicShadowDistanceStationaryLight(float newValue) {
}

void UDirectionalLightComponent::SetDynamicShadowDistanceMovableLight(float newValue) {
}

void UDirectionalLightComponent::SetDynamicShadowCascades(int32 newValue) {
}

void UDirectionalLightComponent::SetCascadeTransitionFraction(float newValue) {
}

void UDirectionalLightComponent::SetCascadeDistributionExponent(float newValue) {
}

void UDirectionalLightComponent::SetAtmosphereSunLightIndex(int32 newValue) {
}

void UDirectionalLightComponent::SetAtmosphereSunLight(bool bNewValue) {
}

UDirectionalLightComponent::UDirectionalLightComponent() {
    this->ShadowCascadeBiasDistribution = 1.00f;
    this->bEnableLightShaftOcclusion = false;
    this->OcclusionMaskDarkness = 0.05f;
    this->OcclusionDepthRange = 100000.00f;
    this->WholeSceneDynamicShadowRadius = 20000.00f;
    this->DynamicShadowDistanceMovableLight = 20000.00f;
    this->DynamicShadowDistanceStationaryLight = 0.00f;
    this->DynamicShadowCascades = 3;
    this->CascadeDistributionExponent = 3.00f;
    this->CascadeTransitionFraction = 0.10f;
    this->ShadowDistanceFadeoutFraction = 0.10f;
    this->bUseInsetShadowsForMovableObjects = true;
    this->FarShadowCascadeCount = 0;
    this->FarShadowDistance = 300000.00f;
    this->DistanceFieldShadowDistance = 30000.00f;
    this->LightSourceAngle = 0.54f;
    this->LightSourceSoftAngle = 0.00f;
    this->ShadowSourceAngleFactor = 1.00f;
    this->TraceDistance = 10000.00f;
    this->bUsedAsAtmosphereSunLight = false;
    this->AtmosphereSunLightIndex = 0;
    this->bPerPixelAtmosphereTransmittance = false;
    this->bCastShadowsOnClouds = false;
    this->bCastShadowsOnAtmosphere = false;
    this->bCastCloudShadows = false;
    this->CloudShadowStrength = 1.00f;
    this->CloudShadowOnAtmosphereStrength = 1.00f;
    this->CloudShadowOnSurfaceStrength = 1.00f;
    this->CloudShadowDepthBias = 0.00f;
    this->CloudShadowExtent = 150.00f;
    this->CloudShadowMapResolutionScale = 1.00f;
    this->CloudShadowRaySampleCountScale = 1.00f;
    this->bCastModulatedShadows = false;
    this->ShadowAmount = 1.00f;
}

