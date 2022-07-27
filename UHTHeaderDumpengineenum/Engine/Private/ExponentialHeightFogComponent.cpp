#include "ExponentialHeightFogComponent.h"

class UTextureCube;

void UExponentialHeightFogComponent::SetVolumetricFogScatteringDistribution(float newValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(float newValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFogEmissive(FLinearColor newValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFogDistance(float newValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFogAlbedo(FColor newValue) {
}

void UExponentialHeightFogComponent::SetVolumetricFog(bool bNewValue) {
}

void UExponentialHeightFogComponent::SetStartDistance(float Value) {
}

void UExponentialHeightFogComponent::SetNonDirectionalInscatteringColorDistance(float Value) {
}

void UExponentialHeightFogComponent::SetInscatteringTextureTint(FLinearColor Value) {
}

void UExponentialHeightFogComponent::SetInscatteringColorCubemapAngle(float Value) {
}

void UExponentialHeightFogComponent::SetInscatteringColorCubemap(UTextureCube* Value) {
}

void UExponentialHeightFogComponent::SetFullyDirectionalInscatteringColorDistance(float Value) {
}

void UExponentialHeightFogComponent::SetFogMaxOpacity(float Value) {
}

void UExponentialHeightFogComponent::SetFogInscatteringColor(FLinearColor Value) {
}

void UExponentialHeightFogComponent::SetFogHeightFalloff(float Value) {
}

void UExponentialHeightFogComponent::SetFogDensity(float Value) {
}

void UExponentialHeightFogComponent::SetFogCutoffDistance(float Value) {
}

void UExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance(float Value) {
}

void UExponentialHeightFogComponent::SetDirectionalInscatteringExponent(float Value) {
}

void UExponentialHeightFogComponent::SetDirectionalInscatteringColor(FLinearColor Value) {
}

UExponentialHeightFogComponent::UExponentialHeightFogComponent() {
    this->FogDensity = 0.02f;
    this->FogHeightFalloff = 0.20f;
    this->InscatteringColorCubemap = NULL;
    this->InscatteringColorCubemapAngle = 0.00f;
    this->FullyDirectionalInscatteringColorDistance = 100000.00f;
    this->NonDirectionalInscatteringColorDistance = 1000.00f;
    this->DirectionalInscatteringExponent = 4.00f;
    this->DirectionalInscatteringStartDistance = 10000.00f;
    this->FogMaxOpacity = 1.00f;
    this->StartDistance = 0.00f;
    this->FogCutoffDistance = 0.00f;
    this->bEnableVolumetricFog = false;
    this->VolumetricFogScatteringDistribution = 0.20f;
    this->VolumetricFogExtinctionScale = 1.00f;
    this->VolumetricFogDistance = 6000.00f;
    this->VolumetricFogStaticLightingScatteringIntensity = 1.00f;
    this->bOverrideLightColorsWithFogInscatteringColors = false;
}

