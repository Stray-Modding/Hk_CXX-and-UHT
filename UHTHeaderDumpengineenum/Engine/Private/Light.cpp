#include "Light.h"
#include "Net/UnrealNetwork.h"

class UMaterialInterface;

void ALight::ToggleEnabled() {
}

void ALight::SetLightFunctionScale(FVector NewLightFunctionScale) {
}

void ALight::SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial) {
}

void ALight::SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) {
}

void ALight::SetLightColor(FLinearColor NewLightColor) {
}

void ALight::SetEnabled(bool bSetEnabled) {
}

void ALight::SetCastShadows(bool bNewValue) {
}

void ALight::SetBrightness(float NewBrightness) {
}

void ALight::SetAffectTranslucentLighting(bool bNewValue) {
}

void ALight::OnRep_bEnabled() {
}

bool ALight::IsEnabled() const {
    return false;
}

FLinearColor ALight::GetLightColor() const {
    return FLinearColor{};
}

float ALight::GetBrightness() const {
    return 0.0f;
}

void ALight::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALight, bEnabled);
}

ALight::ALight() {
    this->LightComponent = NULL;
    this->bEnabled = false;
}

