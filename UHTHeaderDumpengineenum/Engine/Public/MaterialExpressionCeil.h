#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCeil.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionCeil : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionCeil();
};

