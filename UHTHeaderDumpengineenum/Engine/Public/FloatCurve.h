#pragma once
#include "CoreMinimal.h"
#include "AnimCurveBase.h"
#include "RichCurve.h"
#include "FloatCurve.generated.h"

USTRUCT(BlueprintType)
struct FFloatCurve : public FAnimCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve FloatCurve;
    
    ENGINE_API FFloatCurve();
};

