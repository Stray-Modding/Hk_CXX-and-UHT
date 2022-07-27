#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionPower.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionPower : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Base;
    
    UPROPERTY()
    FExpressionInput Exponent;
    
    UPROPERTY(EditAnywhere)
    float ConstExponent;
    
    UMaterialExpressionPower();
};

