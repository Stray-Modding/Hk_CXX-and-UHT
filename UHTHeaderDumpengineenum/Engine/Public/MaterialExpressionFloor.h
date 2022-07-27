#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionFloor.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionFloor : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionFloor();
};

