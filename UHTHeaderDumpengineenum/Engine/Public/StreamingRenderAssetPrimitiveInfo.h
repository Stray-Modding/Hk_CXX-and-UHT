#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "StreamingRenderAssetPrimitiveInfo.generated.h"

class UStreamableRenderAsset;

USTRUCT()
struct FStreamingRenderAssetPrimitiveInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStreamableRenderAsset* RenderAsset;
    
    UPROPERTY()
    FBoxSphereBounds Bounds;
    
    UPROPERTY()
    float TexelFactor;
    
    UPROPERTY()
    uint32 PackedRelativeBox;
    
    UPROPERTY(Transient)
    uint8 bAllowInvalidTexelFactorWhenUnregistered: 1;
    
    ENGINE_API FStreamingRenderAssetPrimitiveInfo();
};

