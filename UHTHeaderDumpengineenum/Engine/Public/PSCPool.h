#pragma once
#include "CoreMinimal.h"
#include "PSCPoolElem.h"
#include "PSCPool.generated.h"

USTRUCT(BlueprintType)
struct FPSCPool {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FPSCPoolElem> FreeElements;
    
    ENGINE_API FPSCPool();
};

