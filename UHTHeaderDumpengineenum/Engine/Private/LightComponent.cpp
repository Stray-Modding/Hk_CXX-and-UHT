#include "LightComponent.h"

class UMaterialInterface;
class UTextureLightProfile;

void ULightComponent::SetVolumetricScatteringIntensity(float NewIntensity) {
}

void ULightComponent::SetUseTemperature(bool bNewValue) {
}

void ULightComponent::SetUseIESBrightness(bool bNewValue) {
}

void ULightComponent::SetTransmission(bool bNewValue) {
}

void ULightComponent::SetTemperature(float NewTemperature) {
}

void ULightComponent::SetSpecularScale(float newValue) {
}

void ULightComponent::SetShadowSlopeBias(float newValue) {
}

void ULightComponent::SetShadowBias(float newValue) {
}

void ULightComponent::SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
}

void ULightComponent::SetLightFunctionScale(FVector NewLightFunctionScale) {
}

void ULightComponent::SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial) {
}

void ULightComponent::SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) {
}

void ULightComponent::SetLightFunctionDisabledBrightness(float newValue) {
}

void ULightComponent::SetLightColor(FLinearColor NewLightColor, bool bSRGB) {
}

void ULightComponent::SetIntensity(float NewIntensity) {
}

void ULightComponent::SetIndirectLightingIntensity(float NewIntensity) {
}

void ULightComponent::SetIESTexture(UTextureLightProfile* newValue) {
}

void ULightComponent::SetIESBrightnessScale(float newValue) {
}

void ULightComponent::SetForceCachedShadowsForMovablePrimitives(bool bNewValue) {
}

void ULightComponent::SetEnableLightShaftBloom(bool bNewValue) {
}

void ULightComponent::SetBloomTint(FColor newValue) {
}

void ULightComponent::SetBloomThreshold(float newValue) {
}

void ULightComponent::SetBloomScale(float newValue) {
}

void ULightComponent::SetBloomMaxBrightness(float newValue) {
}

void ULightComponent::SetAffectTranslucentLighting(bool bNewValue) {
}

void ULightComponent::SetAffectDynamicIndirectLighting(bool bNewValue) {
}

ULightComponent::ULightComponent() {
    this->Temperature = 6500.00f;
    this->MaxDrawDistance = 0.00f;
    this->MaxDistanceFadeRange = 0.00f;
    this->bUseTemperature = false;
    this->ShadowMapChannel = 0;
    this->MinRoughness = 0.00f;
    this->SpecularScale = 1.00f;
    this->ShadowResolutionScale = 1.00f;
    this->ShadowBias = 0.50f;
    this->ShadowSlopeBias = 0.50f;
    this->ShadowSharpen = 0.00f;
    this->ContactShadowLength = 0.00f;
    this->ContactShadowLengthInWS = false;
    this->InverseSquaredFalloff = false;
    this->CastTranslucentShadows = false;
    this->bCastShadowsFromCinematicObjectsOnly = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bForceCachedShadowsForMovablePrimitives = false;
    this->LightFunctionMaterial = NULL;
    this->IESTexture = NULL;
    this->bUseIESBrightness = false;
    this->IESBrightnessScale = 1.00f;
    this->LightFunctionFadeDistance = 100000.00f;
    this->DisabledBrightness = 0.50f;
    this->bEnableLightShaftBloom = false;
    this->BloomScale = 0.20f;
    this->BloomThreshold = 0.00f;
    this->BloomMaxBrightness = 100.00f;
    this->bUseRayTracedDistanceFieldShadows = false;
    this->RayStartOffsetDepthScale = 0.00f;
}

