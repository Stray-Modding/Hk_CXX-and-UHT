#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
#include "MaterialExpression.h"
#include "MaterialExpressionMaterialFunctionCall.generated.h"

class UMaterialFunctionInterface;

UCLASS(MinimalAPI)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialFunctionInterface* MaterialFunction;
    
    UPROPERTY(Transient)
    FMaterialParameterInfo FunctionParameterInfo;
    
    UMaterialExpressionMaterialFunctionCall();
};

