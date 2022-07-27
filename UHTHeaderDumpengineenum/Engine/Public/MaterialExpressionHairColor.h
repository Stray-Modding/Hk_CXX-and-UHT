#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionHairColor.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionHairColor : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Melanin;
    
    UPROPERTY()
    FExpressionInput Redness;
    
    UPROPERTY()
    FExpressionInput DyeColor;
    
    UMaterialExpressionHairColor();
};

