#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionAbs.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionAbs : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionAbs();
};

