#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "EMaterialShadingModel.h"
#include "MaterialExpressionShadingModel.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionShadingModel : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
    
    UMaterialExpressionShadingModel();
};

