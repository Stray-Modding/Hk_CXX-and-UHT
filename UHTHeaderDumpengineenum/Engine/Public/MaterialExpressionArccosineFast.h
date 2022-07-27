#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionArccosineFast.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionArccosineFast : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionArccosineFast();
};

