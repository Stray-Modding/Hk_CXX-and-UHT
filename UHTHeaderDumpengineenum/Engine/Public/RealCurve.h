#pragma once
#include "CoreMinimal.h"
#include "IndexedCurve.h"
#include "ERichCurveExtrapolation.h"
#include "RealCurve.generated.h"

USTRUCT()
struct ENGINE_API FRealCurve : public FIndexedCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DefaultValue;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    
    FRealCurve();
};

