#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionReflectionCapturePassSwitch.generated.h"

UCLASS()
class UMaterialExpressionReflectionCapturePassSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Default;
    
    UPROPERTY()
    FExpressionInput Reflection;
    
    UMaterialExpressionReflectionCapturePassSwitch();
};

