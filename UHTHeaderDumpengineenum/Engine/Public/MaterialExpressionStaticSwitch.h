#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionStaticSwitch.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionStaticSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 DefaultValue: 1;
    
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY()
    FExpressionInput Value;
    
    UMaterialExpressionStaticSwitch();
};

