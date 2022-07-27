#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionReflectionVectorWS.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput CustomWorldNormal;
    
    UPROPERTY(EditAnywhere)
    uint8 bNormalizeCustomWorldNormal: 1;
    
    UMaterialExpressionReflectionVectorWS();
};

