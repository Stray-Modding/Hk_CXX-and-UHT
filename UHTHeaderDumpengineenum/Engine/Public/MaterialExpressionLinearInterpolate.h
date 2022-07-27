#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionLinearInterpolate.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY()
    FExpressionInput Alpha;
    
    UPROPERTY(EditAnywhere)
    float ConstA;
    
    UPROPERTY(EditAnywhere)
    float ConstB;
    
    UPROPERTY(EditAnywhere)
    float ConstAlpha;
    
    UMaterialExpressionLinearInterpolate();
};

