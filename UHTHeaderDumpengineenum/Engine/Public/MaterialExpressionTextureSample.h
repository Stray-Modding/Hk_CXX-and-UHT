#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionTextureBase.h"
#include "ExpressionInput.h"
#include "MaterialExpressionTextureSample.generated.h"

UCLASS(CollapseCategories)
class ENGINE_API UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinates;
    
    UMaterialExpressionTextureSample();
};

