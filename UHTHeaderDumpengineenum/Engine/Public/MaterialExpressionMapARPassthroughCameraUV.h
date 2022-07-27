#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionMapARPassthroughCameraUV.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionMapARPassthroughCameraUV : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinates;
    
    UMaterialExpressionMapARPassthroughCameraUV();
};

