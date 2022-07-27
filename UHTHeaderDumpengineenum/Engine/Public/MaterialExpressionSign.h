#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSign.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionSign : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionSign();
};

