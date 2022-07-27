#pragma once
#include "CoreMinimal.h"
#include "ChaosClothWeightedValue.generated.h"

USTRUCT(BlueprintType)
struct FChaosClothWeightedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float High;
    
    CHAOSCLOTH_API FChaosClothWeightedValue();
};

