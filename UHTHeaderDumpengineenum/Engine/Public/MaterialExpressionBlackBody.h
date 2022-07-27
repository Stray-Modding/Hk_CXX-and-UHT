#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionBlackBody.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionBlackBody : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Temp;
    
    UMaterialExpressionBlackBody();
};

