#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionRayTracingQualitySwitch.generated.h"

UCLASS()
class UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Normal;
    
    UPROPERTY()
    FExpressionInput RayTraced;
    
    UMaterialExpressionRayTracingQualitySwitch();
};

