#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionScalarParameter.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCurveAtlasRowParameter.generated.h"

class UCurveLinearColorAtlas;
class UCurveLinearColor;

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveLinearColor* Curve;
    
    UPROPERTY(EditAnywhere)
    UCurveLinearColorAtlas* Atlas;
    
    UPROPERTY()
    FExpressionInput InputTime;
    
    UMaterialExpressionCurveAtlasRowParameter();
};

