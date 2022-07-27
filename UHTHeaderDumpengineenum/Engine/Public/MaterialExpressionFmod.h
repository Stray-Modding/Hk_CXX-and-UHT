#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionFmod.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionFmod : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UMaterialExpressionFmod();
};

