#include "WindDirectionalSourceComponent.h"

void UWindDirectionalSourceComponent::SetWindType(EWindSourceType InNewType) {
}

void UWindDirectionalSourceComponent::SetStrength(float InNewStrength) {
}

void UWindDirectionalSourceComponent::SetSpeed(float InNewSpeed) {
}

void UWindDirectionalSourceComponent::SetRadius(float InNewRadius) {
}

void UWindDirectionalSourceComponent::SetMinimumGustAmount(float InNewMinGust) {
}

void UWindDirectionalSourceComponent::SetMaximumGustAmount(float InNewMaxGust) {
}

UWindDirectionalSourceComponent::UWindDirectionalSourceComponent() {
    this->Strength = 0.10f;
    this->Speed = 0.10f;
    this->MinGustAmount = 0.10f;
    this->MaxGustAmount = 0.20f;
    this->Radius = 0.00f;
    this->bPointWind = false;
}

