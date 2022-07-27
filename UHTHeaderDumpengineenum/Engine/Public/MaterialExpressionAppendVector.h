#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionAppendVector.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionAppendVector : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UMaterialExpressionAppendVector();
};

