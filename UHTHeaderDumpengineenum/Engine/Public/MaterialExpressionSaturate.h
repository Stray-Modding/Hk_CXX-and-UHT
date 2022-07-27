#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSaturate.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionSaturate : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionSaturate();
};

