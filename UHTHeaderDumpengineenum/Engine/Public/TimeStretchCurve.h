#pragma once
#include "CoreMinimal.h"
#include "TimeStretchCurveMarker.h"
#include "TimeStretchCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTimeStretchCurve {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float SamplingRate;
    
    UPROPERTY(EditAnywhere)
    float CurveValueMinPrecision;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTimeStretchCurveMarker> Markers;
    
    UPROPERTY(VisibleAnywhere)
    float Sum_dT_i_by_C_i[3];
    
public:
    FTimeStretchCurve();
};

