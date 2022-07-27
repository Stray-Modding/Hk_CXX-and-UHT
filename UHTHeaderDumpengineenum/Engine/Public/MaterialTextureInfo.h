#pragma once
#include "CoreMinimal.h"
#include "MaterialTextureInfo.generated.h"

USTRUCT(BlueprintType)
struct FMaterialTextureInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float SamplingScale;
    
    UPROPERTY()
    int32 UVChannelIndex;
    
    UPROPERTY()
    FName TextureName;
    
    ENGINE_API FMaterialTextureInfo();
};

