#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionAtmosphericFogColor.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput WorldPosition;
    
    UMaterialExpressionAtmosphericFogColor();
};

