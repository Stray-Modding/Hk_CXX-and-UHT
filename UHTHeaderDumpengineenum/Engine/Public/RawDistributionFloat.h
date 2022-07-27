#pragma once
#include "CoreMinimal.h"
#include "RawDistribution.h"
#include "RawDistributionFloat.generated.h"

class UDistributionFloat;

USTRUCT(BlueprintType)
struct ENGINE_API FRawDistributionFloat : public FRawDistribution {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float MinValue;
    
    UPROPERTY()
    float MaxValue;
    
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    UDistributionFloat* Distribution;
    
    FRawDistributionFloat();
};

