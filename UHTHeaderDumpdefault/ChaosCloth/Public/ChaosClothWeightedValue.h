#pragma once
#include "CoreMinimal.h"
#include "ChaosClothWeightedValue.generated.h"

USTRUCT(BlueprintType)
struct FChaosClothWeightedValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Low;
    
    UPROPERTY(EditAnywhere)
    float High;
    
    CHAOSCLOTH_API FChaosClothWeightedValue();
};

