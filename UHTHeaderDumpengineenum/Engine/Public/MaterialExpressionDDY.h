#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDDY.generated.h"

UCLASS()
class UMaterialExpressionDDY : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Value;
    
    UMaterialExpressionDDY();
};

