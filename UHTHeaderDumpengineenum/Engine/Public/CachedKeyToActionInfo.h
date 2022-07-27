#pragma once
#include "CoreMinimal.h"
#include "CachedKeyToActionInfo.generated.h"

class UPlayerInput;

USTRUCT(BlueprintType)
struct FCachedKeyToActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPlayerInput* PlayerInput;
    
    ENGINE_API FCachedKeyToActionInfo();
};

