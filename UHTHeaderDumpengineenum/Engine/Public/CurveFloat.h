#pragma once
#include "CoreMinimal.h"
#include "CurveBase.h"
#include "RichCurve.h"
#include "CurveFloat.generated.h"

UCLASS()
class ENGINE_API UCurveFloat : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve FloatCurve;
    
    UPROPERTY()
    bool bIsEventCurve;
    
    UCurveFloat();
    UFUNCTION(BlueprintPure)
    float GetFloatValue(float InTime) const;
    
};

