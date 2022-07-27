#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputDelegateBinding.h"
#include "EInputEvent.h"
#include "BlueprintInputActionDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName InputActionName;
    
    UPROPERTY()
    TEnumAsByte<EInputEvent> InputKeyEvent;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    FBlueprintInputActionDelegateBinding();
};

