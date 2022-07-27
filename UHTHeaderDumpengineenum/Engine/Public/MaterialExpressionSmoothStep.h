#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSmoothStep.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionSmoothStep : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Min;
    
    UPROPERTY()
    FExpressionInput Max;
    
    UPROPERTY()
    FExpressionInput Value;
    
    UPROPERTY(EditAnywhere)
    float ConstMin;
    
    UPROPERTY(EditAnywhere)
    float ConstMax;
    
    UPROPERTY(EditAnywhere)
    float ConstValue;
    
    UMaterialExpressionSmoothStep();
};

