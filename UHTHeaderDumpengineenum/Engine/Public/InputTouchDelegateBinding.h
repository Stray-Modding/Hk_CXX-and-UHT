#pragma once
#include "CoreMinimal.h"
#include "InputDelegateBinding.h"
#include "BlueprintInputTouchDelegateBinding.h"
#include "InputTouchDelegateBinding.generated.h"

UCLASS()
class ENGINE_API UInputTouchDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings;
    
    UInputTouchDelegateBinding();
};

