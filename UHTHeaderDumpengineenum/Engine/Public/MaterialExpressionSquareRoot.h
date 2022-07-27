#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSquareRoot.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionSquareRoot : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionSquareRoot();
};

