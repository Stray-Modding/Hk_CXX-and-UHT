#include "PhysicsHandleComponent.h"

class UPrimitiveComponent;

void UPhysicsHandleComponent::SetTargetRotation(FRotator NewRotation) {
}

void UPhysicsHandleComponent::SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation) {
}

void UPhysicsHandleComponent::SetTargetLocation(FVector NewLocation) {
}

void UPhysicsHandleComponent::SetLinearStiffness(float NewLinearStiffness) {
}

void UPhysicsHandleComponent::SetLinearDamping(float NewLinearDamping) {
}

void UPhysicsHandleComponent::SetInterpolationSpeed(float NewInterpolationSpeed) {
}

void UPhysicsHandleComponent::SetAngularStiffness(float NewAngularStiffness) {
}

void UPhysicsHandleComponent::SetAngularDamping(float NewAngularDamping) {
}

void UPhysicsHandleComponent::ReleaseComponent() {
}

void UPhysicsHandleComponent::GrabComponentAtLocationWithRotation(UPrimitiveComponent* Component, FName InBoneName, FVector Location, FRotator Rotation) {
}

void UPhysicsHandleComponent::GrabComponentAtLocation(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation) {
}

void UPhysicsHandleComponent::GrabComponent(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation, bool bConstrainRotation) {
}

void UPhysicsHandleComponent::GetTargetLocationAndRotation(FVector& TargetLocation, FRotator& TargetRotation) const {
}

UPrimitiveComponent* UPhysicsHandleComponent::GetGrabbedComponent() const {
    return NULL;
}

UPhysicsHandleComponent::UPhysicsHandleComponent() {
    this->GrabbedComponent = NULL;
    this->bSoftAngularConstraint = true;
    this->bSoftLinearConstraint = true;
    this->bInterpolateTarget = true;
    this->LinearDamping = 200.00f;
    this->LinearStiffness = 750.00f;
    this->AngularDamping = 500.00f;
    this->AngularStiffness = 1500.00f;
    this->InterpolationSpeed = 50.00f;
}

