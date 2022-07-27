#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTime.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionTime : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bIgnorePause: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_Period: 1;
    
    UPROPERTY(EditAnywhere)
    float Period;
    
    UMaterialExpressionTime();
};

