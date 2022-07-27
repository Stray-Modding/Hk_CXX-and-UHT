#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionRotator.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionRotator : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinate;
    
    UPROPERTY()
    FExpressionInput Time;
    
    UPROPERTY(EditAnywhere)
    float CenterX;
    
    UPROPERTY(EditAnywhere)
    float CenterY;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    uint32 ConstCoordinate;
    
    UMaterialExpressionRotator();
};

