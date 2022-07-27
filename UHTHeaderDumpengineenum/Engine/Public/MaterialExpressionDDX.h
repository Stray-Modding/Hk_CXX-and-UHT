#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDDX.generated.h"

UCLASS()
class UMaterialExpressionDDX : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Value;
    
    UMaterialExpressionDDX();
};

