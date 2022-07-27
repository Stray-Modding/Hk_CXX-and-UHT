#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCrossProduct.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionCrossProduct : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UMaterialExpressionCrossProduct();
};

