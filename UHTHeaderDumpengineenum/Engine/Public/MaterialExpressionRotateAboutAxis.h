#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionRotateAboutAxis.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput NormalizedRotationAxis;
    
    UPROPERTY()
    FExpressionInput RotationAngle;
    
    UPROPERTY()
    FExpressionInput PivotPoint;
    
    UPROPERTY()
    FExpressionInput Position;
    
    UPROPERTY(EditAnywhere)
    float Period;
    
    UMaterialExpressionRotateAboutAxis();
};

