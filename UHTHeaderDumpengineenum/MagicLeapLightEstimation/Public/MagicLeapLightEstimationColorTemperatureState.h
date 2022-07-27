#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MagicLeapLightEstimationColorTemperatureState.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPLIGHTESTIMATION_API FMagicLeapLightEstimationColorTemperatureState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float ColorTemperatureKelvin;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor AmbientColor;
    
    UPROPERTY(BlueprintReadOnly)
    FTimespan Timestamp;
    
    FMagicLeapLightEstimationColorTemperatureState();
};

