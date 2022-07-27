#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingRegionBoneFilter.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshSamplingRegionBoneFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    uint8 bIncludeOrExclude: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyToChildren: 1;
    
    ENGINE_API FSkeletalMeshSamplingRegionBoneFilter();
};

