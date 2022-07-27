#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDistanceFieldsRenderingSwitch.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionDistanceFieldsRenderingSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput no;
    
    UPROPERTY()
    FExpressionInput Yes;
    
    UMaterialExpressionDistanceFieldsRenderingSwitch();
};
