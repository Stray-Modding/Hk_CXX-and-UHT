#pragma once
#include "CoreMinimal.h"
#include "InputDelegateBinding.h"
#include "BlueprintInputAxisDelegateBinding.h"
#include "InputAxisDelegateBinding.generated.h"

UCLASS()
class ENGINE_API UInputAxisDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings;
    
    UInputAxisDelegateBinding();
};

