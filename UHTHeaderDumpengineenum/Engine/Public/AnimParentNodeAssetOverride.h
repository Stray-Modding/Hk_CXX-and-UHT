#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AnimParentNodeAssetOverride.generated.h"

class UAnimationAsset;

USTRUCT()
struct FAnimParentNodeAssetOverride {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimationAsset* NewAsset;
    
    UPROPERTY()
    FGuid ParentNodeGuid;
    
    ENGINE_API FAnimParentNodeAssetOverride();
};

