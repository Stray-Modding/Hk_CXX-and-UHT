#pragma once
#include "CoreMinimal.h"
#include "DynamicBlueprintBinding.h"
#include "BlueprintComponentDelegateBinding.h"
#include "ComponentDelegateBinding.generated.h"

UCLASS()
class ENGINE_API UComponentDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings;
    
    UComponentDelegateBinding();
};

