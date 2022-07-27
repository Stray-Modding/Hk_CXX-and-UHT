#include "SplineMeshComponent.h"

void USplineMeshComponent::UpdateMesh() {
}

void USplineMeshComponent::SetStartTangent(FVector StartTangent, bool bUpdateMesh) {
}

void USplineMeshComponent::SetStartScale(FVector2D StartScale, bool bUpdateMesh) {
}

void USplineMeshComponent::SetStartRoll(float StartRoll, bool bUpdateMesh) {
}

void USplineMeshComponent::SetStartPosition(FVector StartPos, bool bUpdateMesh) {
}

void USplineMeshComponent::SetStartOffset(FVector2D StartOffset, bool bUpdateMesh) {
}

void USplineMeshComponent::SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh) {
}

void USplineMeshComponent::SetSplineUpDir(const FVector& InSplineUpDir, bool bUpdateMesh) {
}

void USplineMeshComponent::SetForwardAxis(TEnumAsByte<ESplineMeshAxis::Type> InForwardAxis, bool bUpdateMesh) {
}

void USplineMeshComponent::SetEndTangent(FVector EndTangent, bool bUpdateMesh) {
}

void USplineMeshComponent::SetEndScale(FVector2D EndScale, bool bUpdateMesh) {
}

void USplineMeshComponent::SetEndRoll(float EndRoll, bool bUpdateMesh) {
}

void USplineMeshComponent::SetEndPosition(FVector EndPos, bool bUpdateMesh) {
}

void USplineMeshComponent::SetEndOffset(FVector2D EndOffset, bool bUpdateMesh) {
}

void USplineMeshComponent::SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh) {
}

void USplineMeshComponent::SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh) {
}

FVector USplineMeshComponent::GetStartTangent() const {
    return FVector{};
}

FVector2D USplineMeshComponent::GetStartScale() const {
    return FVector2D{};
}

float USplineMeshComponent::GetStartRoll() const {
    return 0.0f;
}

FVector USplineMeshComponent::GetStartPosition() const {
    return FVector{};
}

FVector2D USplineMeshComponent::GetStartOffset() const {
    return FVector2D{};
}

FVector USplineMeshComponent::GetSplineUpDir() const {
    return FVector{};
}

TEnumAsByte<ESplineMeshAxis::Type> USplineMeshComponent::GetForwardAxis() const {
    return ESplineMeshAxis::X;
}

FVector USplineMeshComponent::GetEndTangent() const {
    return FVector{};
}

FVector2D USplineMeshComponent::GetEndScale() const {
    return FVector2D{};
}

float USplineMeshComponent::GetEndRoll() const {
    return 0.0f;
}

FVector USplineMeshComponent::GetEndPosition() const {
    return FVector{};
}

FVector2D USplineMeshComponent::GetEndOffset() const {
    return FVector2D{};
}

float USplineMeshComponent::GetBoundaryMin() const {
    return 0.0f;
}

float USplineMeshComponent::GetBoundaryMax() const {
    return 0.0f;
}

USplineMeshComponent::USplineMeshComponent() {
    this->SplineBoundaryMin = 0.00f;
    this->BodySetup = NULL;
    this->SplineBoundaryMax = 0.00f;
    this->bAllowSplineEditingPerInstance = false;
    this->bSmoothInterpRollScale = false;
    this->bMeshDirty = false;
    this->ForwardAxis = ESplineMeshAxis::X;
    this->VirtualTextureMainPassMaxDrawDistance = 0.00f;
}

