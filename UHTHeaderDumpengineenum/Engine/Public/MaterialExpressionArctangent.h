#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionArctangent.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionArctangent : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionArctangent();
};

