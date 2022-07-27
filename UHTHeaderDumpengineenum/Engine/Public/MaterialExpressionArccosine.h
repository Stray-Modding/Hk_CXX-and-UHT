#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionArccosine.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionArccosine : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionArccosine();
};

