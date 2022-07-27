#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCustomOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpressionClearCoatNormalCustomOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionClearCoatNormalCustomOutput();
};

