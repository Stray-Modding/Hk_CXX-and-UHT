#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionTextureSample.h"
#include "MaterialExpressionParticleSubUV.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bBlend: 1;
    
    UMaterialExpressionParticleSubUV();
};

