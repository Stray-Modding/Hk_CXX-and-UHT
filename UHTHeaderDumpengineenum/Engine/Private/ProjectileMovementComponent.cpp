#include "ProjectileMovementComponent.h"

class USceneComponent;

void UProjectileMovementComponent::StopSimulating(const FHitResult& HitResult) {
}

void UProjectileMovementComponent::SetVelocityInLocalSpace(FVector NewVelocity) {
}

void UProjectileMovementComponent::SetInterpolatedComponent(USceneComponent* Component) {
}

void UProjectileMovementComponent::ResetInterpolation() {
}

void UProjectileMovementComponent::MoveInterpolationTarget(const FVector& NewLocation, const FRotator& NewRotation) {
}

FVector UProjectileMovementComponent::LimitVelocity(FVector NewVelocity) const {
    return FVector{};
}

bool UProjectileMovementComponent::IsVelocityUnderSimulationThreshold() const {
    return false;
}

bool UProjectileMovementComponent::IsInterpolationComplete() const {
    return false;
}

UProjectileMovementComponent::UProjectileMovementComponent() {
    this->InitialSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->bRotationFollowsVelocity = false;
    this->bRotationRemainsVertical = false;
    this->bShouldBounce = false;
    this->bInitialVelocityInLocalSpace = true;
    this->bForceSubStepping = false;
    this->bSimulationEnabled = true;
    this->bSweepCollision = true;
    this->bIsHomingProjectile = false;
    this->bBounceAngleAffectsFriction = false;
    this->bIsSliding = false;
    this->bInterpMovement = false;
    this->bInterpRotation = false;
    this->PreviousHitTime = 1.00f;
    this->ProjectileGravityScale = 1.00f;
    this->Buoyancy = 0.00f;
    this->Bounciness = 0.60f;
    this->Friction = 0.20f;
    this->BounceVelocityStopSimulatingThreshold = 5.00f;
    this->MinFrictionFraction = 0.00f;
    this->HomingAccelerationMagnitude = 0.00f;
    this->MaxSimulationTimeStep = 0.05f;
    this->MaxSimulationIterations = 4;
    this->BounceAdditionalIterations = 1;
    this->InterpLocationTime = 0.10f;
    this->InterpRotationTime = 0.05f;
    this->InterpLocationMaxLagDistance = 300.00f;
    this->InterpLocationSnapToTargetDistance = 500.00f;
}

