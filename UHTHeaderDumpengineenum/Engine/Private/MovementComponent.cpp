#include "MovementComponent.h"

class USceneComponent;
class APhysicsVolume;

void UMovementComponent::StopMovementImmediately() {
}

void UMovementComponent::SnapUpdatedComponentToPlane() {
}

void UMovementComponent::SetUpdatedComponent(USceneComponent* NewUpdatedComponent) {
}

void UMovementComponent::SetPlaneConstraintOrigin(FVector PlaneOrigin) {
}

void UMovementComponent::SetPlaneConstraintNormal(FVector PlaneNormal) {
}

void UMovementComponent::SetPlaneConstraintFromVectors(FVector Forward, FVector Up) {
}

void UMovementComponent::SetPlaneConstraintEnabled(bool bEnabled) {
}

void UMovementComponent::SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting) {
}

void UMovementComponent::PhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}

bool UMovementComponent::K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult& OutHit, bool bSweep, bool bTeleport) {
    return false;
}

float UMovementComponent::K2_GetModifiedMaxSpeed() const {
    return 0.0f;
}

float UMovementComponent::K2_GetMaxSpeedModifier() const {
    return 0.0f;
}

bool UMovementComponent::IsExceedingMaxSpeed(float MaxSpeed) const {
    return false;
}

FVector UMovementComponent::GetPlaneConstraintOrigin() const {
    return FVector{};
}

FVector UMovementComponent::GetPlaneConstraintNormal() const {
    return FVector{};
}

EPlaneConstraintAxisSetting UMovementComponent::GetPlaneConstraintAxisSetting() const {
    return EPlaneConstraintAxisSetting::Custom;
}

APhysicsVolume* UMovementComponent::GetPhysicsVolume() const {
    return NULL;
}

float UMovementComponent::GetMaxSpeed() const {
    return 0.0f;
}

float UMovementComponent::GetGravityZ() const {
    return 0.0f;
}

FVector UMovementComponent::ConstrainNormalToPlane(FVector Normal) const {
    return FVector{};
}

FVector UMovementComponent::ConstrainLocationToPlane(FVector Location) const {
    return FVector{};
}

FVector UMovementComponent::ConstrainDirectionToPlane(FVector Direction) const {
    return FVector{};
}

UMovementComponent::UMovementComponent() {
    this->UpdatedComponent = NULL;
    this->UpdatedPrimitive = NULL;
    this->bUpdateOnlyIfRendered = false;
    this->bAutoUpdateTickRegistration = true;
    this->bTickBeforeOwner = true;
    this->bAutoRegisterUpdatedComponent = true;
    this->bConstrainToPlane = false;
    this->bSnapToPlaneAtStart = false;
    this->bAutoRegisterPhysicsVolumeUpdates = true;
    this->bComponentShouldUpdatePhysicsVolume = false;
    this->PlaneConstraintAxisSetting = EPlaneConstraintAxisSetting::Custom;
}

