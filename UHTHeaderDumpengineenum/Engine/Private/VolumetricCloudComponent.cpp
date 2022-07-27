#include "VolumetricCloudComponent.h"

class UMaterialInterface;

void UVolumetricCloudComponent::SetViewSampleCountScale(float newValue) {
}

void UVolumetricCloudComponent::SetTracingStartMaxDistance(float newValue) {
}

void UVolumetricCloudComponent::SetTracingMaxDistance(float newValue) {
}

void UVolumetricCloudComponent::SetStopTracingTransmittanceThreshold(float newValue) {
}

void UVolumetricCloudComponent::SetSkyLightCloudBottomOcclusion(float newValue) {
}

void UVolumetricCloudComponent::SetShadowViewSampleCountScale(float newValue) {
}

void UVolumetricCloudComponent::SetShadowTracingDistance(float newValue) {
}

void UVolumetricCloudComponent::SetShadowReflectionSampleCountScale(float newValue) {
}

void UVolumetricCloudComponent::SetReflectionSampleCountScale(float newValue) {
}

void UVolumetricCloudComponent::SetPlanetRadius(float newValue) {
}

void UVolumetricCloudComponent::SetMaterial(UMaterialInterface* newValue) {
}

void UVolumetricCloudComponent::SetLayerHeight(float newValue) {
}

void UVolumetricCloudComponent::SetLayerBottomAltitude(float newValue) {
}

void UVolumetricCloudComponent::SetGroundAlbedo(FColor newValue) {
}

void UVolumetricCloudComponent::SetbUsePerSampleAtmosphericLightTransmittance(bool newValue) {
}

UVolumetricCloudComponent::UVolumetricCloudComponent() {
    this->LayerBottomAltitude = 5.00f;
    this->LayerHeight = 10.00f;
    this->TracingStartMaxDistance = 350.00f;
    this->TracingMaxDistance = 50.00f;
    this->PlanetRadius = 6360.00f;
    this->bUsePerSampleAtmosphericLightTransmittance = false;
    this->SkyLightCloudBottomOcclusion = 0.50f;
    this->ViewSampleCountScale = 1.00f;
    this->ReflectionSampleCountScale = 1.00f;
    this->ShadowViewSampleCountScale = 1.00f;
    this->ShadowReflectionSampleCountScale = 1.00f;
    this->ShadowTracingDistance = 15.00f;
    this->StopTracingTransmittanceThreshold = 0.00f;
}

