#pragma once
#include "CoreMinimal.h"
#include "NCPoolElement.h"
#include "NCPool.generated.h"

USTRUCT(BlueprintType)
struct FNCPool {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FNCPoolElement> FreeElements;
    
    NIAGARA_API FNCPool();
};

