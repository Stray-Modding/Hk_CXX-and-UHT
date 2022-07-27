#pragma once
#include "CoreMinimal.h"
#include "BoneFilter.generated.h"

USTRUCT(BlueprintType)
struct FBoneFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bExcludeSelf;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    ENGINE_API FBoneFilter();
};

