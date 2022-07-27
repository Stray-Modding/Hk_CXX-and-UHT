#include "SplineComponent.h"

void USplineComponent::UpdateSpline() {
}

void USplineComponent::SetWorldLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation) {
}

void USplineComponent::SetUpVectorAtSplinePoint(int32 PointIndex, const FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void USplineComponent::SetUnselectedSplineSegmentColor(const FLinearColor& SegmentColor) {
}

void USplineComponent::SetTangentsAtSplinePoint(int32 PointIndex, const FVector& InArriveTangent, const FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void USplineComponent::SetTangentColor(const FLinearColor& TangentColor) {
}

void USplineComponent::SetTangentAtSplinePoint(int32 PointIndex, const FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void USplineComponent::SetSplineWorldPoints(const TArray<FVector>& Points) {
}

void USplineComponent::SetSplinePointType(int32 PointIndex, TEnumAsByte<ESplinePointType::Type> Type, bool bUpdateSpline) {
}

void USplineComponent::SetSplinePoints(const TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void USplineComponent::SetSplineLocalPoints(const TArray<FVector>& Points) {
}

void USplineComponent::SetSelectedSplineSegmentColor(const FLinearColor& SegmentColor) {
}

void USplineComponent::SetScaleAtSplinePoint(int32 PointIndex, const FVector& InScaleVector, bool bUpdateSpline) {
}

void USplineComponent::SetRotationAtSplinePoint(int32 PointIndex, const FRotator& InRotation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void USplineComponent::SetLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void USplineComponent::SetDrawDebug(bool bShow) {
}

void USplineComponent::SetDefaultUpVector(const FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

void USplineComponent::SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline) {
}

void USplineComponent::SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline) {
}

void USplineComponent::RemoveSplinePoint(int32 Index, bool bUpdateSpline) {
}

bool USplineComponent::IsClosedLoop() const {
    return false;
}

FVector USplineComponent::GetWorldTangentAtDistanceAlongSpline(float Distance) const {
    return FVector{};
}

FRotator USplineComponent::GetWorldRotationAtTime(float Time, bool bUseConstantVelocity) const {
    return FRotator{};
}

FRotator USplineComponent::GetWorldRotationAtDistanceAlongSpline(float Distance) const {
    return FRotator{};
}

FVector USplineComponent::GetWorldLocationAtTime(float Time, bool bUseConstantVelocity) const {
    return FVector{};
}

FVector USplineComponent::GetWorldLocationAtSplinePoint(int32 PointIndex) const {
    return FVector{};
}

FVector USplineComponent::GetWorldLocationAtDistanceAlongSpline(float Distance) const {
    return FVector{};
}

FVector USplineComponent::GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity) const {
    return FVector{};
}

FVector USplineComponent::GetWorldDirectionAtDistanceAlongSpline(float Distance) const {
    return FVector{};
}

FVector USplineComponent::GetVectorPropertyAtSplinePoint(int32 Index, FName PropertyName) const {
    return FVector{};
}

FVector USplineComponent::GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName) const {
    return FVector{};
}

FVector USplineComponent::GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const {
    return FVector{};
}

FVector USplineComponent::GetUpVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetUpVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FTransform USplineComponent::GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale) const {
    return FTransform{};
}

FTransform USplineComponent::GetTransformAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const {
    return FTransform{};
}

FTransform USplineComponent::GetTransformAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const {
    return FTransform{};
}

FTransform USplineComponent::GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const {
    return FTransform{};
}

FVector USplineComponent::GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const {
    return FVector{};
}

FVector USplineComponent::GetTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetTangentAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

TEnumAsByte<ESplinePointType::Type> USplineComponent::GetSplinePointType(int32 PointIndex) const {
    return ESplinePointType::Linear;
}

float USplineComponent::GetSplineLength() const {
    return 0.0f;
}

FVector USplineComponent::GetScaleAtTime(float Time, bool bUseConstantVelocity) const {
    return FVector{};
}

FVector USplineComponent::GetScaleAtSplinePoint(int32 PointIndex) const {
    return FVector{};
}

FVector USplineComponent::GetScaleAtSplineInputKey(float InKey) const {
    return FVector{};
}

FVector USplineComponent::GetScaleAtDistanceAlongSpline(float Distance) const {
    return FVector{};
}

FRotator USplineComponent::GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const {
    return FRotator{};
}

FRotator USplineComponent::GetRotationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FRotator{};
}

FRotator USplineComponent::GetRotationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FRotator{};
}

FRotator USplineComponent::GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FRotator{};
}

float USplineComponent::GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const {
    return 0.0f;
}

float USplineComponent::GetRollAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return 0.0f;
}

float USplineComponent::GetRollAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return 0.0f;
}

float USplineComponent::GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return 0.0f;
}

FVector USplineComponent::GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const {
    return FVector{};
}

FVector USplineComponent::GetRightVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetRightVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

int32 USplineComponent::GetNumberOfSplineSegments() const {
    return 0;
}

int32 USplineComponent::GetNumberOfSplinePoints() const {
    return 0;
}

FVector USplineComponent::GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const {
    return FVector{};
}

FVector USplineComponent::GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetLocationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

void USplineComponent::GetLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& Location, FVector& Tangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
}

void USplineComponent::GetLocalLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& LocalLocation, FVector& LocalTangent) const {
}

FVector USplineComponent::GetLeaveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

float USplineComponent::GetInputKeyAtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

float USplineComponent::GetFloatPropertyAtSplinePoint(int32 Index, FName PropertyName) const {
    return 0.0f;
}

float USplineComponent::GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName) const {
    return 0.0f;
}

float USplineComponent::GetDistanceAlongSplineAtSplinePoint(int32 PointIndex) const {
    return 0.0f;
}

float USplineComponent::GetDistanceAlongSplineAtSplineInputKey(float InKey) const {
    return 0.0f;
}

FVector USplineComponent::GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const {
    return FVector{};
}

FVector USplineComponent::GetDirectionAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetDirectionAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::GetArriveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::FindUpVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FTransform USplineComponent::FindTransformClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const {
    return FTransform{};
}

FVector USplineComponent::FindTangentClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::FindScaleClosestToWorldLocation(const FVector& WorldLocation) const {
    return FVector{};
}

FRotator USplineComponent::FindRotationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FRotator{};
}

float USplineComponent::FindRollClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return 0.0f;
}

FVector USplineComponent::FindRightVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector USplineComponent::FindLocationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

float USplineComponent::FindInputKeyClosestToWorldLocation(const FVector& WorldLocation) const {
    return 0.0f;
}

FVector USplineComponent::FindDirectionClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

void USplineComponent::ClearSplinePoints(bool bUpdateSpline) {
}

void USplineComponent::AddSplineWorldPoint(const FVector& Position) {
}

void USplineComponent::AddSplinePointAtIndex(const FVector& Position, int32 Index, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void USplineComponent::AddSplinePoint(const FVector& Position, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void USplineComponent::AddSplineLocalPoint(const FVector& Position) {
}

void USplineComponent::AddPoints(const TArray<FSplinePoint>& Points, bool bUpdateSpline) {
}

void USplineComponent::AddPoint(const FSplinePoint& Point, bool bUpdateSpline) {
}

USplineComponent::USplineComponent() {
    this->bAllowSplineEditingPerInstance = true;
    this->ReparamStepsPerSegment = 10;
    this->Duration = 1.00f;
    this->bStationaryEndpoints = false;
    this->bSplineHasBeenEdited = false;
    this->bModifiedByConstructionScript = false;
    this->bInputSplinePointsToConstructionScript = false;
    this->bDrawDebug = true;
    this->bClosedLoop = false;
    this->bLoopPositionOverride = false;
    this->LoopPosition = 0.00f;
}

