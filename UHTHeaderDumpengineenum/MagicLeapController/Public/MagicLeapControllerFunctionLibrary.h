#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "EMagicLeapControllerTrackingMode.h"
#include "EMagicLeapControllerHapticPattern.h"
#include "EMagicLeapControllerLEDPattern.h"
#include "EMagicLeapControllerLEDEffect.h"
#include "EMagicLeapControllerLEDSpeed.h"
#include "EMagicLeapControllerLEDColor.h"
#include "EMagicLeapControllerHapticIntensity.h"
#include "EMagicLeapControllerType.h"
#include "MagicLeapControllerFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAGICLEAPCONTROLLER_API UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapControllerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SetMotionSourceForHand(EControllerHand Hand, FName MotionSource);
    
    UFUNCTION(BlueprintCallable)
    static bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayLEDPattern(FName MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayLEDEffect(FName MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayHapticPattern(FName MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
    
    UFUNCTION(BlueprintCallable)
    static int32 MaxSupportedMagicLeapControllers();
    
    UFUNCTION(BlueprintPure)
    static bool IsMLControllerConnected(FName MotionSource);
    
    UFUNCTION(BlueprintCallable)
    static void InvertControllerMapping();
    
    UFUNCTION(BlueprintCallable)
    static FName GetMotionSourceForHand(EControllerHand Hand);
    
    UFUNCTION(BlueprintPure)
    static EMagicLeapControllerType GetMLControllerType(EControllerHand Hand);
    
    UFUNCTION(BlueprintCallable)
    static EControllerHand GetHandForMotionSource(FName MotionSource);
    
    UFUNCTION(BlueprintPure)
    static EMagicLeapControllerType GetControllerType(FName MotionSource);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapControllerTrackingMode GetControllerTrackingMode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetControllerMapping(int32 ControllerIndex, EControllerHand& Hand);
    
};

