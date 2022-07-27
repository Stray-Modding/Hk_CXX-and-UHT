#include "MagicLeapControllerFunctionLibrary.h"

bool UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(EControllerHand Hand, FName MotionSource) {
    return false;
}

bool UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode) {
    return false;
}

bool UMagicLeapControllerFunctionLibrary::PlayLEDPattern(FName MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec) {
    return false;
}

bool UMagicLeapControllerFunctionLibrary::PlayLEDEffect(FName MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec) {
    return false;
}

bool UMagicLeapControllerFunctionLibrary::PlayHapticPattern(FName MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity) {
    return false;
}

bool UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec) {
    return false;
}

bool UMagicLeapControllerFunctionLibrary::PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec) {
    return false;
}

bool UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity) {
    return false;
}

int32 UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers() {
    return 0;
}

bool UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(FName MotionSource) {
    return false;
}

void UMagicLeapControllerFunctionLibrary::InvertControllerMapping() {
}

FName UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(EControllerHand Hand) {
    return NAME_None;
}

EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetMLControllerType(EControllerHand Hand) {
    return EMagicLeapControllerType::None;
}

EControllerHand UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(FName MotionSource) {
    return EControllerHand::Left;
}

EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetControllerType(FName MotionSource) {
    return EMagicLeapControllerType::None;
}

EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode() {
    return EMagicLeapControllerTrackingMode::InputService;
}

bool UMagicLeapControllerFunctionLibrary::GetControllerMapping(int32 ControllerIndex, EControllerHand& Hand) {
    return false;
}

UMagicLeapControllerFunctionLibrary::UMagicLeapControllerFunctionLibrary() {
}

