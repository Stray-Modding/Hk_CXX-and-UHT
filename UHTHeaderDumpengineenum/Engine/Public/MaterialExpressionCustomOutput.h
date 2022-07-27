#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionCustomOutput.generated.h"

UCLASS(Abstract, CollapseCategories, MinimalAPI)
class UMaterialExpressionCustomOutput : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionCustomOutput();
};

