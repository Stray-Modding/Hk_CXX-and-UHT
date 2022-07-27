#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "TextureLightProfile.generated.h"

UCLASS(MinimalAPI)
class UTextureLightProfile : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float Brightness;
    
    UPROPERTY(VisibleAnywhere)
    float TextureMultiplier;
    
    UTextureLightProfile();
};

