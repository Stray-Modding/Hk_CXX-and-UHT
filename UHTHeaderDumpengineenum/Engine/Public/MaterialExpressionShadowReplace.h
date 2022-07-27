#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionShadowReplace.generated.h"

UCLASS()
class UMaterialExpressionShadowReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Default;
    
    UPROPERTY()
    FExpressionInput Shadow;
    
    UMaterialExpressionShadowReplace();
};

