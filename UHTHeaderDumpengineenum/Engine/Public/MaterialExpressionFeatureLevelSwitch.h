#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionFeatureLevelSwitch.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Default;
    
    UMaterialExpressionFeatureLevelSwitch();
};

