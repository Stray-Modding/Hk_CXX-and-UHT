#pragma once
#include "CoreMinimal.h"
#include "RichCurve.h"
#include "RuntimeCurveLinearColor.generated.h"

class UCurveLinearColor;

USTRUCT()
struct ENGINE_API FRuntimeCurveLinearColor {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve ColorCurves[4];
    
    UPROPERTY(EditAnywhere)
    UCurveLinearColor* ExternalCurve;
    
    FRuntimeCurveLinearColor();
};

