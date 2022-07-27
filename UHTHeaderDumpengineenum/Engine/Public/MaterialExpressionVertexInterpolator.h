#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCustomOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpressionVertexInterpolator.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionVertexInterpolator();
};

