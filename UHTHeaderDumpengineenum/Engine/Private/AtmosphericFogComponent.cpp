#include "AtmosphericFogComponent.h"

void UAtmosphericFogComponent::StartPrecompute() {
}

void UAtmosphericFogComponent::SetSunMultiplier(float NewSunMultiplier) {
}

void UAtmosphericFogComponent::SetStartDistance(float NewStartDistance) {
}

void UAtmosphericFogComponent::SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum) {
}

void UAtmosphericFogComponent::SetFogMultiplier(float NewFogMultiplier) {
}

void UAtmosphericFogComponent::SetDistanceScale(float NewDistanceScale) {
}

void UAtmosphericFogComponent::SetDistanceOffset(float NewDistanceOffset) {
}

void UAtmosphericFogComponent::SetDensityOffset(float NewDensityOffset) {
}

void UAtmosphericFogComponent::SetDensityMultiplier(float NewDensityMultiplier) {
}

void UAtmosphericFogComponent::SetDefaultLightColor(FLinearColor NewLightColor) {
}

void UAtmosphericFogComponent::SetDefaultBrightness(float NewBrightness) {
}

void UAtmosphericFogComponent::SetAltitudeScale(float NewAltitudeScale) {
}

void UAtmosphericFogComponent::DisableSunDisk(bool NewSunDisk) {
}

void UAtmosphericFogComponent::DisableGroundScattering(bool NewGroundScattering) {
}

UAtmosphericFogComponent::UAtmosphericFogComponent() {
    this->SunMultiplier = 1.00f;
    this->FogMultiplier = 1.00f;
    this->DensityMultiplier = 1.00f;
    this->DensityOffset = 0.00f;
    this->DistanceScale = 1.00f;
    this->AltitudeScale = 1.00f;
    this->DistanceOffset = 0.00f;
    this->GroundOffset = -100000.00f;
    this->StartDistance = 15000.00f;
    this->SunDiscScale = 1.00f;
    this->DefaultBrightness = 50.00f;
    this->bDisableSunDisk = false;
    this->bAtmosphereAffectsSunIlluminance = false;
    this->bDisableGroundScattering = false;
    this->TransmittanceTexture = NULL;
    this->IrradianceTexture = NULL;
}

