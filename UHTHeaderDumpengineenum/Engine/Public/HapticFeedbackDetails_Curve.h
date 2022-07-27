#pragma once
#include "CoreMinimal.h"
#include "RuntimeFloatCurve.h"
#include "HapticFeedbackDetails_Curve.generated.h"

USTRUCT(BlueprintType)
struct FHapticFeedbackDetails_Curve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Frequency;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Amplitude;
    
    ENGINE_API FHapticFeedbackDetails_Curve();
};

