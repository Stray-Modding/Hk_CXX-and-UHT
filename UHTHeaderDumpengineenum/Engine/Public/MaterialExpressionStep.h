#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionStep.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionStep : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Y;
    
    UPROPERTY()
    FExpressionInput X;
    
    UPROPERTY(EditAnywhere)
    float ConstY;
    
    UPROPERTY(EditAnywhere)
    float ConstX;
    
    UMaterialExpressionStep();
};

