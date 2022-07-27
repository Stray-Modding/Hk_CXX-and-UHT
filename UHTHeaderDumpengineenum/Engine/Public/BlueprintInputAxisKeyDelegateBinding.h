#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputDelegateBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "BlueprintInputAxisKeyDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FKey AxisKey;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    FBlueprintInputAxisKeyDelegateBinding();
};

