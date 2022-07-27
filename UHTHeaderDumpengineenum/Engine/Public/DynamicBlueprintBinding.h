#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicBlueprintBinding.generated.h"

UCLASS(Abstract)
class ENGINE_API UDynamicBlueprintBinding : public UObject {
    GENERATED_BODY()
public:
    UDynamicBlueprintBinding();
};

