#include "CameraShakeSourceComponent.h"
#include "Templates/SubclassOf.h"

class UCameraShakeBase;

void UCameraShakeSourceComponent::StopAllCameraShakesOfType(TSubclassOf<UCameraShakeBase> InCameraShake, bool bImmediately) {
}

void UCameraShakeSourceComponent::StopAllCameraShakes(bool bImmediately) {
}

void UCameraShakeSourceComponent::StartCameraShake(TSubclassOf<UCameraShakeBase> InCameraShake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
}

void UCameraShakeSourceComponent::Start() {
}

float UCameraShakeSourceComponent::GetAttenuationFactor(const FVector& Location) const {
    return 0.0f;
}

UCameraShakeSourceComponent::UCameraShakeSourceComponent() {
    this->Attenuation = ECameraShakeAttenuation::Quadratic;
    this->InnerAttenuationRadius = 100.00f;
    this->OuterAttenuationRadius = 1000.00f;
    this->CameraShake = NULL;
    this->bAutoStart = false;
}

