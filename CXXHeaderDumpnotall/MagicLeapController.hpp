#ifndef UE4SS_SDK_MagicLeapController_HPP
#define UE4SS_SDK_MagicLeapController_HPP

#include "MagicLeapController_enums.hpp"

class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SetMotionSourceForHand(EControllerHand Hand, FName MotionSource);
    bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);
    bool PlayLEDPattern(FName MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    bool PlayLEDEffect(FName MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    bool PlayHapticPattern(FName MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
    bool PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    bool PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    bool PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
    int32 MaxSupportedMagicLeapControllers();
    bool IsMLControllerConnected(FName MotionSource);
    void InvertControllerMapping();
    FName GetMotionSourceForHand(EControllerHand Hand);
    EMagicLeapControllerType GetMLControllerType(EControllerHand Hand);
    EControllerHand GetHandForMotionSource(FName MotionSource);
    EMagicLeapControllerType GetControllerType(FName MotionSource);
    EMagicLeapControllerTrackingMode GetControllerTrackingMode();
    bool GetControllerMapping(int32 ControllerIndex, EControllerHand& Hand);
};

struct FMagicLeapTouchpadGesture
{
    EControllerHand Hand;
    FName MotionSource;
    EMagicLeapTouchpadGestureType Type;
    EMagicLeapTouchpadGestureDirection Direction;
    FVector PositionAndForce;
    float Speed;
    float Distance;
    float FingerGap;
    float Radius;
    float Angle;

};

class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
    FMagicLeapTouchpadGesturesComponentOnTouchpadGestureStart OnTouchpadGestureStart;
    void TouchpadGestureEvent(const FMagicLeapTouchpadGesture& GestureData);
    FMagicLeapTouchpadGesturesComponentOnTouchpadGestureContinue OnTouchpadGestureContinue;
    void TouchpadGestureEvent(const FMagicLeapTouchpadGesture& GestureData);
    FMagicLeapTouchpadGesturesComponentOnTouchpadGestureEnd OnTouchpadGestureEnd;
    void TouchpadGestureEvent(const FMagicLeapTouchpadGesture& GestureData);

};

#endif
