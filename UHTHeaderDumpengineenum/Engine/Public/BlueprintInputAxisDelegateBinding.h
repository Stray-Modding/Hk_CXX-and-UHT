#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputDelegateBinding.h"
#include "BlueprintInputAxisDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName InputAxisName;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    FBlueprintInputAxisDelegateBinding();
};

