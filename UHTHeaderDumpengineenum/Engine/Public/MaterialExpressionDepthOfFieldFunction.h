#pragma once
#include "CoreMinimal.h"
#include "EDepthOfFieldFunctionValue.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDepthOfFieldFunction.generated.h"

UCLASS()
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDepthOfFieldFunctionValue> FunctionValue;
    
    UPROPERTY()
    FExpressionInput Depth;
    
    UMaterialExpressionDepthOfFieldFunction();
};

