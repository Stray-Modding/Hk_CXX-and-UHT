#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionTextureSampleParameter2D.h"
#include "ETextureColorChannel.h"
#include "MaterialExpressionAntialiasedTextureMask.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Threshold;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETextureColorChannel> Channel;
    
    UMaterialExpressionAntialiasedTextureMask();
};

