#pragma once
#include "CoreMinimal.h"
#include "DrawToRenderTargetContext.generated.h"

class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FDrawToRenderTargetContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTextureRenderTarget2D* RenderTarget;
    
    ENGINE_API FDrawToRenderTargetContext();
};

