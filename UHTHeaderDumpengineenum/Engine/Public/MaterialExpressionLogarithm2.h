#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionLogarithm2.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionLogarithm2 : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput X;
    
    UMaterialExpressionLogarithm2();
};

