#pragma once
#include "CoreMinimal.h"
#include "InputDelegateBinding.h"
#include "BlueprintInputKeyDelegateBinding.h"
#include "InputKeyDelegateBinding.generated.h"

UCLASS()
class ENGINE_API UInputKeyDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;
    
    UInputKeyDelegateBinding();
};

