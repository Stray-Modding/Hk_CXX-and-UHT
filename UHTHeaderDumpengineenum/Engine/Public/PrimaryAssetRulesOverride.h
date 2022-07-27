#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
#include "PrimaryAssetRules.h"
#include "PrimaryAssetRulesOverride.generated.h"

USTRUCT(BlueprintType)
struct FPrimaryAssetRulesOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrimaryAssetId PrimaryAssetId;
    
    UPROPERTY(EditAnywhere)
    FPrimaryAssetRules Rules;
    
    ENGINE_API FPrimaryAssetRulesOverride();
};

