#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionShaderStageSwitch.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionShaderStageSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput PixelShader;
    
    UPROPERTY()
    FExpressionInput VertexShader;
    
    UMaterialExpressionShaderStageSwitch();
};

