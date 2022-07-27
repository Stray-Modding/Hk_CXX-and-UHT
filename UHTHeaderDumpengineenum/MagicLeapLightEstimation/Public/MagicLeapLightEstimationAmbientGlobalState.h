#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MagicLeapLightEstimationAmbientGlobalState.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPLIGHTESTIMATION_API FMagicLeapLightEstimationAmbientGlobalState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<float> AmbientIntensityNits;
    
    UPROPERTY(BlueprintReadOnly)
    FTimespan Timestamp;
    
    FMagicLeapLightEstimationAmbientGlobalState();
};

