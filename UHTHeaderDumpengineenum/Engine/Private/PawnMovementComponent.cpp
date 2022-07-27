#include "PawnMovementComponent.h"

class APawn;

FVector UPawnMovementComponent::K2_GetInputVector() const {
    return FVector{};
}

bool UPawnMovementComponent::IsMoveInputIgnored() const {
    return false;
}

FVector UPawnMovementComponent::GetPendingInputVector() const {
    return FVector{};
}

APawn* UPawnMovementComponent::GetPawnOwner() const {
    return NULL;
}

FVector UPawnMovementComponent::GetLastInputVector() const {
    return FVector{};
}

FVector UPawnMovementComponent::ConsumeInputVector() {
    return FVector{};
}

void UPawnMovementComponent::AddInputVector(FVector WorldVector, bool bForce) {
}

UPawnMovementComponent::UPawnMovementComponent() {
    this->PawnOwner = NULL;
}

