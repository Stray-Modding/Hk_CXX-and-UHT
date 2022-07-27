#include "RectLightComponent.h"

class UTexture;

void URectLightComponent::SetSourceWidth(float bNewValue) {
}

void URectLightComponent::SetSourceTexture(UTexture* bNewValue) {
}

void URectLightComponent::SetSourceHeight(float newValue) {
}

void URectLightComponent::SetBarnDoorLength(float newValue) {
}

void URectLightComponent::SetBarnDoorAngle(float newValue) {
}

URectLightComponent::URectLightComponent() {
    this->SourceWidth = 64.00f;
    this->SourceHeight = 64.00f;
    this->BarnDoorAngle = 88.00f;
    this->BarnDoorLength = 20.00f;
    this->SourceTexture = NULL;
}

