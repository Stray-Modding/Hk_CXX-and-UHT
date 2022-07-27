#pragma once
#include "CoreMinimal.h"
#include "MagicLeapLightEstimationAmbientGlobalState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapLightEstimationColorTemperatureState.h"
#include "MagicLeapLightEstimationFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAGICLEAPLIGHTESTIMATION_API UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapLightEstimationFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsTrackerValid();
    
    UFUNCTION(BlueprintCallable)
    static bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyTracker();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateTracker();
    
};

