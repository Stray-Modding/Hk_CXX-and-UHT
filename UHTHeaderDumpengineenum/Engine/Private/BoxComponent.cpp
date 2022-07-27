#include "BoxComponent.h"

void UBoxComponent::SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps) {
}

FVector UBoxComponent::GetUnscaledBoxExtent() const {
    return FVector{};
}

FVector UBoxComponent::GetScaledBoxExtent() const {
    return FVector{};
}

UBoxComponent::UBoxComponent() {
    this->LineThickness = 0.00f;
}

