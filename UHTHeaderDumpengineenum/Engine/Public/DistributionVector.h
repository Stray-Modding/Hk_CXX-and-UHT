#pragma once
#include "CoreMinimal.h"
#include "Distribution.h"
#include "DistributionVector.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVector : public UDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bCanBeBaked: 1;
    
    UPROPERTY()
    uint8 bIsDirty: 1;
    
protected:
    UPROPERTY()
    uint8 bBakedDataSuccesfully: 1;
    
public:
    UDistributionVector();
};

