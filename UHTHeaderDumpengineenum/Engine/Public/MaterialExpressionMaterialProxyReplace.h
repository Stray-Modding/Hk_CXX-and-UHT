#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionMaterialProxyReplace.generated.h"

UCLASS()
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Realtime;
    
    UPROPERTY()
    FExpressionInput MaterialProxy;
    
    UMaterialExpressionMaterialProxyReplace();
};

