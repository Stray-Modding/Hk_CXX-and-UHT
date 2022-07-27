#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionInverseLinearInterpolate.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionInverseLinearInterpolate : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY()
    FExpressionInput Value;
    
    UPROPERTY(EditAnywhere)
    float ConstA;
    
    UPROPERTY(EditAnywhere)
    float ConstB;
    
    UPROPERTY(EditAnywhere)
    float ConstValue;
    
    UPROPERTY(EditAnywhere)
    bool bClampResult;
    
    UMaterialExpressionInverseLinearInterpolate();
};

