#include "ForceFeedbackComponent.h"

class UForceFeedbackEffect;

void UForceFeedbackComponent::Stop() {
}

void UForceFeedbackComponent::SetIntensityMultiplier(float NewIntensityMultiplier) {
}

void UForceFeedbackComponent::SetForceFeedbackEffect(UForceFeedbackEffect* NewForceFeedbackEffect) {
}

void UForceFeedbackComponent::Play(float StartTime) {
}

bool UForceFeedbackComponent::BP_GetAttenuationSettingsToApply(FForceFeedbackAttenuationSettings& OutAttenuationSettings) const {
    return false;
}

void UForceFeedbackComponent::AdjustAttenuation(const FForceFeedbackAttenuationSettings& InAttenuationSettings) {
}

UForceFeedbackComponent::UForceFeedbackComponent() {
    this->ForceFeedbackEffect = NULL;
    this->bAutoDestroy = false;
    this->bStopWhenOwnerDestroyed = false;
    this->bLooping = true;
    this->bIgnoreTimeDilation = false;
    this->bOverrideAttenuation = false;
    this->IntensityMultiplier = 1.00f;
    this->AttenuationSettings = NULL;
}

