#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSphereMask.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionSphereMask : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY()
    FExpressionInput Radius;
    
    UPROPERTY()
    FExpressionInput Hardness;
    
    UPROPERTY(EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    float HardnessPercent;
    
    UMaterialExpressionSphereMask();
};

