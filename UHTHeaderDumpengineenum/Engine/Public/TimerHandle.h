#pragma once
#include "CoreMinimal.h"
#include "TimerHandle.generated.h"

USTRUCT(BlueprintType)
struct FTimerHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    uint64 Handle;
    
public:
    ENGINE_API FTimerHandle();
};

