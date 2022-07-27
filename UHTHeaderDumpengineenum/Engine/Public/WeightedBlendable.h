#pragma once
#include "CoreMinimal.h"
#include "WeightedBlendable.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FWeightedBlendable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* Object;
    
    ENGINE_API FWeightedBlendable();
};

