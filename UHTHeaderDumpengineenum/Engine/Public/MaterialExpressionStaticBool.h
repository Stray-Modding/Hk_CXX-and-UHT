#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionStaticBool.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionStaticBool : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Value: 1;
    
    UMaterialExpressionStaticBool();
};

