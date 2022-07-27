#pragma once
#include "CoreMinimal.h"
#include "Distribution.h"
#include "DistributionFloat.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloat : public UDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bCanBeBaked: 1;
    
protected:
    UPROPERTY()
    uint8 bBakedDataSuccesfully: 1;
    
public:
    UDistributionFloat();
};

