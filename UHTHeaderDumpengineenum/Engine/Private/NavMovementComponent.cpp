#include "NavMovementComponent.h"

void UNavMovementComponent::StopMovementKeepPathing() {
}

void UNavMovementComponent::StopActiveMovement() {
}

bool UNavMovementComponent::IsSwimming() const {
    return false;
}

bool UNavMovementComponent::IsMovingOnGround() const {
    return false;
}

bool UNavMovementComponent::IsFlying() const {
    return false;
}

bool UNavMovementComponent::IsFalling() const {
    return false;
}

bool UNavMovementComponent::IsCrouching() const {
    return false;
}

UNavMovementComponent::UNavMovementComponent() {
    this->FixedPathBrakingDistance = 0.00f;
    this->bUpdateNavAgentWithOwnersCollision = true;
    this->bUseAccelerationForPaths = false;
    this->bUseFixedBrakingDistanceForPaths = false;
    this->PathFollowingComp = NULL;
}

