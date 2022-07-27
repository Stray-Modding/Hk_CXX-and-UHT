#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapEyeBlinkState.h"
#include "EMagicLeapEyeTrackingCalibrationStatus.h"
#include "MagicLeapEyeTrackerFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAGICLEAPEYETRACKER_API UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapEyeTrackerFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);
    
    UFUNCTION(BlueprintPure)
    static EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
    
};

