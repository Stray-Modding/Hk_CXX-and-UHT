#pragma once
#include "CoreMinimal.h"
#include "RichCurve.h"
#include "RuntimeFloatCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ENGINE_API FRuntimeFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve EditorCurveData;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ExternalCurve;
    
    FRuntimeFloatCurve();
};

