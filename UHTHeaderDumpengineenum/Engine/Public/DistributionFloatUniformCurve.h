#pragma once
#include "CoreMinimal.h"
#include "DistributionFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector2D -FallbackName=InterpCurveVector2D
#include "DistributionFloatUniformCurve.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatUniformCurve : public UDistributionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveVector2D ConstantCurve;
    
    UDistributionFloatUniformCurve();
};

