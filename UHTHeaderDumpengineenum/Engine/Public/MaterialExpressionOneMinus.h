#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionOneMinus.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionOneMinus : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionOneMinus();
};

