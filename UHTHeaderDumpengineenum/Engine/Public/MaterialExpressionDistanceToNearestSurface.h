#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDistanceToNearestSurface.generated.h"

UCLASS()
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Position;
    
    UMaterialExpressionDistanceToNearestSurface();
};

