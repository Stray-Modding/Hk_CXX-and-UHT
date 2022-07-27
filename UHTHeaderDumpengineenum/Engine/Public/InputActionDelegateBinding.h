#pragma once
#include "CoreMinimal.h"
#include "InputDelegateBinding.h"
#include "BlueprintInputActionDelegateBinding.h"
#include "InputActionDelegateBinding.generated.h"

UCLASS()
class ENGINE_API UInputActionDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings;
    
    UInputActionDelegateBinding();
};

