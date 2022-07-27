#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MagicLeapLightEstimationAmbientGlobalState.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPLIGHTESTIMATION_API FMagicLeapLightEstimationAmbientGlobalState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AmbientIntensityNits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan Timestamp;
    
    FMagicLeapLightEstimationAmbientGlobalState();
};

