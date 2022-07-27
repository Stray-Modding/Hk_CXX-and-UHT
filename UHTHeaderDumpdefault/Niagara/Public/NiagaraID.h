#pragma once
#include "CoreMinimal.h"
#include "NiagaraID.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AcquireTag;
    
    NIAGARA_API FNiagaraID();
};

