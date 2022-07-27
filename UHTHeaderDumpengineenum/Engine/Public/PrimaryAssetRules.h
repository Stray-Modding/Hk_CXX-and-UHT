#pragma once
#include "CoreMinimal.h"
#include "EPrimaryAssetCookRule.h"
#include "PrimaryAssetRules.generated.h"

USTRUCT(BlueprintType)
struct FPrimaryAssetRules {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    int32 ChunkId;
    
    UPROPERTY(EditAnywhere)
    bool bApplyRecursively;
    
    UPROPERTY(EditAnywhere)
    EPrimaryAssetCookRule CookRule;
    
    ENGINE_API FPrimaryAssetRules();
};

