#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionIf.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionIf : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    FExpressionInput B;
    
    UPROPERTY()
    FExpressionInput AGreaterThanB;
    
    UPROPERTY()
    FExpressionInput AEqualsB;
    
    UPROPERTY()
    FExpressionInput ALessThanB;
    
    UPROPERTY(EditAnywhere)
    float EqualsThreshold;
    
    UPROPERTY(EditAnywhere)
    float ConstB;
    
    UPROPERTY()
    float ConstAEqualsB;
    
    UMaterialExpressionIf();
};

