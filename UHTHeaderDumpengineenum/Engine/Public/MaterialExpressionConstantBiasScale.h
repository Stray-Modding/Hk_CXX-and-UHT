#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionConstantBiasScale.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    float Bias;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UMaterialExpressionConstantBiasScale();
};

