#pragma once
#include "CoreMinimal.h"
#include "InputDelegateBinding.h"
#include "BlueprintInputAxisKeyDelegateBinding.h"
#include "InputAxisKeyDelegateBinding.generated.h"

UCLASS()
class ENGINE_API UInputAxisKeyDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings;
    
    UInputAxisKeyDelegateBinding();
};

