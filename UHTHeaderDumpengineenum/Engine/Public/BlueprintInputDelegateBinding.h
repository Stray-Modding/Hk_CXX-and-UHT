#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputDelegateBinding.generated.h"

USTRUCT()
struct ENGINE_API FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bConsumeInput: 1;
    
    UPROPERTY()
    uint8 bExecuteWhenPaused: 1;
    
    UPROPERTY()
    uint8 bOverrideParentBinding: 1;
    
    FBlueprintInputDelegateBinding();
};

