#include "PhysicsConstraintComponent.h"

class UPrimitiveComponent;

void UPhysicsConstraintComponent::SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive) {
}

void UPhysicsConstraintComponent::SetOrientationDriveSLERP(bool bEnableSLERP) {
}

void UPhysicsConstraintComponent::SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize) {
}

void UPhysicsConstraintComponent::SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize) {
}

void UPhysicsConstraintComponent::SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize) {
}

void UPhysicsConstraintComponent::SetLinearVelocityTarget(const FVector& InVelTarget) {
}

void UPhysicsConstraintComponent::SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
}

void UPhysicsConstraintComponent::SetLinearPositionTarget(const FVector& InPosTarget) {
}

void UPhysicsConstraintComponent::SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
}

void UPhysicsConstraintComponent::SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold) {
}

void UPhysicsConstraintComponent::SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit) {
}

void UPhysicsConstraintComponent::SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold) {
}

void UPhysicsConstraintComponent::SetDisableCollision(bool bDisableCollision) {
}

void UPhysicsConstraintComponent::SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame::Type> Frame, const FVector& RefPosition) {
}

void UPhysicsConstraintComponent::SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame::Type> Frame, const FVector& PriAxis, const FVector& SecAxis) {
}

void UPhysicsConstraintComponent::SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame::Type> Frame, const FTransform& RefFrame) {
}

void UPhysicsConstraintComponent::SetConstrainedComponents(UPrimitiveComponent* Component1, FName BoneName1, UPrimitiveComponent* Component2, FName BoneName2) {
}

void UPhysicsConstraintComponent::SetAngularVelocityTarget(const FVector& InVelTarget) {
}

void UPhysicsConstraintComponent::SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive) {
}

void UPhysicsConstraintComponent::SetAngularVelocityDriveSLERP(bool bEnableSLERP) {
}

void UPhysicsConstraintComponent::SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
}

void UPhysicsConstraintComponent::SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle) {
}

void UPhysicsConstraintComponent::SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle) {
}

void UPhysicsConstraintComponent::SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle) {
}

void UPhysicsConstraintComponent::SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold) {
}

void UPhysicsConstraintComponent::SetAngularOrientationTarget(const FRotator& InPosTarget) {
}

void UPhysicsConstraintComponent::SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
}

void UPhysicsConstraintComponent::SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit) {
}

void UPhysicsConstraintComponent::SetAngularDriveMode(TEnumAsByte<EAngularDriveMode::Type> DriveMode) {
}

void UPhysicsConstraintComponent::SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold) {
}

bool UPhysicsConstraintComponent::IsBroken() {
    return false;
}

float UPhysicsConstraintComponent::GetCurrentTwist() const {
    return 0.0f;
}

float UPhysicsConstraintComponent::GetCurrentSwing2() const {
    return 0.0f;
}

float UPhysicsConstraintComponent::GetCurrentSwing1() const {
    return 0.0f;
}

void UPhysicsConstraintComponent::GetConstraintForce(FVector& OutLinearForce, FVector& OutAngularForce) {
}

void UPhysicsConstraintComponent::BreakConstraint() {
}

UPhysicsConstraintComponent::UPhysicsConstraintComponent() {
    this->ConstraintActor1 = NULL;
    this->ConstraintActor2 = NULL;
    this->ConstraintSetup = NULL;
}

