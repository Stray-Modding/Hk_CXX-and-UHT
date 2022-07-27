#pragma once
#include "CoreMinimal.h"
#include "EventGraphFastCallPair.generated.h"

class UFunction;

USTRUCT()
struct ENGINE_API FEventGraphFastCallPair {
    GENERATED_BODY()
public:
    UPROPERTY()
    UFunction* FunctionToPatch;
    
    UPROPERTY()
    int32 EventGraphCallOffset;
    
    FEventGraphFastCallPair();
};

