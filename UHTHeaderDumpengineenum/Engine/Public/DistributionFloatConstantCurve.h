#pragma once
#include "CoreMinimal.h"
#include "DistributionFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveFloat -FallbackName=InterpCurveFloat
#include "DistributionFloatConstantCurve.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatConstantCurve : public UDistributionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat ConstantCurve;
    
    UDistributionFloatConstantCurve();
};

