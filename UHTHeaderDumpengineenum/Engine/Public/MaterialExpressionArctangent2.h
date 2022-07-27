#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionArctangent2.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionArctangent2 : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Y;
    
    UPROPERTY()
    FExpressionInput X;
    
    UMaterialExpressionArctangent2();
};

