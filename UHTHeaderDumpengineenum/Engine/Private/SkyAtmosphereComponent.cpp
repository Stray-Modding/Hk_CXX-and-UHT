#include "SkyAtmosphereComponent.h"

class UDirectionalLightComponent;

void USkyAtmosphereComponent::SetSkyLuminanceFactor(FLinearColor newValue) {
}

void USkyAtmosphereComponent::SetRayleighScatteringScale(float newValue) {
}

void USkyAtmosphereComponent::SetRayleighScattering(FLinearColor newValue) {
}

void USkyAtmosphereComponent::SetRayleighExponentialDistribution(float newValue) {
}

void USkyAtmosphereComponent::SetOtherAbsorptionScale(float newValue) {
}

void USkyAtmosphereComponent::SetOtherAbsorption(FLinearColor newValue) {
}

void USkyAtmosphereComponent::SetMultiScatteringFactor(float newValue) {
}

void USkyAtmosphereComponent::SetMieScatteringScale(float newValue) {
}

void USkyAtmosphereComponent::SetMieScattering(FLinearColor newValue) {
}

void USkyAtmosphereComponent::SetMieExponentialDistribution(float newValue) {
}

void USkyAtmosphereComponent::SetMieAnisotropy(float newValue) {
}

void USkyAtmosphereComponent::SetMieAbsorptionScale(float newValue) {
}

void USkyAtmosphereComponent::SetMieAbsorption(FLinearColor newValue) {
}

void USkyAtmosphereComponent::SetHeightFogContribution(float newValue) {
}

void USkyAtmosphereComponent::SetAtmosphereHeight(float newValue) {
}

void USkyAtmosphereComponent::SetAerialPespectiveViewDistanceScale(float newValue) {
}

void USkyAtmosphereComponent::OverrideAtmosphereLightDirection(int32 AtmosphereLightIndex, const FVector& LightDirection) {
}

FLinearColor USkyAtmosphereComponent::GetAtmosphereTransmitanceOnGroundAtPlanetTop(UDirectionalLightComponent* DirectionalLight) {
    return FLinearColor{};
}

USkyAtmosphereComponent::USkyAtmosphereComponent() {
    this->TransformMode = ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin;
    this->BottomRadius = 6360.00f;
    this->AtmosphereHeight = 60.00f;
    this->MultiScatteringFactor = 1.00f;
    this->TraceSampleCountScale = 1.00f;
    this->RayleighScatteringScale = 0.03f;
    this->RayleighExponentialDistribution = 8.00f;
    this->MieScatteringScale = 0.00f;
    this->MieAbsorptionScale = 0.00f;
    this->MieAnisotropy = 0.80f;
    this->MieExponentialDistribution = 1.20f;
    this->OtherAbsorptionScale = 0.00f;
    this->AerialPespectiveViewDistanceScale = 1.00f;
    this->HeightFogContribution = 1.00f;
    this->TransmittanceMinLightElevationAngle = -90.00f;
    this->AerialPerspectiveStartDepth = 0.10f;
}

