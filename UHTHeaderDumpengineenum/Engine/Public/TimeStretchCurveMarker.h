#pragma once
#include "CoreMinimal.h"
#include "TimeStretchCurveMarker.generated.h"

USTRUCT(BlueprintType)
struct FTimeStretchCurveMarker {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float Time[3];
    
    UPROPERTY(VisibleAnywhere)
    float Alpha;
    
    ENGINE_API FTimeStretchCurveMarker();
};

