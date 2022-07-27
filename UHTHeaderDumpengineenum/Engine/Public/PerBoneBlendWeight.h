#pragma once
#include "CoreMinimal.h"
#include "PerBoneBlendWeight.generated.h"

USTRUCT(BlueprintType)
struct FPerBoneBlendWeight {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SourceIndex;
    
    UPROPERTY()
    float BlendWeight;
    
    ENGINE_API FPerBoneBlendWeight();
};

