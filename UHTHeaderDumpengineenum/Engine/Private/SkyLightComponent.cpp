#include "SkyLightComponent.h"

class UTextureCube;

void USkyLightComponent::SetVolumetricScatteringIntensity(float NewIntensity) {
}

void USkyLightComponent::SetOcclusionTint(const FColor& InTint) {
}

void USkyLightComponent::SetOcclusionExponent(float InOcclusionExponent) {
}

void USkyLightComponent::SetOcclusionContrast(float InOcclusionContrast) {
}

void USkyLightComponent::SetMinOcclusion(float InMinOcclusion) {
}

void USkyLightComponent::SetLowerHemisphereColor(const FLinearColor& InLowerHemisphereColor) {
}

void USkyLightComponent::SetLightColor(FLinearColor NewLightColor) {
}

void USkyLightComponent::SetIntensity(float NewIntensity) {
}

void USkyLightComponent::SetIndirectLightingIntensity(float NewIntensity) {
}

void USkyLightComponent::SetCubemapBlend(UTextureCube* SourceCubemap, UTextureCube* DestinationCubemap, float InBlendFraction) {
}

void USkyLightComponent::SetCubemap(UTextureCube* NewCubemap) {
}

void USkyLightComponent::RecaptureSky() {
}

USkyLightComponent::USkyLightComponent() {
    this->bRealTimeCapture = false;
    this->SourceType = SLS_CapturedScene;
    this->Cubemap = NULL;
    this->SourceCubemapAngle = 0.00f;
    this->CubemapResolution = 128;
    this->SkyDistanceThreshold = 150000.00f;
    this->bCaptureEmissiveOnly = false;
    this->bLowerHemisphereIsBlack = true;
    this->OcclusionMaxDistance = 1000.00f;
    this->Contrast = 0.00f;
    this->OcclusionExponent = 1.00f;
    this->MinOcclusion = 0.00f;
    this->bCloudAmbientOcclusion = false;
    this->CloudAmbientOcclusionStrength = 1.00f;
    this->CloudAmbientOcclusionExtent = 150.00f;
    this->CloudAmbientOcclusionMapResolutionScale = 1.00f;
    this->CloudAmbientOcclusionApertureScale = 0.05f;
    this->OcclusionCombineMode = OCM_Minimum;
    this->BlendDestinationCubemap = NULL;
}

