#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDistanceFieldGradient.generated.h"

UCLASS()
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Position;
    
    UMaterialExpressionDistanceFieldGradient();
};

