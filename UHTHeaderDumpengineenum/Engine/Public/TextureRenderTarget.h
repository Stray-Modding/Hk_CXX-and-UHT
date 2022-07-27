#pragma once
#include "CoreMinimal.h"
#include "Texture.h"
#include "TextureRenderTarget.generated.h"

UCLASS(Abstract, MinimalAPI)
class UTextureRenderTarget : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetGamma;
    
    UTextureRenderTarget();
};

