#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "EShadowMapFlags.h"
#include "ShadowMapTexture2D.generated.h"

UCLASS(MinimalAPI)
class UShadowMapTexture2D : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EShadowMapFlags> ShadowmapFlags;
    
    UShadowMapTexture2D();
};

