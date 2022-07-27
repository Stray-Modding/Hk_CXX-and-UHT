#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCustomOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpressionTangentOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionTangentOutput();
};

