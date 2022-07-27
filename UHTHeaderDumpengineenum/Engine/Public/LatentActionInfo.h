#pragma once
#include "CoreMinimal.h"
#include "LatentActionInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ENGINE_API FLatentActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Linkage;
    
    UPROPERTY()
    int32 UUID;
    
    UPROPERTY()
    FName ExecutionFunction;
    
    UPROPERTY()
    UObject* CallbackTarget;
    
    FLatentActionInfo();
};

