#pragma once
#include "CoreMinimal.h"
#include "DepthFieldGlowInfo.h"
#include "FontRenderInfo.generated.h"

USTRUCT(BlueprintType)
struct FFontRenderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    uint8 bClipText: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bEnableShadow: 1;
    
    UPROPERTY(BlueprintReadWrite)
    FDepthFieldGlowInfo GlowInfo;
    
    ENGINE_API FFontRenderInfo();
};

