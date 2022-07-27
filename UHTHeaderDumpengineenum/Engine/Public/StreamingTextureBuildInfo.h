#pragma once
#include "CoreMinimal.h"
#include "StreamingTextureBuildInfo.generated.h"

USTRUCT(BlueprintType)
struct FStreamingTextureBuildInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 PackedRelativeBox;
    
    UPROPERTY()
    int32 TextureLevelIndex;
    
    UPROPERTY()
    float TexelFactor;
    
    ENGINE_API FStreamingTextureBuildInfo();
};

