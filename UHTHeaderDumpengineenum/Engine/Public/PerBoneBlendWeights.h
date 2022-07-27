#pragma once
#include "CoreMinimal.h"
#include "PerBoneBlendWeight.h"
#include "PerBoneBlendWeights.generated.h"

USTRUCT()
struct FPerBoneBlendWeights {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPerBoneBlendWeight> BoneBlendWeights;
    
    ENGINE_API FPerBoneBlendWeights();
};

