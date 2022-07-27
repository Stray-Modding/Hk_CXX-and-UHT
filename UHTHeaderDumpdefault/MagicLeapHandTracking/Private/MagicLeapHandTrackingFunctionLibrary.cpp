#include "MagicLeapHandTrackingFunctionLibrary.h"

void UMagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence) {
}

bool UMagicLeapHandTrackingFunctionLibrary::SetConfiguration(const TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::IsHoldingControl(EControllerHand Hand) {
    return false;
}

float UMagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture) {
    return 0.0f;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, FName& OutMotionSource) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(FName MotionSource, EMagicLeapHandTrackingKeypoint& OutKeyPoint) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(EControllerHand Hand, FVector& HandCenterNormalized) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenter(EControllerHand Hand, FTransform& HandCenter) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(EControllerHand Hand, TArray<FTransform>& Keypoints) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(EControllerHand Hand, float& Confidence) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(EControllerHand Hand, EMagicLeapHandTrackingGesture& Gesture) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled) {
    return false;
}

UMagicLeapHandTrackingFunctionLibrary::UMagicLeapHandTrackingFunctionLibrary() {
}

