#include "CameraComponent.h"

class UBlendableInterface;
class IBlendableInterface;

void UCameraComponent::SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD) {
}

void UCameraComponent::SetProjectionMode(TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode) {
}

void UCameraComponent::SetPostProcessBlendWeight(float InPostProcessBlendWeight) {
}

void UCameraComponent::SetOrthoWidth(float InOrthoWidth) {
}

void UCameraComponent::SetOrthoNearClipPlane(float InOrthoNearClipPlane) {
}

void UCameraComponent::SetOrthoFarClipPlane(float InOrthoFarClipPlane) {
}

void UCameraComponent::SetFieldOfView(float InFieldOfView) {
}

void UCameraComponent::SetConstraintAspectRatio(bool bInConstrainAspectRatio) {
}

void UCameraComponent::SetAspectRatio(float InAspectRatio) {
}

void UCameraComponent::RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void UCameraComponent::OnCameraMeshHiddenChanged() {
}

void UCameraComponent::GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) {
}

void UCameraComponent::AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight) {
}

UCameraComponent::UCameraComponent() {
    this->FieldOfView = 90.00f;
    this->OrthoWidth = 512.00f;
    this->OrthoNearClipPlane = 0.00f;
    this->OrthoFarClipPlane = 2097152.00f;
    this->AspectRatio = 1.78f;
    this->bConstrainAspectRatio = false;
    this->bUseFieldOfViewForLOD = true;
    this->bLockToHmd = true;
    this->bUsePawnControlRotation = false;
    this->ProjectionMode = ECameraProjectionMode::Perspective;
    this->PostProcessBlendWeight = 1.00f;
}

