#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionQualitySwitch.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionQualitySwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Default;
    
    UPROPERTY()
    FExpressionInput Inputs[4];
    
    UMaterialExpressionQualitySwitch();
};

