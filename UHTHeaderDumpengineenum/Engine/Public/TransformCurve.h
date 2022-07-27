#pragma once
#include "CoreMinimal.h"
#include "AnimCurveBase.h"
#include "VectorCurve.h"
#include "TransformCurve.generated.h"

USTRUCT()
struct FTransformCurve : public FAnimCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVectorCurve TranslationCurve;
    
    UPROPERTY()
    FVectorCurve RotationCurve;
    
    UPROPERTY()
    FVectorCurve ScaleCurve;
    
    ENGINE_API FTransformCurve();
};

