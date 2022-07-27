#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetType -FallbackName=PrimaryAssetType
#include "DirectoryPath.h"
#include "PrimaryAssetRules.h"
#include "PrimaryAssetRulesCustomOverride.generated.h"

USTRUCT(BlueprintType)
struct FPrimaryAssetRulesCustomOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrimaryAssetType PrimaryAssetType;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath FilterDirectory;
    
    UPROPERTY(EditAnywhere)
    FString FilterString;
    
    UPROPERTY(EditAnywhere)
    FPrimaryAssetRules Rules;
    
    ENGINE_API FPrimaryAssetRulesCustomOverride();
};

