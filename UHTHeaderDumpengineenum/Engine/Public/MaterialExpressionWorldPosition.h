#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "EWorldPositionIncludedOffsets.h"
#include "MaterialExpressionWorldPosition.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionWorldPosition : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWorldPositionIncludedOffsets> WorldPositionShaderOffset;
    
    UMaterialExpressionWorldPosition();
};

