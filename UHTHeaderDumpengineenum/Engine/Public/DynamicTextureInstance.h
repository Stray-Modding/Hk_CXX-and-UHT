#pragma once
#include "CoreMinimal.h"
#include "StreamableTextureInstance.h"
#include "DynamicTextureInstance.generated.h"

class UTexture2D;

USTRUCT()
struct ENGINE_API FDynamicTextureInstance : public FStreamableTextureInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTexture2D* Texture;
    
    UPROPERTY()
    bool bAttached;
    
    UPROPERTY()
    float OriginalRadius;
    
    FDynamicTextureInstance();
};

