#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingRegionBuiltData.h"
#include "SkeletalMeshSamplingLODBuiltData.h"
#include "SkeletalMeshSamplingBuiltData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkeletalMeshSamplingBuiltData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData;
    
    UPROPERTY()
    TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;
    
    FSkeletalMeshSamplingBuiltData();
};

