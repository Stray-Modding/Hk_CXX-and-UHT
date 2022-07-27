#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FExpressionInput {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 OutputIndex;
    
    UPROPERTY()
    FName InputName;
    
    UPROPERTY()
    FName ExpressionName;
    
    ENGINE_API FExpressionInput();
};

