#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionPanner.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionPanner : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinate;
    
    UPROPERTY()
    FExpressionInput Time;
    
    UPROPERTY()
    FExpressionInput Speed;
    
    UPROPERTY(EditAnywhere)
    float SpeedX;
    
    UPROPERTY(EditAnywhere)
    float SpeedY;
    
    UPROPERTY(EditAnywhere)
    uint32 ConstCoordinate;
    
    UPROPERTY(EditAnywhere)
    bool bFractionalPart;
    
    UMaterialExpressionPanner();
};

