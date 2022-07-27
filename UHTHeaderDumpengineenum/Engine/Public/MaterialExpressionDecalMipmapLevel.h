#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDecalMipmapLevel.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput TextureSize;
    
    UPROPERTY(EditAnywhere)
    float ConstWidth;
    
    UPROPERTY(EditAnywhere)
    float ConstHeight;
    
    UMaterialExpressionDecalMipmapLevel();
};

