#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "CustomInput.generated.h"

USTRUCT(BlueprintType)
struct FCustomInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName InputName;
    
    UPROPERTY()
    FExpressionInput Input;
    
    ENGINE_API FCustomInput();
};

