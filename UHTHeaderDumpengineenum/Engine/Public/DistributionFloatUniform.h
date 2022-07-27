#pragma once
#include "CoreMinimal.h"
#include "DistributionFloat.h"
#include "DistributionFloatUniform.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatUniform : public UDistributionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    UDistributionFloatUniform();
};

