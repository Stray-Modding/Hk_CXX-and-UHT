#pragma once
#include "CoreMinimal.h"
#include "BranchFilter.generated.h"

USTRUCT(BlueprintType)
struct FBranchFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    int32 BlendDepth;
    
    ENGINE_API FBranchFilter();
};

