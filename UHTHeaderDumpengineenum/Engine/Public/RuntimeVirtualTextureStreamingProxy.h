#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "RuntimeVirtualTextureStreamingProxy.generated.h"

UCLASS()
class URuntimeVirtualTextureStreamingProxy : public UTexture2D {
    GENERATED_BODY()
public:
    URuntimeVirtualTextureStreamingProxy();
};

