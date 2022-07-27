#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputDelegateBinding.h"
#include "EInputEvent.h"
#include "BlueprintInputTouchDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EInputEvent> InputKeyEvent;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    FBlueprintInputTouchDelegateBinding();
};

