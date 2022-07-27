#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDeltaTime.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionDeltaTime : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionDeltaTime();
};

