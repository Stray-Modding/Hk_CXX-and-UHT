#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionPerInstanceCustomData.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionPerInstanceCustomData : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput DefaultValue;
    
    UPROPERTY(EditAnywhere)
    float ConstDefaultValue;
    
    UPROPERTY(EditAnywhere)
    uint32 DataIndex;
    
    UMaterialExpressionPerInstanceCustomData();
};

