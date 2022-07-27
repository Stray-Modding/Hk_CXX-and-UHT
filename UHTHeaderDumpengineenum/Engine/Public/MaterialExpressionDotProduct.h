#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDotProduct.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionDotProduct : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UMaterialExpressionDotProduct();
};

