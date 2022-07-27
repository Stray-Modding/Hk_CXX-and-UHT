#pragma once
#include "CoreMinimal.h"
#include "AssetMapping.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FAssetMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimationAsset* SourceAsset;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* TargetAsset;
    
    ENGINE_API FAssetMapping();
};

