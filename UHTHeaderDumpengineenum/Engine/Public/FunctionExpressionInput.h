#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ExpressionInput.h"
#include "FunctionExpressionInput.generated.h"

class UMaterialExpressionFunctionInput;

USTRUCT()
struct FFunctionExpressionInput {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMaterialExpressionFunctionInput* ExpressionInput;
    
    UPROPERTY()
    FGuid ExpressionInputId;
    
    UPROPERTY()
    FExpressionInput Input;
    
    ENGINE_API FFunctionExpressionInput();
};

