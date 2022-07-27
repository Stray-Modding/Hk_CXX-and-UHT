#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionArctangent2Fast.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionArctangent2Fast : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Y;
    
    UPROPERTY()
    FExpressionInput X;
    
    UMaterialExpressionArctangent2Fast();
};

