#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionLogarithm10.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionLogarithm10 : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput X;
    
    UMaterialExpressionLogarithm10();
};

