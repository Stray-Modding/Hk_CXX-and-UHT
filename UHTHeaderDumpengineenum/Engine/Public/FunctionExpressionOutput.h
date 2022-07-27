#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ExpressionOutput.h"
#include "FunctionExpressionOutput.generated.h"

class UMaterialExpressionFunctionOutput;

USTRUCT()
struct FFunctionExpressionOutput {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMaterialExpressionFunctionOutput* ExpressionOutput;
    
    UPROPERTY()
    FGuid ExpressionOutputId;
    
    UPROPERTY()
    FExpressionOutput Output;
    
    ENGINE_API FFunctionExpressionOutput();
};

