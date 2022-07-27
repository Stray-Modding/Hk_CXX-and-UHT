#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionFrac.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionFrac : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionFrac();
};

