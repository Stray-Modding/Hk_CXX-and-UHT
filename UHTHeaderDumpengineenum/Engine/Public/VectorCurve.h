#pragma once
#include "CoreMinimal.h"
#include "AnimCurveBase.h"
#include "RichCurve.h"
#include "VectorCurve.generated.h"

USTRUCT(BlueprintType)
struct FVectorCurve : public FAnimCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve FloatCurves[3];
    
    ENGINE_API FVectorCurve();
};

