#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCustomOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSingleLayerWaterMaterialOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput ScatteringCoefficients;
    
    UPROPERTY()
    FExpressionInput AbsorptionCoefficients;
    
    UPROPERTY()
    FExpressionInput PhaseG;
    
    UPROPERTY()
    FExpressionInput ColorScaleBehindWater;
    
    UMaterialExpressionSingleLayerWaterMaterialOutput();
};

