#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSine.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionSine : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    float Period;
    
    UMaterialExpressionSine();
};

