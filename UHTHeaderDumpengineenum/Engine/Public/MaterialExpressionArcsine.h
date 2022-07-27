#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionArcsine.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionArcsine : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionArcsine();
};

