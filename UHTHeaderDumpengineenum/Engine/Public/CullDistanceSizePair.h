#pragma once
#include "CoreMinimal.h"
#include "CullDistanceSizePair.generated.h"

USTRUCT(BlueprintType)
struct FCullDistanceSizePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CullDistance;
    
    ENGINE_API FCullDistanceSizePair();
};

