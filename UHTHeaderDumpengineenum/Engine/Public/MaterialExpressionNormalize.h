#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionNormalize.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionNormalize : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput VectorInput;
    
    UMaterialExpressionNormalize();
};

