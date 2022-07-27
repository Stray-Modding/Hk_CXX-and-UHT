#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionFresnel.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionFresnel : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput ExponentIn;
    
    UPROPERTY(EditAnywhere)
    float Exponent;
    
    UPROPERTY()
    FExpressionInput BaseReflectFractionIn;
    
    UPROPERTY(EditAnywhere)
    float BaseReflectFraction;
    
    UPROPERTY()
    FExpressionInput Normal;
    
    UMaterialExpressionFresnel();
};

