#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "EMaterialVectorCoordTransform.h"
#include "EMaterialVectorCoordTransformSource.h"
#include "MaterialExpressionTransform.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionTransform : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialVectorCoordTransformSource> TransformSourceType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialVectorCoordTransform> TransformType;
    
    UMaterialExpressionTransform();
};

