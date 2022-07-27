#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCosine.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionCosine : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    float Period;
    
    UMaterialExpressionCosine();
};

