#include "SpringArmComponent.h"

bool USpringArmComponent::IsCollisionFixApplied() const {
    return false;
}

FVector USpringArmComponent::GetUnfixedCameraPosition() const {
    return FVector{};
}

FRotator USpringArmComponent::GetTargetRotation() const {
    return FRotator{};
}

USpringArmComponent::USpringArmComponent() {
    this->TargetArmLength = 300.00f;
    this->ProbeSize = 12.00f;
    this->ProbeChannel = ECC_Camera;
    this->bDoCollisionTest = true;
    this->bUsePawnControlRotation = false;
    this->bInheritPitch = true;
    this->bInheritYaw = true;
    this->bInheritRoll = true;
    this->bEnableCameraLag = false;
    this->bEnableCameraRotationLag = false;
    this->bUseCameraLagSubstepping = true;
    this->bDrawDebugLagMarkers = false;
    this->CameraLagSpeed = 10.00f;
    this->CameraRotationLagSpeed = 10.00f;
    this->CameraLagMaxTimeStep = 0.02f;
    this->CameraLagMaxDistance = 0.00f;
}

