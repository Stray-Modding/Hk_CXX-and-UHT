#include "MagicLeapImageTrackerComponent.h"

class UTexture2D;

bool UMagicLeapImageTrackerComponent::SetTargetAsync(UTexture2D* ImageTarget) {
    return false;
}

bool UMagicLeapImageTrackerComponent::RemoveTargetAsync() {
    return false;
}

UMagicLeapImageTrackerComponent::UMagicLeapImageTrackerComponent() {
    this->TargetImageTexture = NULL;
    this->LongerDimension = 0.00f;
    this->bIsStationary = false;
    this->bUseUnreliablePose = false;
    this->AxisOrientation = EMagicLeapImageTargetOrientation::ForwardAxisAsNormal;
}

