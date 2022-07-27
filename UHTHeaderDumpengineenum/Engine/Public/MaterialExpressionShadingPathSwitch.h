#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionShadingPathSwitch.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionShadingPathSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Default;
    
    UPROPERTY()
    FExpressionInput Inputs[3];
    
    UMaterialExpressionShadingPathSwitch();
};

