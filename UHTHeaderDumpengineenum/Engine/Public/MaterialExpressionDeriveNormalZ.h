#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDeriveNormalZ.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput InXY;
    
    UMaterialExpressionDeriveNormalZ();
};

