#pragma once
#include "CoreMinimal.h"
#include "CurveTrack.generated.h"

USTRUCT()
struct ENGINE_API FCurveTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName CurveName;
    
    UPROPERTY()
    TArray<float> CurveWeights;
    
    FCurveTrack();
};

