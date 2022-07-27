#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingRegionMaterialFilter.h"
#include "SkeletalMeshSamplingRegionBoneFilter.h"
#include "SkeletalMeshSamplingRegion.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkeletalMeshSamplingRegion {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    int32 LODIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportUniformlyDistributedSampling: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;
    
    FSkeletalMeshSamplingRegion();
};

