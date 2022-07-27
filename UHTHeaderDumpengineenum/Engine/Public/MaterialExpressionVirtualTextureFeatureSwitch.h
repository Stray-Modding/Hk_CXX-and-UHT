#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionVirtualTextureFeatureSwitch.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionVirtualTextureFeatureSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput no;
    
    UPROPERTY()
    FExpressionInput Yes;
    
    UMaterialExpressionVirtualTextureFeatureSwitch();
};

