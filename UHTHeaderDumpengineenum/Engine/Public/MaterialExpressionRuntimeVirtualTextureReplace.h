#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionRuntimeVirtualTextureReplace.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionRuntimeVirtualTextureReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Default;
    
    UPROPERTY()
    FExpressionInput VirtualTextureOutput;
    
    UMaterialExpressionRuntimeVirtualTextureReplace();
};

