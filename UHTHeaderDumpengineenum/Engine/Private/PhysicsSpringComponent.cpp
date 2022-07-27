#include "PhysicsSpringComponent.h"

FVector UPhysicsSpringComponent::GetSpringRestingPoint() const {
    return FVector{};
}

FVector UPhysicsSpringComponent::GetSpringDirection() const {
    return FVector{};
}

FVector UPhysicsSpringComponent::GetSpringCurrentEndPoint() const {
    return FVector{};
}

float UPhysicsSpringComponent::GetNormalizedCompressionScalar() const {
    return 0.0f;
}

UPhysicsSpringComponent::UPhysicsSpringComponent() {
    this->SpringStiffness = 25.00f;
    this->SpringDamping = 3.00f;
    this->SpringLengthAtRest = 100.00f;
    this->SpringRadius = 10.00f;
    this->SpringChannel = ECC_WorldDynamic;
    this->bIgnoreSelf = true;
    this->SpringCompression = 0.00f;
}

