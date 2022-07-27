#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCustomOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpressionBentNormalCustomOutput.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionBentNormalCustomOutput();
};

