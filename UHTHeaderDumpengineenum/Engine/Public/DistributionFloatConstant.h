#pragma once
#include "CoreMinimal.h"
#include "DistributionFloat.h"
#include "DistributionFloatConstant.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatConstant : public UDistributionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Constant;
    
    UDistributionFloatConstant();
};

