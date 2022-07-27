#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDivide.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionDivide : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY(EditAnywhere)
    float ConstA;
    
    UPROPERTY(EditAnywhere)
    float ConstB;
    
    UMaterialExpressionDivide();
};

