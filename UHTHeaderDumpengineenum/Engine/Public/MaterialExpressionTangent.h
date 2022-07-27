#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionTangent.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionTangent : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    float Period;
    
    UMaterialExpressionTangent();
};

