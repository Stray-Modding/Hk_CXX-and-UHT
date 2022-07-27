#pragma once
#include "CoreMinimal.h"
#include "BlueprintComponentDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintComponentDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ComponentPropertyName;
    
    UPROPERTY()
    FName DelegatePropertyName;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    FBlueprintComponentDelegateBinding();
};

