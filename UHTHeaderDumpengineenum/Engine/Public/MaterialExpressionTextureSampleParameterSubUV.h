#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionTextureSampleParameter2D.h"
#include "MaterialExpressionTextureSampleParameterSubUV.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bBlend: 1;
    
    UMaterialExpressionTextureSampleParameterSubUV();
};

