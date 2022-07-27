#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionBumpOffset.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionBumpOffset : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinate;
    
    UPROPERTY()
    FExpressionInput Height;
    
    UPROPERTY()
    FExpressionInput HeightRatioInput;
    
    UPROPERTY(EditAnywhere)
    float HeightRatio;
    
    UPROPERTY(EditAnywhere)
    float ReferencePlane;
    
    UPROPERTY(EditAnywhere)
    uint32 ConstCoordinate;
    
    UMaterialExpressionBumpOffset();
};

