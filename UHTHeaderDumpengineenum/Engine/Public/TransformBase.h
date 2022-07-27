#pragma once
#include "CoreMinimal.h"
#include "TransformBaseConstraint.h"
#include "TransformBase.generated.h"

USTRUCT(BlueprintType)
struct FTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Node;
    
    UPROPERTY(EditAnywhere)
    FTransformBaseConstraint Constraints[2];
    
    ENGINE_API FTransformBase();
};

