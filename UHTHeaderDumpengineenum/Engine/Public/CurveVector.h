#pragma once
#include "CoreMinimal.h"
#include "CurveBase.h"
#include "RichCurve.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CurveVector.generated.h"

UCLASS(MinimalAPI)
class UCurveVector : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve FloatCurves[3];
    
    UCurveVector();
    UFUNCTION(BlueprintPure)
    FVector GetVectorValue(float InTime) const;
    
};

