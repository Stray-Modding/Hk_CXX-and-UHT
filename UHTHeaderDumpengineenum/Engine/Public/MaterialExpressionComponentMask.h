#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionComponentMask.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionComponentMask : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    uint8 R: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 G: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 B: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 A: 1;
    
    UMaterialExpressionComponentMask();
};

