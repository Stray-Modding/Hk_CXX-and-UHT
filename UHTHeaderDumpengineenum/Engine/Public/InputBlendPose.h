#pragma once
#include "CoreMinimal.h"
#include "BranchFilter.h"
#include "InputBlendPose.generated.h"

USTRUCT(BlueprintType)
struct FInputBlendPose {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBranchFilter> BranchFilters;
    
    ENGINE_API FInputBlendPose();
};

