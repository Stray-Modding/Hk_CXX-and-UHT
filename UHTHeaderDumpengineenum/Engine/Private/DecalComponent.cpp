#include "DecalComponent.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;

void UDecalComponent::SetSortOrder(int32 Value) {
}

void UDecalComponent::SetFadeScreenSize(float NewFadeScreenSize) {
}

void UDecalComponent::SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade) {
}

void UDecalComponent::SetFadeIn(float StartDelay, float Duaration) {
}

void UDecalComponent::SetDecalMaterial(UMaterialInterface* NewDecalMaterial) {
}

float UDecalComponent::GetFadeStartDelay() const {
    return 0.0f;
}

float UDecalComponent::GetFadeInStartDelay() const {
    return 0.0f;
}

float UDecalComponent::GetFadeInDuration() const {
    return 0.0f;
}

float UDecalComponent::GetFadeDuration() const {
    return 0.0f;
}

UMaterialInterface* UDecalComponent::GetDecalMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UDecalComponent::CreateDynamicMaterialInstance() {
    return NULL;
}

UDecalComponent::UDecalComponent() {
    this->DecalMaterial = NULL;
    this->SortOrder = 0;
    this->FadeScreenSize = 0.01f;
    this->FadeStartDelay = 0.00f;
    this->FadeDuration = 0.00f;
    this->FadeInDuration = 0.00f;
    this->FadeInStartDelay = 0.00f;
    this->bDestroyOwnerAfterFade = true;
}

