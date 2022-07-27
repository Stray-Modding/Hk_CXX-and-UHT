#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionArcsineFast.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionArcsineFast : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionArcsineFast();
};

