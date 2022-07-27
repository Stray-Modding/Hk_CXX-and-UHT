#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "EMaterialPositionTransformSource.h"
#include "MaterialExpressionTransformPosition.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionTransformPosition : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialPositionTransformSource> TransformSourceType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialPositionTransformSource> TransformType;
    
    UMaterialExpressionTransformPosition();
};

