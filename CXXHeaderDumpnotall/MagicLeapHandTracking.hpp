#ifndef UE4SS_SDK_MagicLeapHandTracking_HPP
#define UE4SS_SDK_MagicLeapHandTracking_HPP

#include "MagicLeapHandTracking_enums.hpp"

class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
};

class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);
    bool SetConfiguration(const TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
    bool IsHoldingControl(EControllerHand Hand);
    float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);
    bool GetMotionSourceForHandKeypoint(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, FName& OutMotionSource);
    bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle);
    bool GetHandThumbTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary);
    bool GetHandKeypointForMotionSource(FName MotionSource, EMagicLeapHandTrackingKeypoint& OutKeyPoint);
    bool GetHandIndexFingerTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer);
    bool GetHandCenterNormalized(EControllerHand Hand, FVector& HandCenterNormalized);
    bool GetHandCenter(EControllerHand Hand, FTransform& HandCenter);
    bool GetGestureKeypointTransform(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform);
    bool GetGestureKeypoints(EControllerHand Hand, TArray<FTransform>& Keypoints);
    bool GetCurrentGestureConfidence(EControllerHand Hand, float& Confidence);
    bool GetCurrentGesture(EControllerHand Hand, EMagicLeapHandTrackingGesture& Gesture);
    bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled);
};

#endif
