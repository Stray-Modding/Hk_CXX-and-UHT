#pragma once
#include "CoreMinimal.h"
#include "CachedPoseIndices.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedPoseIndices {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> OrderedSavedPoseNodeIndices;
    
    FCachedPoseIndices();
};

