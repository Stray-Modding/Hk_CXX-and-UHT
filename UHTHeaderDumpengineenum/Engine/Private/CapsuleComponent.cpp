#include "CapsuleComponent.h"

void UCapsuleComponent::SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps) {
}

void UCapsuleComponent::SetCapsuleRadius(float Radius, bool bUpdateOverlaps) {
}

void UCapsuleComponent::SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps) {
}

void UCapsuleComponent::GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) const {
}

void UCapsuleComponent::GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight) const {
}

float UCapsuleComponent::GetUnscaledCapsuleRadius() const {
    return 0.0f;
}

float UCapsuleComponent::GetUnscaledCapsuleHalfHeight_WithoutHemisphere() const {
    return 0.0f;
}

float UCapsuleComponent::GetUnscaledCapsuleHalfHeight() const {
    return 0.0f;
}

float UCapsuleComponent::GetShapeScale() const {
    return 0.0f;
}

void UCapsuleComponent::GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) const {
}

void UCapsuleComponent::GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight) const {
}

float UCapsuleComponent::GetScaledCapsuleRadius() const {
    return 0.0f;
}

float UCapsuleComponent::GetScaledCapsuleHalfHeight_WithoutHemisphere() const {
    return 0.0f;
}

float UCapsuleComponent::GetScaledCapsuleHalfHeight() const {
    return 0.0f;
}

UCapsuleComponent::UCapsuleComponent() {
    this->CapsuleHalfHeight = 44.00f;
    this->CapsuleRadius = 22.00f;
}

